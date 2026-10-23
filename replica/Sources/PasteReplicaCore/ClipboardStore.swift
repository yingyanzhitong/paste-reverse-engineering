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
    public let didRestoreItem = PassthroughSubject<Void, Never>()
    public let preferenceChanges = PassthroughSubject<(old: AppPreferences, new: AppPreferences), Never>()
    @Published public var preferences = AppPreferences() {
        didSet { preferenceChanges.send((oldValue, preferences)) }
    }
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
        // Catch inside the flock scope so the converted Swift Error executes both defers.
        return try OriginalObjCExceptionBridge.withResult(operation)
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
            if local.title != base.title || local.hasExplicitTitle != base.hasExplicitTitle {
                value.title = local.title
                value.hasExplicitTitle = local.hasExplicitTitle
            }
            if local.kind != base.kind { value.kind = local.kind }
            if local.plainText != base.plainText { value.plainText = local.plainText }
            if local.sourceName != base.sourceName { value.sourceName = local.sourceName }
            if local.sourceBundleID != base.sourceBundleID { value.sourceBundleID = local.sourceBundleID }
            if local.sourceDevice != base.sourceDevice { value.sourceDevice = local.sourceDevice }
            if local.isInHistory != base.isInHistory { value.isInHistory = local.isInHistory }
            if local.payloads != base.payloads {
                value.payloads = local.payloads
                value.imagePreviewMetadata = local.imagePreviewMetadata
                value.rawPreview = local.rawPreview
            } else if (local.imagePreviewMetadata != base.imagePreviewMetadata || local.rawPreview != base.rawPreview),
                      remote.payloads == base.payloads {
                value.imagePreviewMetadata = local.imagePreviewMetadata
                value.rawPreview = local.rawPreview
            }
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
        if local.ignoredPasteboardTypes != base.ignoredPasteboardTypes { result.preferences.ignoredPasteboardTypes = local.ignoredPasteboardTypes }
        if local.ignoreConcealedContent != base.ignoreConcealedContent { result.preferences.ignoreConcealedContent = local.ignoreConcealedContent }
        if local.playSounds != base.playSounds { result.preferences.playSounds = local.playSounds }
        if local.appearance != base.appearance { result.preferences.appearance = local.appearance }
        if local.panelHeight != base.panelHeight { result.preferences.panelHeight = local.panelHeight }
        if local.launchAtLogin != base.launchAtLogin { result.preferences.launchAtLogin = local.launchAtLogin }
        if local.pasteToActiveApp != base.pasteToActiveApp { result.preferences.pasteToActiveApp = local.pasteToActiveApp }
        if local.alwaysPastePlainText != base.alwaysPastePlainText { result.preferences.alwaysPastePlainText = local.alwaysPastePlainText }
        if local.historyRetentionDays != base.historyRetentionDays { result.preferences.historyRetentionDays = local.historyRetentionDays }
        if local.historyShortcut != base.historyShortcut { result.preferences.historyShortcut = local.historyShortcut }
        if local.stackShortcut != base.stackShortcut { result.preferences.stackShortcut = local.stackShortcut }
        if local.previousPinboardShortcut != base.previousPinboardShortcut { result.preferences.previousPinboardShortcut = local.previousPinboardShortcut }
        if local.nextPinboardShortcut != base.nextPinboardShortcut { result.preferences.nextPinboardShortcut = local.nextPinboardShortcut }
        if local.quickPasteModifierRawValue != base.quickPasteModifierRawValue { result.preferences.quickPasteModifierRawValue = local.quickPasteModifierRawValue }
        if local.plainTextModifierRawValue != base.plainTextModifierRawValue { result.preferences.plainTextModifierRawValue = local.plainTextModifierRawValue }
        if local.showDuringScreenSharing != base.showDuringScreenSharing { result.preferences.showDuringScreenSharing = local.showDuringScreenSharing }
        if local.ignoreTransientContent != base.ignoreTransientContent { result.preferences.ignoreTransientContent = local.ignoreTransientContent }
        if local.historyTitle != base.historyTitle { result.preferences.historyTitle = local.historyTitle }
        if local.stackItemIDs != base.stackItemIDs { result.preferences.stackItemIDs = local.stackItemIDs }
        if local.stackReversed != base.stackReversed { result.preferences.stackReversed = local.stackReversed }
        if local.isDiagnosticsEnabled != base.isDiagnosticsEnabled { result.preferences.isDiagnosticsEnabled = local.isDiagnosticsEnabled }
        if local.useBinaryPlist != base.useBinaryPlist { result.preferences.useBinaryPlist = local.useBinaryPlist }
        if local.fileQuickLookThumbnailsEnabled != base.fileQuickLookThumbnailsEnabled { result.preferences.fileQuickLookThumbnailsEnabled = local.fileQuickLookThumbnailsEnabled }
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

    /// Restore promotes the selected content in reverse order, as the original history repository does.
    func recordRestoredItems(ids: [UUID]) throws {
        try mutate { state in
            for id in ids.reversed() {
                guard let index = state.items.firstIndex(where: { $0.id == id && !$0.isDeleted }) else {
                    throw ClipboardStoreError.itemNotFound
                }
                let timestamp = Date()
                state.items[index].createdAt = timestamp
                state.items[index].updatedAt = timestamp
                state.items[index].isInHistory = true
            }
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

    private static func withPreviewMetadata(_ item: ClipboardItem, binaryPropertyList: Bool, preferQuickLookThumbnails: Bool, generateMissingContentPreview: Bool) -> ClipboardItem {
        var item = item
        guard item.kind == .image else {
            item.imagePreviewMetadata = nil
            if generateMissingContentPreview, item.kind == .files || item.kind == .color, item.rawPreview == nil,
               let items = try? originalPasteboardItems(from: item.payloads) {
                if item.kind == .files {
                    let metadata = OriginalFilePreviewMetadataGenerator.generate(items, preferQuickLookThumbnails: preferQuickLookThumbnails)
                    item.rawPreview = OriginalImagePreviewMetadataCodec.encodeFiles(metadata, binaryPropertyList: binaryPropertyList)
                } else if item.kind == .color {
                    item.rawPreview = OriginalImagePreviewMetadataCodec.encodeColor(
                        OriginalColorPreviewMetadataGenerator.generate(items), binaryPropertyList: binaryPropertyList)
                }
            }
            return item
        }
        if let rawPreview = item.rawPreview {
            item.imagePreviewMetadata = OriginalImagePreviewMetadataCodec.decode(rawPreview)
        } else {
            if item.imagePreviewMetadata == nil {
                item.imagePreviewMetadata = (try? originalPasteboardItems(from: item.payloads))
                    .flatMap(OriginalImagePreviewMetadataGenerator.f_100313548)
            }
            if let metadata = item.imagePreviewMetadata {
                item.rawPreview = OriginalImagePreviewMetadataCodec.encode(metadata, binaryPropertyList: binaryPropertyList)
                if item.rawPreview == nil { item.imagePreviewMetadata = nil }
            }
        }
        return item
    }

    @discardableResult
    public func add(_ item: ClipboardItem) throws -> UUID {
        let item = Self.withPreviewMetadata(item, binaryPropertyList: preferences.useBinaryPlist, preferQuickLookThumbnails: preferences.fileQuickLookThumbnailsEnabled, generateMissingContentPreview: true)
        let checksum = try? Self.knownPasteboardChecksum(from: item.payloads)
        return try mutate { state in
            if let i = state.items.firstIndex(where: { previous in
                if let checksum, let previousChecksum = try? Self.knownPasteboardChecksum(from: previous.payloads) {
                    return checksum == previousChecksum
                }
                return previous.kind == item.kind && previous.plainText == item.plainText
                    && Self.normalizedPasteboardPayloads(previous.payloads)
                    == Self.normalizedPasteboardPayloads(item.payloads)
            }) {
                let analysis = state.items[i].kind == .image && item.kind == .image
                    ? state.items[i].payloads.filter { Self.analysisPayloadKeys.contains($0.key) } : [:]
                state.items[i].kind = item.kind
                state.items[i].plainText = item.plainText
                state.items[i].payloads = item.payloads
                state.items[i].imagePreviewMetadata = item.imagePreviewMetadata
                state.items[i].rawPreview = item.rawPreview
                for (type, data) in analysis where state.items[i].payloads[type] == nil {
                    state.items[i].payloads[type] = data
                }
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
            let haystack = folded([item.title, item.plainText ?? "", item.recognizedText ?? "", item.sourceName, item.sourceBundleID ?? "", item.kind.displayName].joined(separator: "\n"))
            return terms.allSatisfy { haystack.contains($0) }
        }.sorted { $0.updatedAt > $1.updatedAt }
    }

    public func updateItem(id: UUID, title: String? = nil, text: String? = nil) throws {
        try mutate { state in
            guard let i = state.items.firstIndex(where: { $0.id == id }) else { throw ClipboardStoreError.itemNotFound }
            if let title {
                state.items[i].title = title
                state.items[i].hasExplicitTitle = true
            }
            if let text {
                state.items[i].plainText = text
                state.items[i].payloads = [NSPasteboard.PasteboardType.string.rawValue: Data(text.utf8)]
                state.items[i].imagePreviewMetadata = nil
                state.items[i].rawPreview = nil
                state.items[i].kind = Self.isLink(text) ? .link : (Self.isColor(text) ? .color : .text)
                if state.items[i].kind == .color {
                    state.items[i].rawPreview = OriginalImagePreviewMetadataCodec.encodeColor(
                        OriginalColorPreviewMetadataGenerator.generate([OriginalPasteboardItem.f_10037c6d4(text)]),
                        binaryPropertyList: state.preferences.useBinaryPlist)
                }
                if state.items[i].kind == .link,
                   let url = OriginalPasteboardItem.f_10037c6d4(text).f_10037ce0c() {
                    let representation = OriginalPasteboardItem.f_10037c7bc(url, title: state.items[i].title)
                    for type in representation.f_10037da6c() {
                        state.items[i].payloads[type] = representation.f_10037d810(forType: type)
                    }
                    state.items[i].payloads[Self.orderedPasteboardTypesPayloadKey] =
                        try JSONEncoder().encode(representation.f_10037da6c())
                }
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
            state.items[i].imagePreviewMetadata = nil
            state.items[i].rawPreview = nil
            state.items[i].updatedAt = Date()
        }
    }

    public func updateImageItem(id: UUID, payloads: [String: Data]) throws {
        let imageTypes = ["public.png", "public.jpeg", "public.heic", "public.tiff", "com.apple.icns", "com.compuserve.gif"]
        let types = imageTypes.filter { payloads[$0] != nil }
        guard !types.isEmpty else { throw OriginalPasteboardItemCreationError.unsupportedContent }
        var replacement = payloads.filter { imageTypes.contains($0.key) }
        replacement[Self.orderedPasteboardTypesPayloadKey] = try JSONEncoder().encode(types)
        let metadata = (try? Self.originalPasteboardItems(from: replacement))
            .flatMap(OriginalImagePreviewMetadataGenerator.f_100313548)
        let rawPreview = metadata.flatMap {
            OriginalImagePreviewMetadataCodec.encode($0, binaryPropertyList: preferences.useBinaryPlist)
        }
        try mutate { state in
            guard let i = state.items.firstIndex(where: { $0.id == id && !$0.isDeleted && $0.kind == .image }) else {
                throw ClipboardStoreError.itemNotFound
            }
            state.items[i].payloads = replacement
            state.items[i].imagePreviewMetadata = rawPreview == nil ? nil : metadata
            state.items[i].rawPreview = rawPreview
            state.items[i].plainText = nil
            state.items[i].kind = .image
            state.items[i].updatedAt = Date()
        }
        startBackgroundTextRecognition(id: id)
    }

    public func updateLinkItem(id: UUID, url: URL) throws {
        try mutate { state in
            guard let i = state.items.firstIndex(where: { $0.id == id && !$0.isDeleted && $0.kind == .link }) else {
                throw ClipboardStoreError.itemNotFound
            }
            let representation = OriginalPasteboardItem.f_10037c7bc(url, title: state.items[i].title)
            var payloads: [String: Data] = [:]
            for type in representation.f_10037da6c() { payloads[type] = representation.f_10037d810(forType: type) }
            payloads[Self.orderedPasteboardTypesPayloadKey] = try JSONEncoder().encode(representation.f_10037da6c())
            state.items[i].payloads = payloads
            state.items[i].plainText = url.absoluteString
            state.items[i].kind = .link
            state.items[i].imagePreviewMetadata = nil
            state.items[i].rawPreview = nil
            state.items[i].updatedAt = Date()
        }
    }

    public func updateColorItem(id: UUID, text: String) throws {
        try mutate { state in
            guard let i = state.items.firstIndex(where: { $0.id == id && !$0.isDeleted && $0.kind == .color }) else {
                throw ClipboardStoreError.itemNotFound
            }
            state.items[i].payloads = [NSPasteboard.PasteboardType.string.rawValue: Data(text.utf8)]
            state.items[i].plainText = text
            state.items[i].kind = .color
            state.items[i].imagePreviewMetadata = nil
            state.items[i].rawPreview = OriginalImagePreviewMetadataCodec.encodeColor(
                OriginalColorPreviewMetadataGenerator.generate([OriginalPasteboardItem.f_10037c6d4(text)]),
                binaryPropertyList: state.preferences.useBinaryPlist)
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
            let affected = Set(state.items.filter { $0.pinboardIDs.contains(id) }.map(\.id))
            state.pinboards.removeAll { $0.id == id }
            for i in state.items.indices { state.items[i].pinboardIDs.remove(id) }
            state.items.removeAll { affected.contains($0.id) && !$0.isInHistory && $0.pinboardIDs.isEmpty }
        }
    }

    @discardableResult
    public func duplicateItem(id: UUID) throws -> UUID {
        try mutate { state in
            guard var item = state.items.first(where: { $0.id == id && !$0.isDeleted }) else { throw ClipboardStoreError.itemNotFound }
            item.id = UUID()
            item.createdAt = Date()
            item.updatedAt = item.createdAt
            state.items.append(item)
            return item.id
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

    public func updatePinboard(id: UUID, colorHex: String? = nil, sortOrder: Int? = nil) throws {
        try mutate { state in
            guard let i = state.pinboards.firstIndex(where: { $0.id == id }) else { throw ClipboardStoreError.pinboardNotFound }
            if let colorHex { state.pinboards[i].colorHex = colorHex }
            if let sortOrder { state.pinboards[i].sortOrder = sortOrder }
        }
    }

    public func reorderPinboards(ids: [UUID]) throws {
        try mutate { state in
            guard Set(ids).count == ids.count, Set(ids) == Set(state.pinboards.map(\.id)) else { throw ClipboardStoreError.pinboardNotFound }
            let positions = Dictionary(uniqueKeysWithValues: ids.enumerated().map { ($0.element, $0.offset) })
            for i in state.pinboards.indices { state.pinboards[i].sortOrder = positions[state.pinboards[i].id]! }
        }
    }

    public func eraseHistory() throws {
        try mutate { state in
            state.items.removeAll { $0.isInHistory && $0.pinboardIDs.isEmpty }
            for i in state.items.indices { state.items[i].isInHistory = false }
        }
    }

    func saveRecognizedDocument(id: UUID, document: RecognizedTextDocument, expectedImageData: Data) throws {
        try mutate { state in
            guard let i = state.items.firstIndex(where: { $0.id == id && !$0.isDeleted }),
                  state.items[i].kind == .image, state.items[i].imageData == expectedImageData else { return }
            state.items[i].payloads[Self.recognizedTextPayloadKey] = Data(document.text.utf8)
            state.items[i].payloads[Self.recognizedDocumentPayloadKey] = try JSONEncoder().encode(document)
        }
    }

    public func exportArchive(to url: URL) throws {
        try OriginalObjCExceptionBridge.f_1002ff9c8 {
            try save()
            let encoder = JSONEncoder()
            encoder.outputFormatting = [.sortedKeys]
            try writeAtomically(encoder.encode(current), to: url)
        }
    }
    public func importArchive(from url: URL) throws {
        let data = try Data(contentsOf: url)
        let archive: StoreState
        do {
            archive = try JSONDecoder().decode(StoreState.self, from: data)
        } catch {
            let textPrefix = data.starts(with: [0xef, 0xbb, 0xbf]) ? data.dropFirst(3) : data[...]
            let trimmedPrefix = textPrefix.drop(while: { [9, 10, 13, 32].contains($0) })
            if data.starts(with: Data("bplist00".utf8)) || trimmedPrefix.starts(with: Data("<?xml".utf8)) ||
                trimmedPrefix.first == UInt8(ascii: "[") || OriginalPasteboardDataCodec.decodeIfValid(data) != nil {
                _ = try importOriginalPasteboardItems(data, sourceName: "导入的剪贴板")
                return
            }
            throw error
        }
        try validate(archive)
        let importedItems = archive.items.map { Self.withPreviewMetadata($0, binaryPropertyList: archive.preferences.useBinaryPlist, preferQuickLookThumbnails: archive.preferences.fileQuickLookThumbnailsEnabled, generateMissingContentPreview: false) }
        try mutate { state in
            var boards = Dictionary(uniqueKeysWithValues: state.pinboards.map { ($0.id, $0) })
            for board in archive.pinboards { boards[board.id] = board }
            state.pinboards = Array(boards.values)
            var items = Dictionary(uniqueKeysWithValues: state.items.map { ($0.id, $0) })
            for item in importedItems where items[item.id] == nil || items[item.id]!.updatedAt <= item.updatedAt { items[item.id] = item }
            state.items = Array(items.values)
            state.preferences = archive.preferences
        }
    }

    static func isLink(_ text: String) -> Bool {
        OriginalPasteboardClassification.f_10032362c([OriginalPasteboardItem.f_10037c6d4(text)]) == .link
    }

    static func isColor(_ text: String) -> Bool {
        OriginalPasteboardClassification.f_100321f48(text)
    }
}
