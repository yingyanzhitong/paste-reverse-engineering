import AppKit
import SwiftUI
import UniformTypeIdentifiers
import PasteReplicaCore

@MainActor
struct ReplicaPanelView: View {
    @ObservedObject var state: ReplicaUIState
    @State private var searchFocused = false
    @Environment(\.colorScheme) private var colorScheme

    var body: some View {
        VStack(spacing: 0) {
            header
                .frame(height: 44)
            if state.visibleItems.isEmpty {
                VStack {
                    Spacer()
                    Text(state.searchFailed ? "本地搜索暂不可用" : "无结果")
                        .font(.system(size: 26, weight: .medium))
                        .foregroundStyle(Color(red: 185 / 255, green: 185 / 255, blue: 185 / 255))
                    if state.searchFailed { Button("重试") { state.retrySearch() } }
                    Spacer()
                }
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .accessibilityLabel(state.searchFailed ? "本地搜索暂不可用" : "无结果")
            } else {
                ScrollViewReader { reader in
                    ScrollView(.horizontal, showsIndicators: false) {
                        LazyHStack(spacing: 24) {
                            ForEach(state.visibleItems) { item in
                                ReplicaClipboardCard(state: state, item: item)
                                    .id(item.id)
                            }
                        }
                        .padding(.horizontal, 24)
                        .padding(.vertical, 5)
                    }
                    .onChange(of: state.primaryID) { _, id in
                        if let id { reader.scrollTo(id) }
                    }
                }
                .frame(height: 242).offset(y: 11)
                Spacer(minLength: 0)
            }
            Color.clear.frame(height: 24).accessibilityHidden(true)
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
        .background(colorScheme == .dark ? Color(red: 0.13, green: 0.13, blue: 0.14)
                    : Color(red: 250 / 255, green: 250 / 255, blue: 250 / 255))
        .clipShape(RoundedRectangle(cornerRadius: 24, style: .continuous))
        .overlay(RoundedRectangle(cornerRadius: 24).strokeBorder(.white.opacity(0.22), lineWidth: 1))
        .padding(8)
        .preferredColorScheme(state.preferredScheme)
        .onChange(of: state.query) { _, _ in state.normalizeSelection() }
        .onChange(of: state.searchFilters) { _, _ in state.normalizeSelection() }
        .onChange(of: state.searchFocus) { _, _ in searchFocused = true }
        .onChange(of: state.searchVisible) { _, visible in if !visible { searchFocused = false } }
        .accessibilityIdentifier("clipboard-panel")
    }

    private var searching: Bool { searchFocused || state.searchVisible || !state.isSearchQueryEmpty }

    private var header: some View {
        ZStack {
            HStack { Spacer(); trailingControls }
            if searching {
                searchField
                historyControls.offset(x: 246)
            } else {
                HStack(spacing: 20) {
                    Button { state.searchVisible = true; searchFocused = true } label: {
                        Image(systemName: "magnifyingglass").font(.system(size: 19))
                    }.buttonStyle(.plain).accessibilityLabel("搜索剪贴板")
                    boardTabs
                }.fixedSize(horizontal: true, vertical: false)
            }
        }.padding(.horizontal, 24)
    }

    private var searchField: some View {
        ReplicaSearchEditor(text: $state.query, focused: $searchFocused,
            filters: searchFilterChips,
            onInputChange: { text, filters, nodes in state.applySearchInput(nodes: nodes, text: text, filters: filters) },
            onEnter: { state.controller?.pasteSelection(plainTextOnly: false) },
            onCancel: { state.controller?.cancelSearchOrPanel() },
            onShowFilters: { button in state.controller?.showFilterBrowser(relativeTo: button) })
            .frame(width: 400, height: 32)
    }

    private var searchFilterChips: [ReplicaSearchFilterChip] {
        state.searchFilters.map { ReplicaFilterMatching.chip($0, store: state.store) }
    }

    private var boardTabs: some View {
        HStack(spacing: 7) {
            boardButton(state.store.preferences.historyTitle, board: nil)
                .contextMenu {
                    Button("重命名") { state.controller?.renameHistory() }
                    Button("删除历史…") { state.controller?.clearHistory() }
                }
            ForEach(state.store.pinboards.sorted { $0.sortOrder < $1.sortOrder }) { board in
                boardButton(board.name, board: board)
                    .contextMenu {
                        Button("重命名") { state.controller?.renamePinboard(board) }
                        Menu("颜色") {
                            ForEach(["FF3B30", "FF9500", "FFCC00", "34C759", "00C7BE", "007AFF", "AF52DE", "8E8E93"], id: \.self) { color in
                                Button(colorName(color)) { state.perform { try state.store.updatePinboard(id: board.id, colorHex: color) } }
                            }
                        }
                        Button("向左移动") { state.movePinboard(board, by: -1) }
                        Button("向右移动") { state.movePinboard(board, by: 1) }
                        Button("删除…", role: .destructive) { state.controller?.removePinboard(board) }
                    }
                    .onDrag { NSItemProvider(object: ("paste-pinboard:" + board.id.uuidString) as NSString) }
                    .onDrop(of: [UTType.text], isTargeted: nil) { providers in
                        guard let provider = providers.first else { return false }
                        _ = provider.loadObject(ofClass: String.self) { value, _ in
                            guard let value, value.hasPrefix("paste-pinboard:"), let id = UUID(uuidString: String(value.dropFirst(15))) else { return }
                            Task { @MainActor in state.movePinboard(id: id, before: board.id) }
                        }
                        return true
                    }
            }
            Button { state.controller?.createPinboard() } label: { Image(systemName: "plus").font(.system(size: 21)).frame(width: 30, height: 28) }
                .buttonStyle(.plain).accessibilityLabel("创建 Pinboard").help("创建 Pinboard (⇧⌘N)")
        }.fixedSize()
    }

    private func colorName(_ hex: String) -> String {
        ["FF3B30":"红色", "FF9500":"橙色", "FFCC00":"黄色", "34C759":"绿色", "00C7BE":"青色", "007AFF":"蓝色", "AF52DE":"紫色", "8E8E93":"灰色"][hex] ?? hex
    }

    private func boardButton(_ name: String, board: Pinboard?) -> some View {
        Button { state.chooseBoard(board?.id) } label: {
            HStack(spacing: 6) {
                if let board { Circle().fill(parseColor(board.colorHex) ?? .red).frame(width: 12, height: 12) }
                else { Image(systemName: "clock.arrow.circlepath").font(.system(size: 15)) }
                Text(name).font(.system(size: 13, weight: .medium))
            }
            .lineLimit(1).padding(.horizontal, 10).padding(.vertical, 6)
            .background(state.pinboardID == board?.id && !state.showDeleted ? Color.primary.opacity(0.10) : .clear, in: Capsule())
        }.buttonStyle(.plain).accessibilityLabel(name)
        .accessibilityAddTraits(state.pinboardID == board?.id ? .isSelected : [])
    }

    private var trailingControls: some View {
        HStack(spacing: 14) {
            Menu {
                Button("新建文本", action: { state.controller?.newTextItem() })
                Button("新建 Pinboard", action: { state.controller?.createPinboard() })
                Button("Paste Stack", action: { state.controller?.showStack() })
                Divider()
                Button(state.showDeleted ? "返回剪贴板" : "最近删除") {
                    state.showDeleted.toggle()
                    state.selection = []
                    state.normalizeSelection()
                }
                Button("导入归档…", action: { state.controller?.importArchive() })
                Button("导出归档…", action: { state.controller?.exportArchive() })
                Divider()
                Button("设置…", action: { state.controller?.showSettings() })
                if state.store.preferences.isMonitoringPaused {
                    Button("继续 Paste", action: state.resumeMonitoring)
                } else {
                    Menu("暂停 Paste") {
                        Button("暂停") { state.pauseMonitoring() }
                        ForEach([15, 30, 60, 180, 480], id: \.self) { minutes in
                            Button(minutes < 60 ? "暂停 \(minutes)分钟" : "暂停 \(minutes / 60)小时") {
                                state.pauseMonitoring(minutes: minutes)
                            }
                        }
                    }
                }
            } label: { Image(systemName: "ellipsis").frame(width: 16) }
            .menuStyle(.borderlessButton).menuIndicator(.hidden).fixedSize()
            .accessibilityLabel("更多操作")
        }
        .buttonStyle(.plain)
        .font(.system(size: 18, weight: .semibold))
        .foregroundStyle(.secondary)
        .fixedSize()
    }

    private var historyControls: some View {
        HStack(spacing: 22) {
            Button {
                state.query = ""; state.chooseBoard(nil); state.searchVisible = false; searchFocused = false
                state.controller?.panel.makeFirstResponder(nil)
            } label: { Image(systemName: "clock.arrow.circlepath").font(.system(size: 17)).frame(width: 18, height: 32) }
            .buttonStyle(.plain).accessibilityLabel("返回剪贴板历史")
            ForEach(state.store.pinboards) { board in
                Button { state.chooseBoard(board.id) } label: {
                    Circle().fill(parseColor(board.colorHex) ?? .red).frame(width: 12, height: 12).frame(height: 32)
                }.buttonStyle(.plain).accessibilityLabel(board.name)
            }
        }.foregroundStyle(Color(nsColor: .labelColor)).fixedSize()
    }

}

@MainActor
struct ReplicaClipboardCard: View {
    @ObservedObject var state: ReplicaUIState
    let item: ClipboardItem
    private var selected: Bool { state.selection.contains(item.id) }
    @Environment(\.controlActiveState) private var activeState

    var body: some View {
        VStack(alignment: .leading, spacing: 0) {
            cardHeader
            ReplicaItemContent(item: item, compact: true)
                .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .topLeading)
                .padding(.horizontal, 12).padding(.top, 11)
                .clipped()
            HStack(spacing: 4) {
                if !item.pinboardIDs.isEmpty { Image(systemName: "pin.fill").font(.system(size: 10)) }
                Text(itemSummary(item)).lineLimit(2).frame(maxWidth: .infinity, alignment: item.kind == .link ? .leading : .center)
            }
            .font(.system(size: 13)).foregroundStyle(Color(nsColor: .secondaryLabelColor))
            .padding(.horizontal, 12).padding(.bottom, 11).padding(.top, 7)
        }
        .frame(width: 232, height: 232)
        .background(ReplicaItemPreviewAnchor(itemID: item.id, controller: state.controller))
        .background(Color(nsColor: .textBackgroundColor))
        .clipShape(RoundedRectangle(cornerRadius: 16, style: .continuous))
        .overlay(RoundedRectangle(cornerRadius: 16).stroke(selected ? (activeState == .key ? Color.accentColor : .gray) : .black.opacity(0.08), lineWidth: selected ? 4 : 1).padding(selected ? -2 : 0))
        .shadow(color: .black.opacity(0.10), radius: 3, y: 2)
        .contentShape(RoundedRectangle(cornerRadius: 16))
        .onTapGesture(count: 2) {
            prepareSelection()
            state.controller?.pasteSelection(plainTextOnly: NSEvent.modifierFlags.contains(.shift))
        }
        .onTapGesture { state.select(item, modifiers: NSEvent.modifierFlags) }
        .contextMenu { contextMenu }
        .onDrag { item.isDeleted ? NSItemProvider() : itemDragProvider(item) }
        .accessibilityElement(children: .ignore)
        .accessibilityLabel("\(item.kind.displayName)，\(item.sourceName)，\(item.title)，\(item.plainText.map { String($0.prefix(160)) } ?? "")")
        .accessibilityAddTraits(selected ? [.isSelected, .isButton] : .isButton)
        .accessibilityAction { state.select(item) }
        .accessibilityIdentifier("clipboard-card-\(item.id.uuidString)")
    }

    private var cardHeader: some View {
        HStack(alignment: .top, spacing: 0) {
            VStack(alignment: .leading, spacing: 1) {
                Text(item.kind.displayName).font(.system(size: 16, weight: .semibold)).lineLimit(1)
                Text(relativeTime(item.createdAt)).font(.system(size: 12)).opacity(0.8)
            }
            .foregroundStyle(.white)
            .padding(.leading, 12).padding(.top, 8)
            Spacer(minLength: 0)
            SourceAppIcon(item: item)
                .frame(width: 48, height: 48)
                .frame(width: 52, height: 48)
                .background(Color(nsColor: .textBackgroundColor),
                            in: UnevenRoundedRectangle(topLeadingRadius: 0, bottomLeadingRadius: 24,
                                                       bottomTrailingRadius: 0, topTrailingRadius: 12))
        }
        .frame(height: 48, alignment: .top)
        .background(sourceColor(item))
    }

    @ViewBuilder private var contextMenu: some View {
        if item.isDeleted {
            Button("恢复") { prepareSelection(); state.perform { try state.store.restore(ids: state.selection) } }
        } else {
            Button("拷贝") { prepareSelection(); state.controller?.copySelection(plainTextOnly: false) }
            Button("复制为纯文本") { prepareSelection(); state.controller?.copySelection(plainTextOnly: true) }
                .disabled(item.plainText == nil && item.recognizedText == nil)
            Button("粘贴") { prepareSelection(); state.controller?.pasteSelection(plainTextOnly: false) }
            Button("以纯文本粘贴") { prepareSelection(); state.controller?.pasteSelection(plainTextOnly: true) }
                .disabled(item.plainText == nil && item.recognizedText == nil)
            Divider()
            Button("预览") { state.controller?.showPreview(item: item) }
            if item.plainText != nil { Button("编辑…") { state.controller?.showEditor(item: item) } }
            Button("重命名…") { state.controller?.renameItem(item) }
            Button("副本") { state.perform { _ = try state.store.duplicateItem(id: item.id) } }
            if item.kind == .image {
                Button("复制图中文字") {
                    Task {
                        do {
                            _ = try await state.store.recognizeImageText(id: item.id)
                            state.controller?.copy(item: item, plainTextOnly: true)
                        } catch { state.controller?.presentError(error) }
                    }
                }
            }
            if item.kind == .files {
                Button("打开") { for url in itemFileURLs(item) { NSWorkspace.shared.open(url) } }
                Button("在 Finder 中显示") { NSWorkspace.shared.activateFileViewerSelecting(itemFileURLs(item)) }
            }
            Menu("添加到 Pinboard") {
                ForEach(state.store.pinboards) { board in
                    Button(board.name) { prepareSelection(); state.assignSelection(to: board.id) }
                }
                Divider()
                Button("新建 Pinboard…") { prepareSelection(); state.controller?.createPinboard(assignSelection: true) }
            }
            if !item.pinboardIDs.isEmpty {
                if let board = state.pinboardID {
                    Button("从此 Pinboard 移除") {
                        prepareSelection()
                        state.perform { try state.store.unassign(ids: state.selection, from: board) }
                    }
                }
                Button("从所有 Pinboard 移除") { prepareSelection(); state.assignSelection(to: nil) }
            }
            Button("添加到 Paste Stack") {
                prepareSelection()
                for selected in state.selectedItems { state.addToStack(selected) }
                state.controller?.showStack()
            }
            Button("全选") { state.selectAll() }
            Button("取消全选") { state.deselectAll() }
            Divider()
            Button("删除", role: .destructive) { prepareSelection(); state.deleteSelection() }
        }
    }

    private func prepareSelection() {
        if !selected { state.select(item) }
        state.primaryID = item.id
    }
}

@MainActor
struct SourceAppIcon: View {
    let item: ClipboardItem
    var body: some View {
        if let id = item.sourceBundleID, let url = NSWorkspace.shared.urlForApplication(withBundleIdentifier: id) {
            Image(nsImage: NSWorkspace.shared.icon(forFile: url.path)).resizable().scaledToFit()
        } else {
            Image(systemName: "doc.on.clipboard.fill")
                .resizable().scaledToFit().padding(4).foregroundStyle(.gray)
        }
    }
}

@MainActor
struct ReplicaItemContent: View {
    let item: ClipboardItem
    let compact: Bool
    var body: some View {
        Group {
            if item.kind == .image, let image = itemImage(item) {
                Image(nsImage: image).resizable().scaledToFit()
                    .frame(maxWidth: .infinity, maxHeight: .infinity)
            } else if item.kind == .color, let color = parseColor(item.plainText ?? item.title) {
                VStack(alignment: .leading, spacing: 9) {
                    RoundedRectangle(cornerRadius: 6).fill(color).frame(height: compact ? 70 : 150)
                    Text(item.plainText ?? item.title).font(.system(size: 14, design: .monospaced))
                }
            } else if item.kind == .files {
                VStack(alignment: .leading, spacing: 10) {
                    Image(systemName: "doc.fill").font(.system(size: compact ? 30 : 58)).foregroundStyle(.blue)
                    Text(item.plainText ?? item.title).font(.system(size: 14)).lineLimit(compact ? 4 : nil)
                }
            } else if item.kind == .link {
                VStack(alignment: .leading, spacing: 9) {
                    HStack {
                        Image(systemName: "link").font(.system(size: compact ? 26 : 40)).foregroundStyle(.secondary)
                        Spacer()
                    }
                    .padding(10).frame(maxWidth: .infinity, minHeight: compact ? 44 : 100)
                    .background(.gray.opacity(0.08), in: RoundedRectangle(cornerRadius: 6))
                    Text(item.plainText ?? item.title).font(.system(size: 14)).lineLimit(compact ? 3 : nil)
                }
            } else if item.kind == .richText, let data = item.payloads["public.rtf"],
                      let attributed = NSAttributedString(rtf: data, documentAttributes: nil) {
                Text(AttributedString(compact ? attributed.attributedSubstring(from: .init(location: 0, length: min(attributed.length, 2000))) : attributed))
                    .lineLimit(compact ? 7 : nil)
                    .frame(maxWidth: .infinity, alignment: .topLeading)
            } else {
                Text(compact ? String((item.plainText?.isEmpty == false ? item.plainText! : item.title).prefix(2000))
                     : (item.plainText?.isEmpty == false ? item.plainText! : item.title))
                    .font(.system(size: 14))
                    .foregroundStyle(Color(nsColor: .labelColor))
                    .lineSpacing(3)
                    .lineLimit(compact ? 7 : nil)
                    .frame(maxWidth: .infinity, alignment: .topLeading)
            }
        }
    }
}

func itemImage(_ item: ClipboardItem) -> NSImage? {
    ClipboardStore.pasteboardImage(from: item.payloads)
}

func itemFileURLs(_ item: ClipboardItem) -> [URL] {
    let representations = ClipboardStore.normalizedPasteboardPayloads(item.payloads)
    var urls: [URL] = []
    for representation in representations {
        if let data = representation[NSPasteboard.PasteboardType.fileURL.rawValue],
           let value = String(data: data, encoding: .utf8),
           let url = URL(string: value), url.isFileURL { urls.append(url) }
        if let data = representation["NSFilenamesPboardType"],
           let paths = try? PropertyListSerialization.propertyList(from: data, format: nil) as? [String] {
            urls.append(contentsOf: paths.map { URL(fileURLWithPath: $0) })
        }
    }
    if urls.isEmpty, item.kind == .files, let text = item.plainText {
        urls = text.components(separatedBy: .newlines).filter { $0.hasPrefix("/") }.map { URL(fileURLWithPath: $0) }
    }
    var unique = Set<URL>()
    return urls.filter { unique.insert($0).inserted }
}

func itemDragProvider(_ item: ClipboardItem) -> NSItemProvider {
    let files = itemFileURLs(item)
    let provider = files.first.flatMap { NSItemProvider(contentsOf: $0) } ?? NSItemProvider()
    provider.suggestedName = files.first?.lastPathComponent ?? item.title
    for (type, data) in item.payloads where !type.hasPrefix("com.pastereplica.internal.")
        && type != "org.nspasteboard.AutoGeneratedType" {
        provider.registerDataRepresentation(forTypeIdentifier: type, visibility: .all) { completion in
            completion(data, nil)
            return nil
        }
    }
    if let text = item.plainText,
       !provider.hasItemConformingToTypeIdentifier(UTType.utf8PlainText.identifier) {
        provider.registerDataRepresentation(forTypeIdentifier: UTType.utf8PlainText.identifier, visibility: .all) { completion in
            completion(Data(text.utf8), nil)
            return nil
        }
    }
    if item.kind == .link, let text = item.plainText, let url = URL(string: text),
       !provider.hasItemConformingToTypeIdentifier(UTType.url.identifier) {
        provider.registerObject(url as NSURL, visibility: .all)
    }
    if files.count > 1,
       let data = try? PropertyListSerialization.data(fromPropertyList: files.map(\.path), format: .binary, options: 0) {
        provider.registerDataRepresentation(forTypeIdentifier: "NSFilenamesPboardType", visibility: .all) { completion in
            completion(data, nil)
            return nil
        }
    }
    return provider
}

func parseColor(_ text: String) -> Color? {
    let value = text.trimmingCharacters(in: .whitespacesAndNewlines).replacingOccurrences(of: "#", with: "")
    guard value.count == 6 || value.count == 8, let number = UInt64(value, radix: 16) else { return nil }
    let rgb = value.count == 8 ? number >> 8 : number
    return Color(red: Double((rgb >> 16) & 255) / 255,
                 green: Double((rgb >> 8) & 255) / 255,
                 blue: Double(rgb & 255) / 255)
}

@MainActor
func sourceColor(_ item: ClipboardItem) -> Color {
    Color(nsColor: SourceAppColor.color(bundleID: item.sourceBundleID, name: item.sourceName))
}

func itemSummary(_ item: ClipboardItem) -> String {
    if item.kind == .link, let value = item.plainText, let url = URL(string: value), let host = url.host { return host }
    if item.kind == .image, let image = itemImage(item) { return "\(Int(image.size.width)) × \(Int(image.size.height))" }
    if let text = item.plainText { return "\(text.count) 个字符" }
    let bytes = item.payloads.values.reduce(0) { $0 + $1.count }
    return ByteCountFormatter.string(fromByteCount: Int64(bytes), countStyle: .file)
}

func relativeTime(_ date: Date) -> String {
    let interval = max(0, Date().timeIntervalSince(date))
    if interval < 60 { return "刚刚" }
    if interval < 3600 { return "\(Int(interval / 60)) 分钟前" }
    if interval < 86400 { return "\(Int(interval / 3600)) 小时前" }
    return "\(Int(interval / 86400)) 天前"
}
