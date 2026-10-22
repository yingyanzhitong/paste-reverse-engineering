import AppKit
import Foundation
import Combine
import PasteReplicaCore

final class ClipboardStoreTests {
    private func temporaryDirectory() throws -> URL {
        let url = FileManager.default.temporaryDirectory.appendingPathComponent("PasteReplicaTests-\(UUID().uuidString)", isDirectory: true)
        try FileManager.default.createDirectory(at: url, withIntermediateDirectories: true)
        return url
    }

    @MainActor
    private func privatePasteboard() -> NSPasteboard {
        NSPasteboard(name: .init("PasteReplicaTests-\(UUID().uuidString)"))
    }

    func testUnicodeSearchDeduplicationAndIndependentRepresentations() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            let text = "CAFÉ 👨‍👩‍👧‍👦 简体中文 e\u{301}"
            let original = ClipboardItem(title: "标题", plainText: text, sourceName: "测试来源", payloads: ["public.utf8-plain-text": Data(text.utf8)])
            let id = try store.add(original)
            var copy = original
            copy.id = UUID()
            copy.sourceName = "另一个来源"
            expectEqual(try store.add(copy), id)
            expectEqual(store.items.count, 1)
            expectEqual(store.items[0].sourceName, "另一个来源")
            expectEqual(store.search(query: "cafe 中文").map(\.id), [id])
            expectEqual(store.search(query: "é").count, 1)
            expectTrue(store.search(query: "不存在").isEmpty)
            copy.payloads["text/html"] = Data("<b>different formatting</b>".utf8)
            expectFalse(try store.add(copy) == id)
            expectEqual(store.items.count, 2, "Different raw representations must not disappear through text-only deduplication")
            let reopened = try ClipboardStore(directoryURL: directory)
            expectEqual(Set(reopened.items.map(\.id)), Set(store.items.map(\.id)))
            expectEqual(reopened.items.first { $0.id == id }?.plainText, text)
            let attributes = try FileManager.default.attributesOfItem(atPath: directory.appendingPathComponent("clipboard.json").path)
            expectEqual((attributes[.posixPermissions] as? NSNumber)?.intValue, 0o600)
        }
    }

    func testPinboardsEditingTrashRestoreAndPermanentDeletion() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            let id = try store.add(ClipboardItem(title: "old", kind: .richText, plainText: "old", payloads: ["public.rtf": Data("old rich bytes".utf8)]))
            let a = try store.createPinboard(name: "工作", colorHex: "#FF0000")
            let b = try store.createPinboard(name: "私人", colorHex: "#00FF00")
            try store.assign(ids: [id], to: a.id)
            try store.assign(ids: [id], to: b.id)
            try store.unassign(ids: [id], from: a.id)
            expectEqual(store.items[0].pinboardIDs, [b.id])
            try store.renamePinboard(id: b.id, name: "收藏")
            expectEqual(store.search(query: "", pinboardID: b.id).count, 1)
            try store.updateItem(id: id, title: "新标题", text: "https://example.invalid/中文")
            expectEqual(store.items[0].kind, .link)
            expectNil(store.items[0].payloads["public.rtf"], "Editing text cannot leave stale rich-text bytes")
            try store.updateItem(id: id, text: "#FF8800")
            expectEqual(store.items[0].kind, .color)
            try store.delete(ids: [id])
            expectTrue(store.search(query: "").isEmpty)
            expectEqual(store.search(query: "新标题", includeDeleted: true).count, 1)
            try store.restore(ids: [id])
            try store.removePinboard(id: b.id)
            expectEqual(store.items[0].pinboardIDs, [])
            expectEqual(store.items[0].plainText, "#FF8800")
            try store.permanentlyDelete(ids: [id])
            try store.reload()
            expectTrue(store.items.isEmpty)
            expectThrows(try store.renamePinboard(id: a.id, name: " \n"))
            expectThrows(try store.assign(ids: [], to: UUID()))
        }
    }

    func testHistoryLimitPreservesPinnedContentOutsideHistory() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            store.preferences.historyLimit = 2
            let board = try store.createPinboard(name: "长期保存", colorHex: "#123456")
            let start = Date(timeIntervalSince1970: 100)
            let pinned = try store.add(ClipboardItem(createdAt: start, plainText: "pinned", pinboardIDs: [board.id]))
            _ = try store.add(ClipboardItem(createdAt: start.addingTimeInterval(1), plainText: "evicted"))
            _ = try store.add(ClipboardItem(createdAt: start.addingTimeInterval(2), plainText: "recent"))
            _ = try store.add(ClipboardItem(createdAt: start.addingTimeInterval(3), plainText: "newest"))
            expectEqual(store.search(query: "").count, 2)
            expectEqual(store.search(query: "", pinboardID: board.id).map(\.id), [pinned])
            expectEqual(store.items.first { $0.id == pinned }?.isInHistory, false)
            expectFalse(store.items.contains { $0.plainText == "evicted" })
            expectEqual(store.search(query: "pinned").count, 1)
        }
    }

    func testStaleStoresMergeItemsPreferencesAndDisjointFields() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let a = try ClipboardStore(directoryURL: directory)
            let b = try ClipboardStore(directoryURL: directory)
            let first = try a.add(ClipboardItem(plainText: "first"))
            _ = try b.add(ClipboardItem(plainText: "second"))
            a.preferences.appearance = "dark"
            a.preferences.pasteToActiveApp = false
            b.preferences.historyLimit = 25
            b.preferences.alwaysPastePlainText = true
            b.preferences.historyRetentionDays = 365
            try b.save()
            try a.save()
            expectEqual(a.items.count, 2)
            expectEqual(a.preferences.appearance, "dark")
            expectEqual(a.preferences.historyLimit, 25)
            expectFalse(a.preferences.pasteToActiveApp)
            expectTrue(a.preferences.alwaysPastePlainText)
            expectEqual(a.preferences.historyRetentionDays, 365)
            try b.reload()
            let board = try a.createPinboard(name: "shared", colorHex: "#00AAFF")
            try b.reload()
            if let i = a.items.firstIndex(where: { $0.id == first }) { a.items[i].title = "renamed" }
            try b.assign(ids: [first], to: board.id)
            try a.save()
            let item = try requireValue(a.items.first { $0.id == first })
            expectEqual(item.title, "renamed")
            expectTrue(item.pinboardIDs.contains(board.id))
            let same = try b.add(ClipboardItem(plainText: "first"))
            expectEqual(same, first)
            expectEqual(b.items.count, 2)
            try a.reload()
            if let i = a.items.firstIndex(where: { $0.id == first }) { a.items[i].title = "stale pending rename" }
            try b.permanentlyDelete(ids: [first])
            try a.save()
            expectFalse(a.items.contains { $0.id == first }, "A permanent deletion cannot be resurrected by stale edits")
        }
    }

    func testArchiveRoundTripMergeAndCorruptionDoesNotDestroyData() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let source = try ClipboardStore(directoryURL: directory.appendingPathComponent("source"))
            let board = try source.createPinboard(name: "存档", colorHex: "#F0F0F0")
            let id = try source.add(ClipboardItem(title: "二进制", kind: .unknown, payloads: ["application/custom": Data([0, 255, 128, 1])], pinboardIDs: [board.id]))
            try source.delete(ids: [id])
            source.preferences.excludedBundleIDs = ["invalid.synthetic"]
            let archive = directory.appendingPathComponent("archive.json")
            try source.exportArchive(to: archive)
            let destination = try ClipboardStore(directoryURL: directory.appendingPathComponent("destination"))
            let existing = try destination.add(ClipboardItem(plainText: "local data must survive import"))
            try destination.importArchive(from: archive)
            try destination.importArchive(from: archive)
            expectEqual(destination.items.count, 2)
            expectTrue(destination.items.contains { $0.id == existing })
            expectEqual(destination.items.first { $0.id == id }, source.items[0])
            expectEqual(destination.pinboards, source.pinboards)
            expectEqual(destination.preferences, source.preferences)
            let broken = directory.appendingPathComponent("broken.json")
            try Data("{truncated".utf8).write(to: broken)
            expectThrows(try destination.importArchive(from: broken))
            try destination.reload()
            expectEqual(destination.items.count, 2)
            let stateURL = destination.directoryURL.appendingPathComponent("clipboard.json")
            let original = try Data(contentsOf: stateURL)
            try Data("{corrupt disk state".utf8).write(to: stateURL)
            expectThrows(try ClipboardStore(directoryURL: destination.directoryURL))
            expectEqual(try Data(contentsOf: stateURL), Data("{corrupt disk state".utf8))
            try original.write(to: stateURL)
        }
    }

    func testRichTextRoundTripPlainTextModeAndWriteLoopPrevention() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            let pasteboard = privatePasteboard()
            defer { pasteboard.releaseGlobally() }
            let monitor = ClipboardMonitor(store: store, pasteboard: pasteboard)
            let text = "格式化 👩🏽‍💻 中文\n第二行"
            let attributed = NSAttributedString(string: text, attributes: [.font: NSFont.boldSystemFont(ofSize: 18), .foregroundColor: NSColor.red])
            let rtf = try attributed.data(from: NSRange(location: 0, length: attributed.length), documentAttributes: [.documentType: NSAttributedString.DocumentType.rtf])
            let html = Data("<strong>格式化 👩🏽‍💻 中文</strong>".utf8)
            let object = NSPasteboardItem()
            object.setString(text, forType: .string)
            object.setData(rtf, forType: .rtf)
            object.setData(html, forType: .html)
            pasteboard.clearContents()
            expectTrue(pasteboard.writeObjects([object]))
            monitor.poll()
            expectNil(monitor.lastError)
            let item = try requireValue(store.items.first)
            expectEqual(item.kind, .richText)
            expectEqual(item.payloads[NSPasteboard.PasteboardType.rtf.rawValue], rtf)
            try store.writeToPasteboard(id: item.id, pasteboard: pasteboard, plainTextOnly: false)
            expectEqual(pasteboard.data(forType: .rtf), rtf)
            expectEqual(pasteboard.data(forType: .html), html)
            monitor.poll()
            expectEqual(store.items.count, 1)
            try store.writeToPasteboard(id: item.id, pasteboard: pasteboard, plainTextOnly: true)
            expectEqual(pasteboard.string(forType: .string), text)
            expectNil(pasteboard.data(forType: .rtf))
            expectNil(pasteboard.data(forType: .html))
            monitor.poll()
            expectEqual(store.items.count, 1)
            pasteboard.clearContents()
            pasteboard.setString("new external copy", forType: .string)
            monitor.poll()
            expectEqual(store.items.count, 2)
            monitor.stop()
        }
    }

    func testRichTextEditingPreservesFormattingAfterReopen() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            let board = try store.createPinboard(name: "编辑收藏", colorHex: "#AABBCC")
            let id = try store.add(ClipboardItem(createdAt: Date(timeIntervalSince1970: 1000), title: "保留标题",
                                                 kind: .text, plainText: "old", sourceName: "原来源",
                                                 sourceBundleID: "invalid.original", payloads: ["public.html": Data("stale".utf8),
                                                 "com.pastereplica.internal.items+json": Data("stale items".utf8)], pinboardIDs: [board.id]))
            let text = "粗体 蓝色 中文 👩🏽‍💻\n第二段"
            let formatted = NSMutableAttributedString(string: text, attributes: [
                .font: NSFont.boldSystemFont(ofSize: 22),
                .foregroundColor: NSColor(calibratedRed: 0.2, green: 0.4, blue: 0.8, alpha: 1)
            ])
            formatted.addAttribute(.underlineStyle, value: NSUnderlineStyle.single.rawValue, range: NSRange(location: 0, length: 2))
            let paragraph = NSMutableParagraphStyle()
            paragraph.alignment = .center
            formatted.addAttribute(.paragraphStyle, value: paragraph, range: NSRange(location: 0, length: formatted.length))
            try store.updateRichTextItem(id: id, attributedString: formatted)
            let reopened = try ClipboardStore(directoryURL: directory)
            let item = try requireValue(reopened.items.first { $0.id == id })
            expectEqual(item.kind, .richText)
            expectEqual(item.title, "保留标题")
            expectEqual(item.plainText, text)
            expectEqual(item.createdAt, Date(timeIntervalSince1970: 1000))
            expectTrue(item.updatedAt > item.createdAt)
            expectEqual(item.pinboardIDs, [board.id])
            expectEqual(item.sourceName, "原来源")
            expectEqual(item.sourceBundleID, "invalid.original")
            expectEqual(Set(item.payloads.keys), [NSPasteboard.PasteboardType.rtf.rawValue, NSPasteboard.PasteboardType.string.rawValue])
            let rtf = try requireValue(item.payloads[NSPasteboard.PasteboardType.rtf.rawValue])
            let decoded = try NSAttributedString(data: rtf, options: [.documentType: NSAttributedString.DocumentType.rtf], documentAttributes: nil)
            expectEqual(decoded.string, text)
            let font = try requireValue(decoded.attribute(.font, at: 0, effectiveRange: nil) as? NSFont)
            expectTrue(NSFontManager.shared.traits(of: font).contains(.boldFontMask))
            expectTrue(abs(font.pointSize - 22) < 0.01)
            expectEqual((decoded.attribute(.underlineStyle, at: 0, effectiveRange: nil) as? NSNumber)?.intValue, NSUnderlineStyle.single.rawValue)
            let color = try requireValue((decoded.attribute(.foregroundColor, at: 0, effectiveRange: nil) as? NSColor)?.usingColorSpace(.sRGB))
            let expectedColor = try requireValue(NSColor(calibratedRed: 0.2, green: 0.4, blue: 0.8, alpha: 1).usingColorSpace(.sRGB))
            expectTrue(abs(color.blueComponent - expectedColor.blueComponent) < 0.02)
            let decodedParagraph = try requireValue(decoded.attribute(.paragraphStyle, at: 0, effectiveRange: nil) as? NSParagraphStyle)
            expectEqual(decodedParagraph.alignment, .center)
            let pasteboard = privatePasteboard()
            defer { pasteboard.releaseGlobally() }
            try reopened.writeToPasteboard(id: id, pasteboard: pasteboard, plainTextOnly: false)
            expectEqual(pasteboard.data(forType: .rtf), rtf)
            expectEqual(pasteboard.string(forType: .string), text)
            expectThrows(try store.updateRichTextItem(id: UUID(), attributedString: formatted))
        }
    }

    func testRTFOnlyCaptureExtractsTextAndRetainsOriginalBytes() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            let pasteboard = privatePasteboard()
            defer { pasteboard.releaseGlobally() }
            let text = NSAttributedString(string: "Only RTF 中文 👨‍🚀")
            let data = try text.data(from: NSRange(location: 0, length: text.length), documentAttributes: [.documentType: NSAttributedString.DocumentType.rtf])
            pasteboard.clearContents()
            pasteboard.setData(data, forType: .rtf)
            let id = try requireValue(store.capture(pasteboard: pasteboard, sourceName: "Synthetic", sourceBundleID: nil))
            expectEqual(store.items.first { $0.id == id }?.plainText, text.string)
            expectEqual(store.items.first { $0.id == id }?.payloads[NSPasteboard.PasteboardType.rtf.rawValue], data)
        }
    }

    func testMultiFileURLPasteboardPreservesSeparateItemsAndUnicodePaths() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory.appendingPathComponent("store"))
            let pasteboard = privatePasteboard()
            defer { pasteboard.releaseGlobally() }
            let urls = [directory.appendingPathComponent("文件 👨‍🚀.txt"), directory.appendingPathComponent("second space.txt")]
            var original: [Data] = []
            let objects = urls.map { url -> NSPasteboardItem in
                let item = NSPasteboardItem()
                item.setString(url.absoluteString, forType: .fileURL)
                original.append(item.data(forType: .fileURL)!)
                return item
            }
            pasteboard.clearContents()
            expectTrue(pasteboard.writeObjects(objects))
            let id = try requireValue(store.capture(pasteboard: pasteboard, sourceName: "Synthetic Finder", sourceBundleID: "invalid.finder"))
            expectEqual(store.items[0].kind, .files)
            expectEqual(store.items[0].plainText, urls.map(\.path).joined(separator: "\n"))
            try store.reload()
            try store.writeToPasteboard(id: id, pasteboard: pasteboard, plainTextOnly: false)
            expectEqual(pasteboard.pasteboardItems?.count, 2)
            expectEqual(pasteboard.pasteboardItems?.compactMap { $0.data(forType: .fileURL) }, original)
        }
    }

    func testActualLargePNGAndUnknownBinaryPayloadSurvivePersistence() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            let pasteboard = privatePasteboard()
            defer { pasteboard.releaseGlobally() }
            let bitmap = try requireValue(NSBitmapImageRep(bitmapDataPlanes: nil, pixelsWide: 1024, pixelsHigh: 1024,
                                                      bitsPerSample: 8, samplesPerPixel: 4, hasAlpha: true,
                                                      isPlanar: false, colorSpaceName: .deviceRGB, bytesPerRow: 0, bitsPerPixel: 0))
            let pixels = try requireValue(bitmap.bitmapData)
            var random: UInt32 = 0x12345678
            for i in 0..<(bitmap.bytesPerRow * bitmap.pixelsHigh) {
                random ^= random << 13; random ^= random >> 17; random ^= random << 5
                pixels[i] = UInt8(truncatingIfNeeded: random)
            }
            let png = try requireValue(bitmap.representation(using: .png, properties: [:]))
            expectGreaterThan(png.count, 3_000_000)
            let unknown = Data((0..<4096).map { UInt8(truncatingIfNeeded: $0) })
            let customType = NSPasteboard.PasteboardType("invalid.synthetic.binary")
            let object = NSPasteboardItem()
            object.setData(png, forType: .png)
            object.setData(unknown, forType: customType)
            pasteboard.clearContents()
            expectTrue(pasteboard.writeObjects([object]))
            let id = try requireValue(store.capture(pasteboard: pasteboard, sourceName: "Synthetic image", sourceBundleID: nil))
            let reopened = try ClipboardStore(directoryURL: directory)
            expectEqual(reopened.items[0].kind, .image)
            expectEqual(reopened.items[0].payloads[NSPasteboard.PasteboardType.png.rawValue], png)
            try reopened.writeToPasteboard(id: id, pasteboard: pasteboard, plainTextOnly: false)
            expectEqual(pasteboard.data(forType: .png), png)
            expectEqual(pasteboard.data(forType: customType), unknown)
            expectNotNil(NSImage(data: try requireValue(pasteboard.data(forType: .png))))
            expectThrows(try reopened.writeToPasteboard(id: id, pasteboard: pasteboard, plainTextOnly: true))
        }
    }

    func testCapturePrivacyPauseAndExcludedSourcePolicies() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            let pasteboard = privatePasteboard()
            defer { pasteboard.releaseGlobally() }
            func setContent(_ marker: String? = nil) {
                let item = NSPasteboardItem()
                item.setString("synthetic sensitive sample", forType: .string)
                if let marker { item.setData(Data(), forType: .init(marker)) }
                pasteboard.clearContents()
                _ = pasteboard.writeObjects([item])
            }
            for type in ["org.nspasteboard.ConcealedType", "org.nspasteboard.TransientType", "org.nspasteboard.AutoGeneratedType"] {
                setContent(type)
                expectNil(try store.capture(pasteboard: pasteboard, sourceName: "Synthetic", sourceBundleID: nil))
            }
            setContent()
            store.preferences.excludedBundleIDs = ["invalid.excluded"]
            expectNil(try store.capture(pasteboard: pasteboard, sourceName: "Excluded", sourceBundleID: "invalid.excluded"))
            store.preferences.isMonitoringPaused = true
            expectNil(try store.capture(pasteboard: pasteboard, sourceName: "Synthetic", sourceBundleID: nil))
            store.preferences.pauseUntil = Date().addingTimeInterval(60)
            expectNil(try store.capture(pasteboard: pasteboard, sourceName: "Synthetic", sourceBundleID: nil))
            store.preferences.pauseUntil = Date().addingTimeInterval(-1)
            expectNotNil(try store.capture(pasteboard: pasteboard, sourceName: "Synthetic", sourceBundleID: nil))
            expectFalse(store.preferences.isMonitoringPaused)
            expectNil(store.preferences.pauseUntil)
            expectEqual(store.items.count, 1)
        }
    }

    func testHistoryRetentionPermanentExpiredPinnedAndFreshBoundaries() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let defaults = try JSONDecoder().decode(AppPreferences.self, from: Data("{}".utf8))
            expectEqual(defaults.historyRetentionDays, 0)
            expectTrue(defaults.pasteToActiveApp)
            expectFalse(defaults.alwaysPastePlainText)
            let store = try ClipboardStore(directoryURL: directory)
            let now = Date()
            let old = now.addingTimeInterval(-2 * 86_400)
            let board = try store.createPinboard(name: "keep", colorHex: "#ABCDEF")
            let expired = try store.add(ClipboardItem(createdAt: old, plainText: "old unpinned"))
            let pinned = try store.add(ClipboardItem(createdAt: old, plainText: "old pinned", pinboardIDs: [board.id]))
            let fresh = try store.add(ClipboardItem(createdAt: now.addingTimeInterval(-86_400 + 60), plainText: "inside one-day boundary"))
            let future = try store.add(ClipboardItem(createdAt: now.addingTimeInterval(60), plainText: "future clock skew"))
            expectEqual(store.search(query: "").count, 4, "Default permanent retention must not age out old entries")
            store.preferences.historyRetentionDays = 1
            try store.save()
            expectFalse(store.items.contains { $0.id == expired })
            expectEqual(store.items.first { $0.id == pinned }?.isInHistory, false)
            expectEqual(store.search(query: "", pinboardID: board.id).map(\.id), [pinned])
            expectEqual(Set(store.search(query: "").map(\.id)), [fresh, future])
            store.preferences.historyRetentionDays = 0
            _ = try store.add(ClipboardItem(createdAt: old, plainText: "old after setting permanent"))
            expectTrue(store.items.contains { $0.plainText == "old after setting permanent" })
        }
    }

    func testRefreshPreservesPendingEditsWithoutNoOpWrites() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        try await MainActor.run {
            let a = try ClipboardStore(directoryURL: directory)
            let id = try a.add(ClipboardItem(title: "original", kind: .image,
                                             payloads: ["public.png": Data(repeating: 123, count: 1_048_576)]))
            let b = try ClipboardStore(directoryURL: directory)
            let url = directory.appendingPathComponent("clipboard.json")
            let before = try FileManager.default.attributesOfItem(atPath: url.path)
            var updates = 0
            let subscription = a.objectWillChange.sink { updates += 1 }
            for _ in 0..<5 { try a.reload(); try a.save() }
            let after = try FileManager.default.attributesOfItem(atPath: url.path)
            expectEqual(before[.systemFileNumber] as? NSNumber, after[.systemFileNumber] as? NSNumber)
            expectEqual(before[.modificationDate] as? Date, after[.modificationDate] as? Date)
            expectEqual(updates, 0, "No-op polling must not publish or rewrite image history")
            a.preferences.appearance = "dark"
            if let i = a.items.firstIndex(where: { $0.id == id }) { a.items[i].title = "pending edit" }
            b.preferences.historyLimit = 42
            try b.save()
            try a.reload()
            expectEqual(a.preferences.appearance, "dark")
            expectEqual(a.preferences.historyLimit, 42)
            expectEqual(a.items.first { $0.id == id }?.title, "pending edit")
            let beforeSave = try ClipboardStore(directoryURL: directory)
            expectEqual(beforeSave.preferences.appearance, "system", "Reload preserves pending edits without secretly saving them")
            try a.save()
            let reopened = try ClipboardStore(directoryURL: directory)
            expectEqual(reopened.preferences.appearance, "dark")
            expectEqual(reopened.preferences.historyLimit, 42)
            expectEqual(reopened.items.first { $0.id == id }?.title, "pending edit")
            subscription.cancel()
        }
    }

    func runWorker(directory: URL, prefix: String) async throws {
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            for i in 0..<30 { _ = try store.add(ClipboardItem(plainText: "\(prefix)-\(i)")) }
        }
    }

    func testTwoRealProcessesDoNotLoseConcurrentWrites() async throws {
        let directory = try temporaryDirectory()
        defer { try? FileManager.default.removeItem(at: directory) }
        var processes: [Process] = []
        var outputs: [Pipe] = []
        for prefix in ["process-a", "process-b"] {
            let process = Process()
            process.executableURL = URL(fileURLWithPath: CommandLine.arguments[0])
            process.arguments = ["--worker", directory.path, prefix]
            let output = Pipe()
            process.standardOutput = output
            process.standardError = output
            try process.run()
            processes.append(process)
            outputs.append(output)
        }
        for (process, output) in zip(processes, outputs) {
            process.waitUntilExit()
            let log = String(data: output.fileHandleForReading.readDataToEndOfFile(), encoding: .utf8) ?? ""
            expectEqual(process.terminationStatus, 0, log)
        }
        try await MainActor.run {
            let store = try ClipboardStore(directoryURL: directory)
            expectEqual(store.items.count, 60)
            for prefix in ["process-a", "process-b"] {
                for i in 0..<30 { expectTrue(store.items.contains { $0.plainText == "\(prefix)-\(i)" }) }
            }
        }
    }
}
