import AppKit
import Combine
import Darwin
import Foundation

private struct StoreState: Codable, Equatable {
    var schemaVersion = 1
    var items: [ClipboardItem] = []
    var pinboards: [Pinboard] = []
    var preferences = AppPreferences()
}

private struct DiskRevision: Equatable {
    var inode: UInt64
    var size: UInt64
    var modified: Date
}

@MainActor
public final class ClipboardStore: ObservableObject {
    @Published public var items: [ClipboardItem] = []
    @Published public var pinboards: [Pinboard] = []
    @Published public var preferences = AppPreferences()
    public let directoryURL: URL
    private var baseline = StoreState()
    private var diskRevision: DiskRevision?

    public static var defaultDirectoryURL: URL {
        FileManager.default.urls(for: .applicationSupportDirectory, in: .userDomainMask)[0]
            .appendingPathComponent("PasteReplica", isDirectory: true)
    }

    public init(directoryURL: URL) throws {
        self.directoryURL = directoryURL
        try FileManager.default.createDirectory(at: directoryURL, withIntermediateDirectories: true,
                                                attributes: [.posixPermissions: 0o700])
        try FileManager.default.setAttributes([.posixPermissions: 0o700], ofItemAtPath: directoryURL.path)
        try reload()
    }

    private var stateURL: URL { directoryURL.appendingPathComponent("clipboard.json") }
    private var current: StoreState { StoreState(items: items, pinboards: pinboards, preferences: preferences) }

    private func publish(_ state: StoreState, persisted: StoreState? = nil) {
        if items != state.items { items = state.items }
        if pinboards != state.pinboards { pinboards = state.pinboards }
        if preferences != state.preferences { preferences = state.preferences }
        baseline = persisted ?? state
    }

    private func withLock<T>(_ operation: () throws -> T) throws -> T {
        let path = directoryURL.appendingPathComponent(".lock").path
        let descriptor = Darwin.open(path, O_CREAT | O_RDWR, 0o600)
        guard descriptor >= 0 else { throw POSIXError(POSIXErrorCode(rawValue: errno) ?? .EIO) }
        defer { Darwin.close(descriptor) }
        guard flock(descriptor, LOCK_EX) == 0 else { throw POSIXError(POSIXErrorCode(rawValue: errno) ?? .EIO) }
        defer { flock(descriptor, LOCK_UN) }
        return try operation()
    }

    private func validate(_ state: StoreState) throws {
        guard state.schemaVersion == 1 else { throw ClipboardStoreError.unsupportedArchiveVersion }
        guard Set(state.items.map(\.id)).count == state.items.count,
              Set(state.pinboards.map(\.id)).count == state.pinboards.count else {
            throw ClipboardStoreError.duplicateIdentifiers
        }
    }

    private func readState() throws -> StoreState {
        guard FileManager.default.fileExists(atPath: stateURL.path) else { return StoreState() }
        let state = try JSONDecoder().decode(StoreState.self, from: Data(contentsOf: stateURL))
        try validate(state)
        return state
    }

    private func revision() throws -> DiskRevision? {
        guard FileManager.default.fileExists(atPath: stateURL.path) else { return nil }
        let attributes = try FileManager.default.attributesOfItem(atPath: stateURL.path)
        return DiskRevision(inode: (attributes[.systemFileNumber] as? NSNumber)?.uint64Value ?? 0,
                            size: (attributes[.size] as? NSNumber)?.uint64Value ?? 0,
                            modified: attributes[.modificationDate] as? Date ?? .distantPast)
    }

    private func latestState() throws -> StoreState {
        if try revision() == diskRevision { return baseline }
        return try readState()
    }

    private func writeAtomically(_ data: Data, to url: URL) throws {
        let temporary = url.deletingLastPathComponent().appendingPathComponent(".paste-replica-\(UUID().uuidString).tmp")
        guard FileManager.default.createFile(atPath: temporary.path, contents: nil,
                                              attributes: [.posixPermissions: 0o600]) else {
            throw CocoaError(.fileWriteUnknown)
        }
        defer { try? FileManager.default.removeItem(at: temporary) }
        let handle = try FileHandle(forWritingTo: temporary)
        do {
            try handle.write(contentsOf: data)
            try handle.synchronize()
            try handle.close()
        } catch {
            try? handle.close()
            throw error
        }
        guard Darwin.rename(temporary.path, url.path) == 0 else {
            throw POSIXError(POSIXErrorCode(rawValue: errno) ?? .EIO)
        }
        let parent = Darwin.open(url.deletingLastPathComponent().path, O_RDONLY)
        if parent >= 0 { _ = fsync(parent); Darwin.close(parent) }
    }

    private func mergedEntities<T: Identifiable & Equatable>(_ local: [T], _ base: [T], _ remote: [T],
                                                            merge: (T, T, T) -> T) -> [T] where T.ID == UUID {
        let old = Dictionary(uniqueKeysWithValues: base.map { ($0.id, $0) })
        let localByID = Dictionary(uniqueKeysWithValues: local.map { ($0.id, $0) })
        var result = Dictionary(uniqueKeysWithValues: remote.map { ($0.id, $0) })
        for id in old.keys where localByID[id] == nil { result.removeValue(forKey: id) }
        for value in local where old[value.id] != value {
            if let original = old[value.id] {
                // A permanent removal in another process must not be resurrected by a stale edit.
                if let current = result[value.id] { result[value.id] = merge(value, original, current) }
            } else {
                result[value.id] = value
            }
        }
        return Array(result.values)
    }

    private func merge(_ local: StoreState, onto remote: StoreState) -> StoreState {
        var result = remote
        result.items = mergedEntities(local.items, baseline.items, remote.items) { local, base, remote in
            var value = remote
            if local.createdAt != base.createdAt { value.createdAt = local.createdAt }
            if local.updatedAt != base.updatedAt { value.updatedAt = max(local.updatedAt, remote.updatedAt) }
            if local.title != base.title { value.title = local.title }
            if local.kind != base.kind { value.kind = local.kind }
            if local.plainText != base.plainText { value.plainText = local.plainText }
            if local.sourceName != base.sourceName { value.sourceName = local.sourceName }
            if local.sourceBundleID != base.sourceBundleID { value.sourceBundleID = local.sourceBundleID }
            if local.sourceDevice != base.sourceDevice { value.sourceDevice = local.sourceDevice }
            if local.isInHistory != base.isInHistory { value.isInHistory = local.isInHistory }
            if local.payloads != base.payloads { value.payloads = local.payloads }
            value.pinboardIDs.formUnion(local.pinboardIDs.subtracting(base.pinboardIDs))
            value.pinboardIDs.subtract(base.pinboardIDs.subtracting(local.pinboardIDs))
            if local.isDeleted != base.isDeleted { value.isDeleted = local.isDeleted }
            return value
        }
        result.pinboards = mergedEntities(local.pinboards, baseline.pinboards, remote.pinboards) { local, base, remote in
            var value = remote
            if local.name != base.name { value.name = local.name }
            if local.colorHex != base.colorHex { value.colorHex = local.colorHex }
            if local.sortOrder != base.sortOrder { value.sortOrder = local.sortOrder }
            return value
        }
        let local = local.preferences, base = baseline.preferences
        if local.historyLimit != base.historyLimit { result.preferences.historyLimit = local.historyLimit }
        if local.isMonitoringPaused != base.isMonitoringPaused { result.preferences.isMonitoringPaused = local.isMonitoringPaused }
        if local.pauseUntil != base.pauseUntil { result.preferences.pauseUntil = local.pauseUntil }
        if local.excludedBundleIDs != base.excludedBundleIDs { result.preferences.excludedBundleIDs = local.excludedBundleIDs }
        if local.ignoreConcealedContent != base.ignoreConcealedContent { result.preferences.ignoreConcealedContent = local.ignoreConcealedContent }
        if local.playSounds != base.playSounds { result.preferences.playSounds = local.playSounds }
        if local.appearance != base.appearance { result.preferences.appearance = local.appearance }
        if local.panelHeight != base.panelHeight { result.preferences.panelHeight = local.panelHeight }
        if local.launchAtLogin != base.launchAtLogin { result.preferences.launchAtLogin = local.launchAtLogin }
        if local.pasteToActiveApp != base.pasteToActiveApp { result.preferences.pasteToActiveApp = local.pasteToActiveApp }
        if local.alwaysPastePlainText != base.alwaysPastePlainText { result.preferences.alwaysPastePlainText = local.alwaysPastePlainText }
        if local.historyRetentionDays != base.historyRetentionDays { result.preferences.historyRetentionDays = local.historyRetentionDays }
        return result
    }

    private func normalize(_ state: inout StoreState) {
        let boards = Set(state.pinboards.map(\.id))
        for i in state.items.indices { state.items[i].pinboardIDs.formIntersection(boards) }
        state.items.sort { $0.updatedAt == $1.updatedAt ? $0.id.uuidString < $1.id.uuidString : $0.updatedAt > $1.updatedAt }
        var count = 0
        var removed: Set<UUID> = []
        if state.preferences.historyRetentionDays > 0 {
            let cutoff = Date().addingTimeInterval(-Double(state.preferences.historyRetentionDays) * 86_400)
            for i in state.items.indices where state.items[i].isInHistory && state.items[i].createdAt < cutoff {
                if state.items[i].pinboardIDs.isEmpty { removed.insert(state.items[i].id) }
                else { state.items[i].isInHistory = false }
            }
        }
        for i in state.items.indices where !state.items[i].isDeleted && state.items[i].isInHistory {
            if removed.contains(state.items[i].id) { continue }
            count += 1
            if count > max(1, state.preferences.historyLimit) {
                if state.items[i].pinboardIDs.isEmpty { removed.insert(state.items[i].id) }
                else { state.items[i].isInHistory = false }
            }
        }
        state.items.removeAll { removed.contains($0.id) }
        state.pinboards.sort { $0.sortOrder == $1.sortOrder ? $0.id.uuidString < $1.id.uuidString : $0.sortOrder < $1.sortOrder }
    }

    private func mutate<T>(_ change: (inout StoreState) throws -> T) throws -> T {
        let local = current
        try validate(local)
        return try withLock {
            let remote = try latestState()
            var state = merge(local, onto: remote)
            let result = try change(&state)
            try validate(state)
            normalize(&state)
            if state != remote || !FileManager.default.fileExists(atPath: stateURL.path) {
                let encoder = JSONEncoder()
                encoder.outputFormatting = [.sortedKeys]
                try writeAtomically(encoder.encode(state), to: stateURL)
            }
            diskRevision = try revision()
            publish(state)
            return result
        }
    }

    public func save() throws { try mutate { _ in } }
    public func reload() throws {
        let local = current
        try validate(local)
        try withLock {
            if local == baseline, try revision() == diskRevision { return }
            let remote = try latestState()
            // A timer refresh must not discard edits that have not reached save() yet.
            let merged = merge(local, onto: remote)
            publish(merged, persisted: remote)
            diskRevision = try revision()
        }
    }

    @discardableResult
    public func add(_ item: ClipboardItem) throws -> UUID {
        try mutate { state in
            if let i = state.items.firstIndex(where: {
                $0.kind == item.kind && $0.plainText == item.plainText && $0.payloads == item.payloads
            }) {
                state.items[i].updatedAt = max(Date(), item.updatedAt)
                state.items[i].sourceName = item.sourceName
                state.items[i].sourceBundleID = item.sourceBundleID
                state.items[i].sourceDevice = item.sourceDevice
                if !state.items[i].isInHistory && item.isInHistory { state.items[i].createdAt = item.createdAt }
                state.items[i].isInHistory = state.items[i].isInHistory || item.isInHistory
                state.items[i].isDeleted = false
                state.items[i].pinboardIDs.formUnion(item.pinboardIDs)
                return state.items[i].id
            }
            var item = item
            if item.title.isEmpty { item.title = String((item.plainText ?? item.kind.displayName).prefix(100)) }
            state.items.removeAll { $0.id == item.id }
            state.items.append(item)
            return item.id
        }
    }

    public func search(query: String, kind: ClipboardKind? = nil, pinboardID: UUID? = nil,
                       includeDeleted: Bool = false) -> [ClipboardItem] {
        func folded(_ string: String) -> String {
            string.folding(options: [.caseInsensitive, .diacriticInsensitive, .widthInsensitive], locale: Locale(identifier: "en_US_POSIX"))
        }
        let terms = folded(query).split(whereSeparator: \.isWhitespace).map(String.init)
        return items.filter { item in
            guard (includeDeleted || !item.isDeleted), kind == nil || item.kind == kind,
                  pinboardID == nil || item.pinboardIDs.contains(pinboardID!),
                  pinboardID != nil || !terms.isEmpty || includeDeleted || item.isInHistory else { return false }
            let haystack = folded([item.title, item.plainText ?? "", item.sourceName, item.sourceBundleID ?? "", item.kind.displayName].joined(separator: "\n"))
            return terms.allSatisfy { haystack.contains($0) }
        }.sorted { $0.updatedAt > $1.updatedAt }
    }

    public func updateItem(id: UUID, title: String? = nil, text: String? = nil) throws {
        try mutate { state in
            guard let i = state.items.firstIndex(where: { $0.id == id }) else { throw ClipboardStoreError.itemNotFound }
            if let title { state.items[i].title = title }
            if let text {
                state.items[i].plainText = text
                state.items[i].payloads = [NSPasteboard.PasteboardType.string.rawValue: Data(text.utf8)]
                state.items[i].kind = Self.isLink(text) ? .link : (Self.isColor(text) ? .color : .text)
                if state.items[i].kind == .link { state.items[i].payloads[NSPasteboard.PasteboardType.URL.rawValue] = Data(text.utf8) }
            }
            state.items[i].updatedAt = Date()
        }
    }

    public func updateRichTextItem(id: UUID, attributedString: NSAttributedString) throws {
        let rtf = try attributedString.data(from: NSRange(location: 0, length: attributedString.length),
                                            documentAttributes: [.documentType: NSAttributedString.DocumentType.rtf])
        let text = attributedString.string
        try mutate { state in
            guard let i = state.items.firstIndex(where: { $0.id == id }) else { throw ClipboardStoreError.itemNotFound }
            state.items[i].plainText = text
            state.items[i].payloads = [NSPasteboard.PasteboardType.rtf.rawValue: rtf,
                                       NSPasteboard.PasteboardType.string.rawValue: Data(text.utf8)]
            state.items[i].kind = .richText
            state.items[i].updatedAt = Date()
        }
    }

    public func delete(ids: Set<UUID>) throws { try setDeleted(ids: ids, deleted: true) }
    public func restore(ids: Set<UUID>) throws { try setDeleted(ids: ids, deleted: false) }
    private func setDeleted(ids: Set<UUID>, deleted: Bool) throws {
        try mutate { state in
            for i in state.items.indices where ids.contains(state.items[i].id) {
                state.items[i].isDeleted = deleted
                state.items[i].updatedAt = Date()
            }
        }
    }
    public func permanentlyDelete(ids: Set<UUID>) throws {
        try mutate { state in state.items.removeAll { ids.contains($0.id) } }
    }

    @discardableResult
    public func createPinboard(name: String, colorHex: String = "#FF9500") throws -> Pinboard {
        guard !name.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty else { throw ClipboardStoreError.invalidPinboardName }
        return try mutate { state in
            let board = Pinboard(name: name, colorHex: colorHex, sortOrder: (state.pinboards.map(\.sortOrder).max() ?? -1) + 1)
            state.pinboards.append(board)
            return board
        }
    }
    public func renamePinboard(id: UUID, name: String) throws {
        guard !name.trimmingCharacters(in: .whitespacesAndNewlines).isEmpty else { throw ClipboardStoreError.invalidPinboardName }
        try mutate { state in
            guard let i = state.pinboards.firstIndex(where: { $0.id == id }) else { throw ClipboardStoreError.pinboardNotFound }
            state.pinboards[i].name = name
        }
    }
    public func removePinboard(id: UUID) throws {
        try mutate { state in
            state.pinboards.removeAll { $0.id == id }
            for i in state.items.indices { state.items[i].pinboardIDs.remove(id) }
        }
    }
    public func assign(ids: Set<UUID>, to pinboardID: UUID?) throws {
        try mutate { state in
            if let pinboardID, !state.pinboards.contains(where: { $0.id == pinboardID }) { throw ClipboardStoreError.pinboardNotFound }
            for i in state.items.indices where ids.contains(state.items[i].id) {
                if let pinboardID { state.items[i].pinboardIDs.insert(pinboardID) }
                else { state.items[i].pinboardIDs.removeAll() }
            }
        }
    }
    public func unassign(ids: Set<UUID>, from pinboardID: UUID) throws {
        try mutate { state in
            for i in state.items.indices where ids.contains(state.items[i].id) { state.items[i].pinboardIDs.remove(pinboardID) }
        }
    }

    public func exportArchive(to url: URL) throws {
        try save()
        let encoder = JSONEncoder()
        encoder.outputFormatting = [.sortedKeys]
        try writeAtomically(encoder.encode(current), to: url)
    }
    public func importArchive(from url: URL) throws {
        let archive = try JSONDecoder().decode(StoreState.self, from: Data(contentsOf: url))
        try validate(archive)
        try mutate { state in
            var boards = Dictionary(uniqueKeysWithValues: state.pinboards.map { ($0.id, $0) })
            for board in archive.pinboards { boards[board.id] = board }
            state.pinboards = Array(boards.values)
            var items = Dictionary(uniqueKeysWithValues: state.items.map { ($0.id, $0) })
            for item in archive.items where items[item.id] == nil || items[item.id]!.updatedAt <= item.updatedAt { items[item.id] = item }
            state.items = Array(items.values)
            state.preferences = archive.preferences
        }
    }

    static func isLink(_ text: String) -> Bool {
        guard !text.isEmpty, !text.contains(where: \.isWhitespace), let url = URL(string: text),
              let scheme = url.scheme?.lowercased() else { return false }
        return ["http", "https", "ftp", "mailto"].contains(scheme) && (scheme == "mailto" || url.host != nil)
    }

    static func isColor(_ text: String) -> Bool {
        text.range(of: "^#?[0-9A-Fa-f]{6}$", options: .regularExpression) != nil
    }
}
