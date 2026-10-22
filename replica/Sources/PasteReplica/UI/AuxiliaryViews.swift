import AppKit
import ServiceManagement
import SwiftUI
import UniformTypeIdentifiers
import PasteReplicaCore
import QuickLookUI

@MainActor
struct ReplicaPreviewView: View {
    @ObservedObject var state: ReplicaUIState
    let itemID: UUID
    @State private var selectedFile = 0
    private var item: ClipboardItem? { state.store.items.first { $0.id == itemID } }

    var body: some View {
        Group {
            if let item {
                VStack(alignment: .leading, spacing: 16) {
                    HStack(spacing: 10) {
                        SourceAppIcon(item: item).frame(width: 32, height: 32)
                        VStack(alignment: .leading, spacing: 3) {
                            Text(item.title.isEmpty ? item.kind.displayName : item.title).font(.headline).lineLimit(2)
                            Text("\(item.sourceName) · \(item.kind.displayName) · \(itemSummary(item))")
                                .font(.caption).foregroundStyle(.secondary)
                        }
                        Spacer()
                        if item.isDeleted { Text("已删除").foregroundStyle(.secondary) }
                    }
                    Divider()
                    if item.kind == .files, !itemFileURLs(item).isEmpty {
                        filePreview(urls: itemFileURLs(item))
                    } else {
                        ScrollView {
                            ReplicaItemContent(item: item, compact: false)
                                .textSelection(.enabled)
                                .frame(maxWidth: .infinity, alignment: .topLeading)
                                .padding(8)
                        }
                    }
                    HStack {
                        Text(item.createdAt, format: .dateTime.year().month().day().hour().minute())
                            .font(.caption).foregroundStyle(.secondary)
                        Spacer()
                        if item.plainText != nil {
                            Button("编辑…") { state.controller?.showEditor(item: item) }
                        }
                        Button("拷贝") {
                            state.controller?.copy(item: item, plainTextOnly: false)
                        }.disabled(item.isDeleted)
                    }
                }
                .padding(22)
            } else {
                ContentUnavailableView("项目不存在", systemImage: "doc.questionmark", description: Text("这个项目已被移除。"))
            }
        }
        .frame(minWidth: 360, minHeight: 280)
        .preferredColorScheme(state.preferredScheme)
    }

    private func filePreview(urls: [URL]) -> some View {
        let index = min(selectedFile, urls.count - 1)
        let url = urls[index]
        return VStack(spacing: 8) {
            if urls.count > 1 {
                Picker("文件", selection: $selectedFile) {
                    ForEach(Array(urls.enumerated()), id: \.offset) { index, file in
                        Text(file.lastPathComponent).tag(index)
                    }
                }
            }
            if FileManager.default.fileExists(atPath: url.path) {
                NativeFilePreview(url: url).frame(maxWidth: .infinity, maxHeight: .infinity)
            } else {
                ContentUnavailableView("文件不可用", systemImage: "doc.questionmark",
                                       description: Text("文件可能已移动或删除。\n\(url.lastPathComponent)"))
            }
        }
    }
}

@MainActor
private struct NativeFilePreview: NSViewRepresentable {
    let url: URL
    func makeNSView(context: Context) -> QLPreviewView {
        let view = QLPreviewView(frame: .zero, style: .normal)!
        view.shouldCloseWithWindow = false
        view.autostarts = false
        view.previewItem = url as NSURL
        return view
    }
    func updateNSView(_ nsView: QLPreviewView, context: Context) {
        if nsView.previewItem?.previewItemURL != url { nsView.previewItem = url as NSURL }
    }
    static func dismantleNSView(_ nsView: QLPreviewView, coordinator: ()) { nsView.close() }
}

@MainActor
struct ReplicaEditorView: View {
    @ObservedObject var state: ReplicaUIState
    let item: ClipboardItem?
    let close: () -> Void
    @StateObject private var document: ReplicaRichTextDocument
    @Environment(\.colorScheme) private var colorScheme

    init(state: ReplicaUIState, item: ClipboardItem?, close: @escaping () -> Void) {
        self.state = state
        self.item = item
        self.close = close
        let initial: NSAttributedString
        if let data = item?.payloads["public.rtf"], let rich = NSAttributedString(rtf: data, documentAttributes: nil) {
            initial = rich
        } else {
            initial = NSAttributedString(string: item?.plainText ?? "", attributes: [
                .font: NSFont.systemFont(ofSize: 14), .foregroundColor: NSColor.textColor
            ])
        }
        _document = StateObject(wrappedValue: ReplicaRichTextDocument(content: initial))
    }

    var body: some View {
        VStack(spacing: 0) {
            ZStack {
                HStack {
                    Button("取消", action: close)
                        .buttonStyle(.plain).padding(.horizontal, 10).frame(height: 22)
                        .overlay(Capsule().stroke(.gray.opacity(0.16)))
                        .keyboardShortcut(.cancelAction)
                    Spacer()
                    Button(item == nil ? "创建" : "保存", action: save)
                        .buttonStyle(.plain).foregroundStyle(.white)
                        .font(.system(size: 14, weight: .semibold))
                        .padding(.horizontal, 10).frame(height: 22)
                        .background(document.content.length == 0 ? Color.gray.opacity(0.30) : .blue, in: Capsule())
                        .disabled(document.content.length == 0)
                        .keyboardShortcut("s", modifiers: .command)
                        .accessibilityIdentifier("editor-save")
                }
                HStack(spacing: 24) {
                    formatButton("B", format: .bold, active: document.bold)
                        .fontWeight(.bold).keyboardShortcut("b", modifiers: .command)
                    formatButton("I", format: .italic, active: document.italic)
                        .italic().keyboardShortcut("i", modifiers: .command)
                    formatButton("U", format: .underline, active: document.underlined)
                        .underline().keyboardShortcut("u", modifiers: .command)
                    formatButton("S", format: .strikethrough, active: document.struck).strikethrough()
                }
            }
            .padding(.horizontal, 8).frame(height: 38)
            ReplicaRichTextInput(document: document, save: save)
                .clipShape(RoundedRectangle(cornerRadius: 5))
                .padding(.horizontal, 5)
            HStack {
                Text("\(document.characterCount) 个字符  ·  \(document.wordCount) 单词  ·  \(document.lineCount) 行")
                    .font(.system(size: 14)).foregroundStyle(.secondary)
                Spacer()
            }.padding(.horizontal, 12).frame(height: 38)
        }
        .frame(width: 500, height: 360)
        .background(colorScheme == .dark ? Color(red: 0.18, green: 0.18, blue: 0.19)
                    : Color(red: 0.87, green: 0.85, blue: 0.83))
        .clipShape(RoundedRectangle(cornerRadius: 16))
        .preferredColorScheme(state.preferredScheme)
    }

    private func formatButton(_ label: String, format: ReplicaRichTextDocument.Format, active: Bool) -> some View {
        Button { document.toggle(format) } label: {
            Text(label).font(.system(size: 14)).frame(width: 16, height: 24)
                .background(active ? Color.primary.opacity(0.10) : .clear, in: RoundedRectangle(cornerRadius: 4))
        }
        .buttonStyle(.plain)
        .accessibilityLabel(format == .bold ? "粗体" : format == .italic ? "斜体" : format == .underline ? "下划线" : "删除线")
    }

    private func save() {
        guard document.content.length > 0 else { return }
        do {
            if let item {
                try state.store.updateRichTextItem(id: item.id, attributedString: document.content)
            } else {
                let rtf = try document.content.data(from: NSRange(location: 0, length: document.content.length),
                                                     documentAttributes: [.documentType: NSAttributedString.DocumentType.rtf])
                let new = ClipboardItem(title: String(document.content.string.prefix(80)),
                                        kind: .richText, plainText: document.content.string, sourceName: "Paste Replica",
                                        sourceBundleID: Bundle.main.bundleIdentifier,
                                        payloads: ["public.rtf": rtf, NSPasteboard.PasteboardType.string.rawValue: Data(document.content.string.utf8)])
                let id = try state.store.add(new)
                if let board = state.pinboardID { try state.store.assign(ids: [id], to: board) }
            }
            state.normalizeSelection()
            close()
        } catch { state.controller?.presentError(error) }
    }
}

@MainActor
struct ReplicaStackView: View {
    @ObservedObject var state: ReplicaUIState
    @State private var selectedID: UUID?
    private var selectedItem: ClipboardItem? {
        state.stackItems.first { $0.id == selectedID } ?? state.stackItems.first
    }

    var body: some View {
        VStack(spacing: 0) {
            if state.stackItems.isEmpty {
                ContentUnavailableView("Stack 为空", systemImage: "square.stack.3d.up",
                                       description: Text("在卡片的右键菜单中将项目添加到 Paste Stack。"))
            } else {
                List(selection: $selectedID) {
                    ForEach(Array(state.stackItems.enumerated()), id: \.element.id) { index, item in
                        HStack(spacing: 12) {
                            Text("\(index + 1)").monospacedDigit().foregroundStyle(.secondary).frame(width: 22)
                            SourceAppIcon(item: item).frame(width: 26, height: 26)
                            VStack(alignment: .leading, spacing: 3) {
                                Text(item.title.isEmpty ? item.kind.displayName : item.title).lineLimit(1)
                                Text(item.plainText ?? itemSummary(item)).font(.caption).foregroundStyle(.secondary).lineLimit(1)
                            }
                            Spacer()
                            Button {
                                state.stackIDs.removeAll { $0 == item.id }
                            } label: { Image(systemName: "minus.circle") }
                            .buttonStyle(.plain).foregroundStyle(.secondary).accessibilityLabel("从 Stack 移除")
                        }
                        .padding(.vertical, 5)
                        .tag(item.id)
                        .contextMenu {
                            Button("上移") { move(item.id, by: -1) }.disabled(index == 0)
                            Button("下移") { move(item.id, by: 1) }.disabled(index == state.stackItems.count - 1)
                            Button("预览") { state.controller?.showPreview(item: item) }
                        }
                    }
                }
            }
            Divider()
            HStack {
                Text("\(state.stackItems.count) 个项目").font(.caption).foregroundStyle(.secondary)
                Spacer()
                Button("清空 Stack") { state.stackIDs = [] }.disabled(state.stackItems.isEmpty)
                Button("拷贝") {
                    if let item = selectedItem {
                        state.controller?.copy(item: item, plainTextOnly: false)
                    }
                }.disabled(selectedItem == nil)
                Button("粘贴并移除") {
                    if let item = selectedItem {
                        if state.controller?.paste(item: item, plainTextOnly: false) == true {
                            state.stackIDs.removeAll { $0 == item.id }
                            selectedID = state.stackItems.first?.id
                        }
                    }
                }.disabled(selectedItem == nil)
            }
            .padding(14)
        }
        .frame(minWidth: 390, minHeight: 320)
        .preferredColorScheme(state.preferredScheme)
    }

    private func move(_ id: UUID, by offset: Int) {
        guard let index = state.stackIDs.firstIndex(of: id) else { return }
        let destination = index + offset
        guard state.stackIDs.indices.contains(destination) else { return }
        state.stackIDs.swapAt(index, destination)
    }
}

@MainActor
struct ReplicaSettingsView: View {
    @ObservedObject var state: ReplicaUIState
    @State private var exclusions = ""
    @State private var tab = 0

    var body: some View {
        HStack(spacing: 0) {
            VStack(spacing: 4) {
                sidebarButton("通用", icon: "gearshape", index: 0)
                sidebarButton("隐私", icon: "hand.raised", index: 1)
                sidebarButton("外观", icon: "paintpalette", index: 2)
                sidebarButton("历史与数据", icon: "externaldrive", index: 3)
                sidebarButton("键盘快捷键", icon: "keyboard", index: 4)
                sidebarButton("MCP 与 AI 工具", icon: "point.3.connected.trianglepath.dotted", index: 5)
                Spacer()
            }
            .padding(12).padding(.top, 12)
            .frame(width: 208)
            .background(Color(nsColor: .controlBackgroundColor))
            Divider()
            Group {
                switch tab {
                case 1: privacy
                case 2: appearance
                case 3: data
                case 4: shortcuts
                case 5: mcp
                default: general
                }
            }.frame(maxWidth: .infinity, maxHeight: .infinity)
        }
        .frame(minWidth: 640, minHeight: 560)
        .preferredColorScheme(state.preferredScheme)
        .onAppear { exclusions = state.store.preferences.excludedBundleIDs.joined(separator: "\n") }
    }

    private func sidebarButton(_ title: String, icon: String, index: Int) -> some View {
        Button { tab = index } label: {
            Label(title, systemImage: icon).font(.system(size: 13))
                .frame(maxWidth: .infinity, alignment: .leading)
                .padding(.horizontal, 10).padding(.vertical, 9)
                .background(tab == index ? Color.accentColor.opacity(0.16) : .clear,
                            in: RoundedRectangle(cornerRadius: 7))
        }.buttonStyle(.plain).accessibilityLabel(title)
    }

    private var general: some View {
        Form {
            Section("剪贴板采集") {
                Toggle("暂停采集", isOn: preference(\.isMonitoringPaused))
                Toggle("采集时播放提示音", isOn: preference(\.playSounds))
                Toggle("忽略应用标记为隐藏的内容", isOn: preference(\.ignoreConcealedContent))
                Button("暂停一小时") {
                    state.store.preferences.isMonitoringPaused = true
                    state.store.preferences.pauseUntil = Date().addingTimeInterval(3600)
                    state.perform { try state.store.save() }
                }
                if let until = state.store.preferences.pauseUntil {
                    Text("暂停至 \(until.formatted(date: .omitted, time: .shortened))")
                        .font(.caption).foregroundStyle(.secondary)
                }
            }
            Section("启动") {
                Toggle("登录时启动", isOn: Binding(get: { state.store.preferences.launchAtLogin },
                                              set: { value in setLaunchAtLogin(value) }))
            }
            Section("粘贴项目") {
                Picker("粘贴项目", selection: preference(\.pasteToActiveApp)) {
                    Text("到当前活动应用").tag(true)
                    Text("到剪贴板").tag(false)
                }
                .pickerStyle(.radioGroup)
                .labelsHidden()
                Toggle("始终以纯文本粘贴", isOn: preference(\.alwaysPastePlainText))
            }
        }
        .formStyle(.grouped)
    }

    private var privacy: some View {
        Form {
            Section("排除来源应用") {
                Text("每行输入一个应用 Bundle ID，例如 com.apple.Safari。列表中的应用不会被采集。")
                    .font(.caption).foregroundStyle(.secondary)
                TextEditor(text: $exclusions).font(.system(.body, design: .monospaced))
                    .frame(height: 125).accessibilityLabel("排除来源 Bundle ID 列表")
                HStack {
                    Button("添加应用…", action: chooseExcludedApp)
                    Spacer()
                    Button("保存排除列表") {
                        state.store.preferences.excludedBundleIDs = Array(Set(exclusions
                            .components(separatedBy: .newlines)
                            .map { $0.trimmingCharacters(in: .whitespacesAndNewlines) }
                            .filter { !$0.isEmpty })).sorted()
                        exclusions = state.store.preferences.excludedBundleIDs.joined(separator: "\n")
                        state.perform { try state.store.save() }
                    }
                }
            }
            Section("系统权限") {
                Text("直接粘贴需要辅助功能权限。你可以在系统设置中授权或撤销。")
                    .font(.caption).foregroundStyle(.secondary)
                Button("打开辅助功能设置") {
                    if let url = URL(string: "x-apple.systempreferences:com.apple.preference.security?Privacy_Accessibility") {
                        NSWorkspace.shared.open(url)
                    }
                }
            }
        }
        .formStyle(.grouped)
    }

    private var appearance: some View {
        Form {
            Section("外观") {
                Picker("主题", selection: preference(\.appearance)) {
                    Text("跟随系统").tag("system")
                    Text("浅色").tag("light")
                    Text("深色").tag("dark")
                }
                HStack {
                    Text("面板高度")
                    Slider(value: preference(\.panelHeight), in: 300...600, step: 1)
                    Text("\(Int(state.store.preferences.panelHeight)) pt").monospacedDigit().frame(width: 60)
                }
                Button("恢复默认高度") {
                    state.store.preferences.panelHeight = 332
                    state.perform { try state.store.save() }
                }
            }
        }
        .formStyle(.grouped)
    }

    private var data: some View {
        Form {
            Section("历史") {
                Picker("保留历史记录", selection: preference(\.historyRetentionDays)) {
                    Text("一天").tag(1)
                    Text("一周").tag(7)
                    Text("一个月").tag(30)
                    Text("一年").tag(365)
                    Text("永久").tag(0)
                }
                HStack {
                    Text("最多保留")
                    TextField("项目数", value: Binding(get: { state.store.preferences.historyLimit }, set: { value in
                        state.store.preferences.historyLimit = max(1, value)
                        state.perform { try state.store.save() }
                    }), format: .number)
                        .frame(width: 100).textFieldStyle(.roundedBorder)
                        .accessibilityLabel("历史保留数量")
                    Text("个项目").foregroundStyle(.secondary)
                }
                Text("已分组的项目会保留。当前共 \(state.store.items.filter { !$0.isDeleted }.count) 个项目。")
                    .font(.caption).foregroundStyle(.secondary)
                Button("清空未分组的历史…", role: .destructive, action: clearHistory)
            }
            Section("归档") {
                HStack {
                    Button("导出归档…") { state.controller?.exportArchive() }
                    Button("导入归档…") { state.controller?.importArchive() }
                }
                Text("归档包含剪贴板内容及原始格式，请妥善保管。")
                    .font(.caption).foregroundStyle(.secondary)
            }
        }
        .formStyle(.grouped)
    }

    private var shortcuts: some View {
        Form {
            Section("面板") {
                shortcut("显示或隐藏面板", "⇧⌘V")
                shortcut("显示 Paste Stack", "⇧⌘C")
                shortcut("切换 Pinboard", "⌘←  ⌘→")
                shortcut("搜索", "⌘F")
                shortcut("新建文本", "⌘N")
                shortcut("新建 Pinboard", "⇧⌘N")
                shortcut("设置", "⌘,")
                shortcut("关闭面板", "Esc")
            }
            Section("项目") {
                shortcut("切换选择", "←  →")
                shortcut("扩展选择", "⇧←  ⇧→")
                shortcut("预览", "Space")
                shortcut("粘贴", "Return")
                shortcut("快速粘贴", "⌘1…9")
                shortcut("纯文本粘贴", "⇧Return / ⌘Return")
                shortcut("拷贝", "⌘C")
                shortcut("删除", "Delete")
            }
        }
        .formStyle(.grouped)
    }

    private var mcpExecutable: URL {
        (Bundle.main.executableURL?.deletingLastPathComponent() ?? URL(fileURLWithPath: CommandLine.arguments[0]).deletingLastPathComponent())
            .appendingPathComponent("paste-replica-mcp")
    }

    private var mcpConfiguration: String {
        let object: [String: Any] = ["mcpServers": ["paste-replica": [
            "command": mcpExecutable.path, "args": ["--data-dir", state.store.directoryURL.path]
        ]]]
        guard let data = try? JSONSerialization.data(withJSONObject: object, options: [.prettyPrinted, .sortedKeys]),
              let value = String(data: data, encoding: .utf8) else { return "" }
        return value
    }

    private var mcp: some View {
        Form {
            Section("MCP 服务") {
                Label(FileManager.default.isExecutableFile(atPath: mcpExecutable.path) ? "可执行文件已就绪" : "未找到 MCP 可执行文件",
                      systemImage: FileManager.default.isExecutableFile(atPath: mcpExecutable.path) ? "checkmark.circle" : "exclamationmark.circle")
                Text("连接 MCP 客户端后，可以搜索和读取内容、创建项目及管理 Pinboard。服务由客户端通过标准输入输出启动。")
                    .font(.caption).foregroundStyle(.secondary)
            }
            Section("客户端配置") {
                Text(mcpConfiguration).font(.system(size: 11, design: .monospaced)).textSelection(.enabled)
                    .padding(8).frame(maxWidth: .infinity, alignment: .leading)
                Button("复制配置") {
                    let pasteboard = state.controller?.pasteboard ?? .general
                    pasteboard.clearContents()
                    if !pasteboard.setString(mcpConfiguration, forType: .string) {
                        state.controller?.showError(message: "无法复制 MCP 配置。")
                    }
                }.disabled(!FileManager.default.isExecutableFile(atPath: mcpExecutable.path))
            }
        }
        .formStyle(.grouped)
    }

    private func shortcut(_ title: String, _ keys: String) -> some View {
        HStack { Text(title); Spacer(); Text(keys).font(.system(.body, design: .monospaced)).foregroundStyle(.secondary) }
    }

    private func preference<Value>(_ keyPath: WritableKeyPath<AppPreferences, Value>) -> Binding<Value> {
        Binding(get: { state.store.preferences[keyPath: keyPath] }, set: { value in
            state.store.preferences[keyPath: keyPath] = value
            if (keyPath as AnyKeyPath) == (\AppPreferences.isMonitoringPaused as AnyKeyPath) {
                state.store.preferences.pauseUntil = nil
            }
            state.perform { try state.store.save() }
        })
    }

    private func chooseExcludedApp() {
        let panel = NSOpenPanel()
        panel.title = "选择不采集的应用"
        panel.allowedContentTypes = [.application]
        panel.directoryURL = URL(fileURLWithPath: "/Applications")
        panel.allowsMultipleSelection = true
        if panel.runModal() == .OK {
            let ids = panel.urls.compactMap { Bundle(url: $0)?.bundleIdentifier }
            let current = exclusions.components(separatedBy: .newlines).filter { !$0.isEmpty }
            exclusions = Array(Set(current + ids)).sorted().joined(separator: "\n")
        }
    }

    private func setLaunchAtLogin(_ enabled: Bool) {
        do {
            if enabled { try SMAppService.mainApp.register() }
            else { try SMAppService.mainApp.unregister() }
            state.store.preferences.launchAtLogin = enabled
            try state.store.save()
        } catch { state.controller?.presentError(error) }
    }

    private func clearHistory() {
        let ids = Set(state.store.items.filter { !$0.isDeleted && $0.pinboardIDs.isEmpty }.map(\.id))
        let alert = NSAlert()
        alert.messageText = "清空未分组的历史？"
        alert.informativeText = "将删除 \(ids.count) 个项目。你可以在“最近删除”中恢复。"
        alert.addButton(withTitle: "清空历史")
        alert.addButton(withTitle: "取消")
        if alert.runModal() == .alertFirstButtonReturn {
            state.perform { try state.store.delete(ids: ids) }
        }
    }
}
