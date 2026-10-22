import AppKit
import SwiftUI
import UniformTypeIdentifiers
import PasteReplicaCore

@MainActor
struct ReplicaPanelView: View {
    @ObservedObject var state: ReplicaUIState
    @FocusState private var searchFocused: Bool
    @Environment(\.colorScheme) private var colorScheme

    var body: some View {
        VStack(spacing: 0) {
            header
                .frame(height: 44)
            if state.visibleItems.isEmpty {
                VStack {
                    Spacer()
                    Text("无结果").font(.system(size: 26, weight: .medium))
                        .foregroundStyle(Color(red: 185 / 255, green: 185 / 255, blue: 185 / 255))
                    Spacer()
                }
                .frame(maxWidth: .infinity, maxHeight: .infinity)
                .accessibilityLabel("无结果")
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
                        if let id { reader.scrollTo(id, anchor: .center) }
                    }
                }
                .frame(height: 242)
                Spacer(minLength: 0)
            }
            if state.visibleItems.isEmpty {
                Color.clear.frame(height: 24).accessibilityHidden(true)
            } else {
                footer.frame(height: 24)
            }
        }
        .frame(maxWidth: .infinity, maxHeight: .infinity)
        .background(colorScheme == .dark ? Color(red: 0.13, green: 0.13, blue: 0.14)
                    : Color(red: 250 / 255, green: 250 / 255, blue: 250 / 255))
        .clipShape(RoundedRectangle(cornerRadius: 24, style: .continuous))
        .overlay(RoundedRectangle(cornerRadius: 24).strokeBorder(.white.opacity(0.22), lineWidth: 1))
        .padding(8)
        .preferredColorScheme(state.preferredScheme)
        .onChange(of: state.query) { _, _ in state.normalizeSelection() }
        .onChange(of: state.kind) { _, _ in state.normalizeSelection() }
        .onChange(of: state.searchFocus) { _, _ in searchFocused = true }
        .accessibilityIdentifier("clipboard-panel")
    }

    private var header: some View {
        ZStack {
            HStack(spacing: 8) {
                if !searchFocused && state.query.isEmpty { boardTabs }
                Spacer(minLength: 430)
                trailingControls
            }
            HStack(spacing: 7) {
                Image(systemName: "magnifyingglass").foregroundStyle(.secondary)
                TextField("搜索", text: $state.query)
                    .textFieldStyle(.plain)
                    .focused($searchFocused)
                    .font(.system(size: 14))
                    .accessibilityLabel("搜索剪贴板")
                    .accessibilityIdentifier("clipboard-search")
                if !state.query.isEmpty {
                    Button { state.query = "" } label: { Image(systemName: "xmark.circle.fill") }
                        .buttonStyle(.plain).foregroundStyle(.secondary)
                        .accessibilityLabel("清空搜索")
                }
                Menu {
                    Button("全部类型") { state.kind = nil }
                    Divider()
                    ForEach(ClipboardKind.allCases, id: \.self) { kind in
                        Button(kind.displayName) { state.kind = kind }
                    }
                } label: {
                    Image(systemName: state.kind == nil ? "line.3.horizontal.decrease" : "line.3.horizontal.decrease.circle.fill")
                        .foregroundStyle(state.kind == nil ? Color.secondary : Color.accentColor)
                }
                .menuStyle(.borderlessButton)
                .menuIndicator(.hidden)
                .fixedSize()
                .accessibilityLabel("按类型筛选")
                .help(state.kind?.displayName ?? "全部类型")
            }
            .padding(.horizontal, 12)
            .frame(width: 400, height: 32)
            .background(.primary.opacity(0.07), in: Capsule())
            .overlay(Capsule().strokeBorder(searchFocused ? Color.accentColor.opacity(0.55) : .clear,
                                            lineWidth: 3))
            historyControls.offset(x: 246)
        }
        .padding(.horizontal, 24)
    }

    private var boardTabs: some View {
        ScrollView(.horizontal, showsIndicators: false) {
            HStack(spacing: 7) {
                boardButton("剪贴板", icon: "clipboard", id: nil)
                ForEach(state.store.pinboards.sorted { $0.sortOrder < $1.sortOrder }) { board in
                    boardButton(board.name, icon: "pin.fill", id: board.id)
                        .contextMenu {
                            Button("重命名") { state.controller?.renamePinboard(board) }
                            Button("删除分组", role: .destructive) { state.controller?.removePinboard(board) }
                        }
                }
                Button { state.controller?.createPinboard() } label: {
                    Image(systemName: "plus").frame(width: 24, height: 26)
                }
                .buttonStyle(.plain)
                .foregroundStyle(.secondary)
                .accessibilityLabel("新建 Pinboard")
                .help("新建 Pinboard ⇧⌘N")
            }
        }
        .frame(maxWidth: 420)
    }

    private func boardButton(_ name: String, icon: String, id: UUID?) -> some View {
        Button { state.chooseBoard(id) } label: {
            Label(name, systemImage: icon)
                .font(.system(size: 13, weight: .medium))
                .lineLimit(1)
                .padding(.horizontal, 11).padding(.vertical, 7)
                .background(state.pinboardID == id && !state.showDeleted ? Color.primary.opacity(0.10) : .clear,
                            in: RoundedRectangle(cornerRadius: 8))
        }
        .buttonStyle(.plain)
        .accessibilityLabel(name)
        .accessibilityAddTraits(state.pinboardID == id ? .isSelected : [])
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
                state.query = ""
                state.chooseBoard(nil)
                searchFocused = false
                state.controller?.panel.makeFirstResponder(nil)
            } label: {
                Image(systemName: "clock.arrow.circlepath").font(.system(size: 17)).frame(width: 18, height: 32)
            }
            .buttonStyle(.plain).fixedSize()
            .accessibilityLabel("返回剪贴板历史")
            Button {
                state.store.preferences.isMonitoringPaused.toggle()
                state.store.preferences.pauseUntil = nil
                state.perform { try state.store.save() }
            } label: {
                Circle().fill(state.store.preferences.isMonitoringPaused ? Color.gray : Color.red)
                    .frame(width: 12, height: 12).frame(height: 32)
            }
            .buttonStyle(.plain)
            .help(state.store.preferences.isMonitoringPaused ? "恢复剪贴板采集" : "暂停剪贴板采集")
            .accessibilityLabel(state.store.preferences.isMonitoringPaused ? "恢复采集" : "暂停采集")
        }
        .foregroundStyle(Color(nsColor: .labelColor))
        .frame(width: 52, height: 32)
    }

    private var footer: some View {
        HStack(spacing: 12) {
            Text(state.showDeleted ? "最近删除" : (state.kind?.displayName ?? ""))
            if state.store.preferences.isMonitoringPaused { Label("已暂停", systemImage: "pause.circle") }
            Spacer()
            Text("\(state.visibleItems.count) 个项目")
            if state.selection.count > 1 { Text("已选择 \(state.selection.count) 项") }
        }
        .font(.system(size: 11)).foregroundStyle(.secondary)
        .padding(.horizontal, 26)
    }
}

@MainActor
struct ReplicaClipboardCard: View {
    @ObservedObject var state: ReplicaUIState
    let item: ClipboardItem
    private var selected: Bool { state.selection.contains(item.id) }

    var body: some View {
        VStack(alignment: .leading, spacing: 0) {
            cardHeader
            ReplicaItemContent(item: item, compact: true)
                .frame(maxWidth: .infinity, maxHeight: .infinity, alignment: .topLeading)
                .padding(.horizontal, 16).padding(.top, 13)
                .clipped()
            HStack(spacing: 4) {
                if !item.pinboardIDs.isEmpty { Image(systemName: "pin.fill").font(.system(size: 10)) }
                Text(itemSummary(item)).lineLimit(1)
                Spacer(minLength: 0)
            }
            .font(.system(size: 12)).foregroundStyle(Color(nsColor: .secondaryLabelColor))
            .padding(.horizontal, 16).padding(.bottom, 13).padding(.top, 7)
        }
        .frame(width: 232, height: 232)
        .background(Color(nsColor: .textBackgroundColor))
        .clipShape(RoundedRectangle(cornerRadius: 12, style: .continuous))
        .overlay(RoundedRectangle(cornerRadius: 12).strokeBorder(selected ? Color.gray.opacity(0.85) : .black.opacity(0.08),
                                                                lineWidth: selected ? 4 : 1))
        .shadow(color: .black.opacity(0.10), radius: 3, y: 2)
        .contentShape(RoundedRectangle(cornerRadius: 12))
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
            .padding(.leading, 16).padding(.top, 8)
            Spacer(minLength: 0)
            SourceAppIcon(item: item)
                .frame(width: 34, height: 34)
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
            Button("拷贝为纯文本") { prepareSelection(); state.controller?.copySelection(plainTextOnly: true) }
                .disabled(item.plainText == nil)
            Button("粘贴") { prepareSelection(); state.controller?.pasteSelection(plainTextOnly: false) }
            Divider()
            Button("预览") { state.controller?.showPreview(item: item) }
            if item.plainText != nil { Button("编辑…") { state.controller?.showEditor(item: item) } }
            Menu("添加到 Pinboard") {
                ForEach(state.store.pinboards) { board in
                    Button(board.name) { prepareSelection(); state.assignSelection(to: board.id) }
                }
                Divider()
                Button("新建 Pinboard…") { prepareSelection(); state.controller?.createPinboard(assignSelection: true) }
            }
            if !item.pinboardIDs.isEmpty {
                Button("从所有 Pinboard 移除") { prepareSelection(); state.assignSelection(to: nil) }
            }
            Button("添加到 Paste Stack") { state.addToStack(item); state.controller?.showStack() }
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
    for key in ["public.png", "public.tiff", "public.jpeg", "public.heic"] {
        if let data = item.payloads[key], let image = NSImage(data: data) { return image }
    }
    return nil
}

func itemFileURLs(_ item: ClipboardItem) -> [URL] {
    let representations: [[String: Data]]
    if let data = item.payloads["com.pastereplica.internal.items+json"],
       let multiple = try? JSONDecoder().decode([[String: Data]].self, from: data) {
        representations = multiple
    } else {
        representations = [item.payloads]
    }
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

func sourceColor(_ item: ClipboardItem) -> Color {
    let colors: [Color] = [Color(red: 0.55, green: 0.65, blue: 0.71),
                           Color(red: 0.41, green: 0.59, blue: 0.76),
                           Color(red: 0.67, green: 0.58, blue: 0.75),
                           Color(red: 0.78, green: 0.55, blue: 0.49),
                           Color(red: 0.41, green: 0.66, blue: 0.56)]
    let key = item.sourceBundleID ?? item.sourceName
    let hash = key.utf8.reduce(0) { ($0 &* 31 &+ Int($1)) & 0x7fffffff }
    return colors[hash % colors.count]
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
