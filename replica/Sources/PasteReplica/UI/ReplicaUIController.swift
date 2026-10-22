import AppKit
import Combine
import SwiftUI
import UniformTypeIdentifiers
import PasteReplicaCore

@MainActor
final class ReplicaUIState: ObservableObject {
    let store: ClipboardStore
    weak var controller: ReplicaUIController?
    @Published var query = ""
    @Published var kind: ClipboardKind?
    @Published var pinboardID: UUID?
    @Published var showDeleted = false
    @Published var selection: Set<UUID> = []
    @Published var primaryID: UUID?
    @Published var searchFocus = UUID()
    @Published var stackIDs: [UUID] = []
    private var observation: AnyCancellable?

    init(store: ClipboardStore) {
        self.store = store
        observation = store.objectWillChange.sink { [weak self] _ in
            self?.objectWillChange.send()
            DispatchQueue.main.async { [weak self] in self?.normalizeSelection() }
        }
    }

    var visibleItems: [ClipboardItem] {
        store.search(query: query, kind: kind, pinboardID: pinboardID, includeDeleted: showDeleted)
            .filter { !showDeleted || $0.isDeleted }
    }
    var selectedItems: [ClipboardItem] { visibleItems.filter { selection.contains($0.id) } }
    var primaryItem: ClipboardItem? {
        visibleItems.first { $0.id == primaryID } ?? selectedItems.first ?? visibleItems.first
    }
    var stackItems: [ClipboardItem] {
        stackIDs.compactMap { id in store.items.first { $0.id == id && !$0.isDeleted } }
    }
    var preferredScheme: ColorScheme? {
        switch store.preferences.appearance {
        case "light": return .light
        case "dark": return .dark
        default: return nil
        }
    }

    func normalizeSelection() {
        let ids = Set(visibleItems.map(\.id))
        selection.formIntersection(ids)
        if selection.isEmpty, let first = visibleItems.first { selection = [first.id] }
        if primaryID == nil || !ids.contains(primaryID!) || !selection.contains(primaryID!) {
            primaryID = visibleItems.first { selection.contains($0.id) }?.id
        }
        if let pinboardID, !store.pinboards.contains(where: { $0.id == pinboardID }) {
            self.pinboardID = nil
        }
    }

    func select(_ item: ClipboardItem, modifiers: NSEvent.ModifierFlags = []) {
        controller?.panel.makeFirstResponder(nil)
        if modifiers.contains(.shift), let anchor = primaryID,
           let start = visibleItems.firstIndex(where: { $0.id == anchor }),
           let end = visibleItems.firstIndex(where: { $0.id == item.id }) {
            selection.formUnion(visibleItems[min(start, end)...max(start, end)].map(\.id))
        } else if modifiers.contains(.command) {
            if selection.contains(item.id) { selection.remove(item.id) }
            else { selection.insert(item.id) }
            primaryID = item.id
        } else {
            selection = [item.id]
            primaryID = item.id
        }
    }

    func moveSelection(_ offset: Int, extending: Bool = false) {
        let items = visibleItems
        guard !items.isEmpty else { return }
        let current = items.firstIndex { $0.id == primaryID } ?? 0
        let next = max(0, min(items.count - 1, current + offset))
        if extending { selection.insert(items[next].id) } else { selection = [items[next].id] }
        primaryID = items[next].id
    }

    func chooseBoard(_ id: UUID?) {
        pinboardID = id
        showDeleted = false
        selection = []
        primaryID = nil
        normalizeSelection()
    }

    func switchBoard(_ offset: Int) {
        let ids: [UUID?] = [nil] + store.pinboards.sorted { $0.sortOrder < $1.sortOrder }.map { Optional($0.id) }
        let current = ids.firstIndex { $0 == pinboardID } ?? 0
        chooseBoard(ids[max(0, min(ids.count - 1, current + offset))])
    }

    func perform(_ action: () throws -> Void) {
        do { try action() }
        catch { controller?.presentError(error) }
    }

    func deleteSelection() {
        let ids = selection.isEmpty ? Set(primaryItem.map { [$0.id] } ?? []) : selection
        perform { try store.delete(ids: ids) }
        normalizeSelection()
    }

    func assignSelection(to id: UUID?) {
        let ids = selection.isEmpty ? Set(primaryItem.map { [$0.id] } ?? []) : selection
        perform { try store.assign(ids: ids, to: id) }
    }

    func addToStack(_ item: ClipboardItem) {
        if !stackIDs.contains(item.id) { stackIDs.append(item.id) }
    }
}

@MainActor
private final class ReplicaPanel: NSPanel {
    var keyHandler: ((NSEvent) -> Bool)?
    override var canBecomeKey: Bool { true }
    override var canBecomeMain: Bool { false }
    override func sendEvent(_ event: NSEvent) {
        if event.type == .keyDown, keyHandler?(event) == true { return }
        super.sendEvent(event)
    }
}

@MainActor
private final class ReplicaEditorWindow: NSWindow {
    override var canBecomeKey: Bool { true }
    override var canBecomeMain: Bool { true }
}

@MainActor
final class ReplicaUIController {
    let store: ClipboardStore
    let state: ReplicaUIState
    let panel: NSPanel
    var pasteHandler: ((UUID, Bool) -> Void)?
    var pasteboard: NSPasteboard = .general
    private var settingsWindow: NSWindow?
    private var stackWindow: NSWindow?
    private var itemWindows: [UUID: NSWindow] = [:]
    private var preferenceObservation: AnyCancellable?

    init(store: ClipboardStore) {
        self.store = store
        state = ReplicaUIState(store: store)
        let panel = ReplicaPanel(contentRect: .init(x: 0, y: 0, width: 1512, height: 332),
                                 styleMask: [.borderless, .nonactivatingPanel],
                                 backing: .buffered, defer: false)
        self.panel = panel
        panel.identifier = NSUserInterfaceItemIdentifier("paste-replica-panel")
        panel.title = "Paste Replica"
        panel.isOpaque = false
        panel.backgroundColor = .clear
        panel.hasShadow = true
        panel.isFloatingPanel = true
        panel.level = .mainMenu
        panel.hidesOnDeactivate = false
        panel.collectionBehavior = [.canJoinAllSpaces, .fullScreenAuxiliary]
        panel.isReleasedWhenClosed = false
        panel.contentView = NSHostingView(rootView: ReplicaPanelView(state: state))
        state.controller = self
        panel.keyHandler = { [weak self] event in self?.handleKey(event) ?? false }
        preferenceObservation = store.$preferences.sink { [weak self] _ in
            DispatchQueue.main.async { [weak self] in self?.applyAppearance() }
        }
        applyAppearance()
    }

    func showPanel() {
        if !panel.isVisible {
            state.query = ""
            panel.makeFirstResponder(nil)
        }
        state.normalizeSelection()
        positionPanel()
        panel.makeKeyAndOrderFront(nil)
        NSApp.activate(ignoringOtherApps: true)
    }

    func hidePanel() { panel.orderOut(nil) }
    func togglePanel() { panel.isVisible ? hidePanel() : showPanel() }
    func focusSearch() { showPanel(); state.searchFocus = UUID() }
    func showError(message: String) {
        presentError(NSError(domain: "PasteReplica", code: 1,
                             userInfo: [NSLocalizedDescriptionKey: message]))
    }

    func showSettings() {
        if settingsWindow == nil {
            settingsWindow = makeWindow(title: "设置", size: .init(width: 640, height: 564),
                                        view: ReplicaSettingsView(state: state))
        }
        show(settingsWindow!)
    }

    func showStack() {
        if stackWindow == nil {
            stackWindow = makeWindow(title: "Paste Stack", size: .init(width: 470, height: 470),
                                     view: ReplicaStackView(state: state))
        }
        show(stackWindow!)
    }

    func newTextItem() { showEditor(item: nil) }

    func copySelection(plainTextOnly: Bool) {
        guard let item = state.primaryItem, !item.isDeleted else { return }
        copy(item: item, plainTextOnly: plainTextOnly)
    }

    func copy(item: ClipboardItem, plainTextOnly: Bool) {
        state.perform { try store.writeToPasteboard(id: item.id, pasteboard: pasteboard,
                                                    plainTextOnly: plainTextOnly) }
    }

    func pasteSelection(plainTextOnly: Bool) {
        guard let item = state.primaryItem, !item.isDeleted else { return }
        paste(item: item, plainTextOnly: plainTextOnly)
    }

    @discardableResult
    func paste(item: ClipboardItem, plainTextOnly: Bool) -> Bool {
        guard let pasteHandler else {
            presentError(NSError(domain: "PasteReplica", code: 1,
                                 userInfo: [NSLocalizedDescriptionKey: "粘贴服务尚未就绪，请使用“拷贝”后粘贴。 "]))
            return false
        }
        hidePanel()
        pasteHandler(item.id, plainTextOnly)
        return true
    }

    func showPreview(item: ClipboardItem) {
        if let existing = itemWindows[item.id] { show(existing); return }
        let window = makeWindow(title: item.title.isEmpty ? item.kind.displayName : item.title,
                                size: .init(width: 620, height: 480),
                                view: ReplicaPreviewView(state: state, itemID: item.id))
        itemWindows[item.id] = window
        show(window)
    }

    func showEditor(item: ClipboardItem?) {
        let windowID = UUID()
        let window = ReplicaEditorWindow(contentRect: NSRect(x: 0, y: 0, width: 500, height: 360),
                                         styleMask: [.borderless], backing: .buffered, defer: false)
        window.title = item == nil ? "新建文本" : "编辑文本"
        window.isReleasedWhenClosed = false
        window.isMovableByWindowBackground = true
        window.isOpaque = false
        window.backgroundColor = .clear
        window.hasShadow = true
        window.level = .floating
        window.contentView = NSHostingView(rootView: ReplicaEditorView(state: state, item: item, close: { [weak self] in
            self?.itemWindows[windowID]?.close()
            self?.itemWindows.removeValue(forKey: windowID)
        }))
        window.center()
        itemWindows[windowID] = window
        show(window)
    }

    func createPinboard(assignSelection: Bool = false) {
        guard let name = prompt(title: "新建 Pinboard", message: "为这个分组输入名称。", initial: "") else { return }
        let ids = state.selection
        state.perform {
            let board = try store.createPinboard(name: name, colorHex: "5575D9")
            if assignSelection { try store.assign(ids: ids, to: board.id) }
            state.chooseBoard(board.id)
        }
    }

    func renamePinboard(_ board: Pinboard) {
        guard let name = prompt(title: "重命名 Pinboard", message: "输入新的分组名称。", initial: board.name) else { return }
        state.perform { try store.renamePinboard(id: board.id, name: name) }
    }

    func removePinboard(_ board: Pinboard) {
        let alert = NSAlert()
        alert.messageText = "删除“\(board.name)”？"
        alert.informativeText = "分组中的项目仍保留在剪贴板历史中。"
        alert.addButton(withTitle: "删除分组")
        alert.addButton(withTitle: "取消")
        if alert.runModal() == .alertFirstButtonReturn {
            state.perform { try store.removePinboard(id: board.id) }
            if state.pinboardID == board.id { state.chooseBoard(nil) }
        }
    }

    func exportArchive() {
        let chooser = NSSavePanel()
        chooser.title = "导出剪贴板归档"
        chooser.nameFieldStringValue = "PasteReplica-archive.json"
        chooser.allowedContentTypes = [.json]
        if chooser.runModal() == .OK, let url = chooser.url {
            state.perform { try store.exportArchive(to: url) }
        }
    }

    func importArchive() {
        let chooser = NSOpenPanel()
        chooser.title = "导入剪贴板归档"
        chooser.allowedContentTypes = [.json]
        chooser.allowsMultipleSelection = false
        if chooser.runModal() == .OK, let url = chooser.url {
            state.perform { try store.importArchive(from: url) }
            state.normalizeSelection()
        }
    }

    func presentError(_ error: Error) {
        let alert = NSAlert(error: error)
        alert.messageText = "操作未完成"
        alert.runModal()
    }

    private func prompt(title: String, message: String, initial: String) -> String? {
        let alert = NSAlert()
        alert.messageText = title
        alert.informativeText = message
        let input = NSTextField(string: initial)
        input.frame = .init(x: 0, y: 0, width: 300, height: 24)
        alert.accessoryView = input
        alert.addButton(withTitle: "确定")
        alert.addButton(withTitle: "取消")
        alert.window.initialFirstResponder = input
        guard alert.runModal() == .alertFirstButtonReturn else { return nil }
        let name = input.stringValue.trimmingCharacters(in: .whitespacesAndNewlines)
        return name.isEmpty ? nil : name
    }

    private func positionPanel() {
        let mouse = NSEvent.mouseLocation
        let screen = NSScreen.screens.first { NSMouseInRect(mouse, $0.frame, false) } ?? NSScreen.main
        guard let screen else { return }
        let frame = screen.frame
        let height = min(max(store.preferences.panelHeight, 300), frame.height - 80)
        panel.setFrame(.init(x: frame.minX, y: frame.minY,
                             width: frame.width, height: height), display: true)
    }

    private func applyAppearance() {
        let appearance: NSAppearance?
        switch store.preferences.appearance {
        case "light": appearance = NSAppearance(named: .aqua)
        case "dark": appearance = NSAppearance(named: .darkAqua)
        default: appearance = nil
        }
        panel.appearance = appearance
        settingsWindow?.appearance = appearance
        stackWindow?.appearance = appearance
        itemWindows.values.forEach { $0.appearance = appearance }
        if panel.isVisible { positionPanel() }
    }

    private func makeWindow<V: View>(title: String, size: NSSize, view: V) -> NSWindow {
        let window = NSWindow(contentRect: .init(origin: .zero, size: size),
                              styleMask: [.titled, .closable, .miniaturizable, .resizable],
                              backing: .buffered, defer: false)
        window.title = title
        window.isReleasedWhenClosed = false
        window.contentView = NSHostingView(rootView: view)
        window.center()
        return window
    }

    private func show(_ window: NSWindow) {
        hidePanel()
        window.makeKeyAndOrderFront(nil)
        NSApp.activate(ignoringOtherApps: true)
    }

    private func handleKey(_ event: NSEvent) -> Bool {
        let modifiers = event.modifierFlags.intersection(.deviceIndependentFlagsMask)
        let command = modifiers.contains(.command)
        let shift = modifiers.contains(.shift)
        let isEditing = panel.firstResponder is NSTextView
        let key = event.charactersIgnoringModifiers?.lowercased() ?? ""
        if command {
            if event.keyCode == 123 { state.switchBoard(-1); return true }
            if event.keyCode == 124 { state.switchBoard(1); return true }
            if let number = Int(key), (1...9).contains(number), state.visibleItems.indices.contains(number - 1) {
                state.select(state.visibleItems[number - 1])
                pasteSelection(plainTextOnly: shift)
                return true
            }
            switch key {
            case "f": focusSearch(); return true
            case "n": shift ? createPinboard() : newTextItem(); return true
            case ",": showSettings(); return true
            case "c" where !isEditing: copySelection(plainTextOnly: shift); return true
            case "a" where !isEditing: state.selection = Set(state.visibleItems.map(\.id)); return true
            default: break
            }
        }
        switch event.keyCode {
        case 53: hidePanel(); return true
        case 36, 76: pasteSelection(plainTextOnly: command || shift); return true
        case 123 where !isEditing: state.moveSelection(-1, extending: shift); return true
        case 124 where !isEditing: state.moveSelection(1, extending: shift); return true
        case 49 where !isEditing:
            if let item = state.primaryItem { showPreview(item: item) }
            return true
        case 51, 117:
            guard !isEditing else { return false }
            state.deleteSelection(); return true
        default: return false
        }
    }
}
