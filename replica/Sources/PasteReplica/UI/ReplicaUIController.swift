import AppKit
import Combine
import SwiftUI
import UniformTypeIdentifiers
import PasteReplicaCore

@MainActor
final class ReplicaUIState: ObservableObject {
    let store: ClipboardStore
    weak var controller: ReplicaUIController?
    var monitoringPauseChanged: (() -> Void)?
    @Published var query = "" { didSet {
        if !isApplyingSearchInput { searchInputProjection = nil; refreshSearch() }
    } }
    @Published var searchFilters: [ReplicaSearchFilterChip.Selection] = [] { didSet {
        if !isApplyingSearchInput { searchInputProjection = nil; refreshSearch() }
    } }
    @Published var pinboardID: UUID?
    @Published var showDeleted = false
    @Published var selection: Set<UUID> = []
    @Published var primaryID: UUID?
    @Published var searchFocus = UUID()
    @Published var searchVisible = false
    @Published var stackIDs: [UUID] = [] {
        didSet {
            guard oldValue != stackIDs, store.preferences.stackItemIDs != stackIDs else { return }
            store.preferences.stackItemIDs = stackIDs
            perform { try store.save() }
            controller?.stackContentsChanged()
        }
    }
    @Published var hotKeyStatusMessage = ""
    @Published var allowsEmptySelection = false
    private var observation: AnyCancellable?
    private let searchIndex: ReplicaSearchIndex
    private var searchInputProjection: [OriginalSearchQueryNode]?
    private var isApplyingSearchInput = false

    init(store: ClipboardStore) {
        self.store = store
        searchIndex = ReplicaSearchIndex(directoryURL: store.directoryURL)
        stackIDs = store.preferences.stackItemIDs
        searchIndex.onUpdate = { [weak self] in
            self?.objectWillChange.send()
            self?.normalizeSelection()
        }
        refreshSearch()
        observation = store.objectWillChange.sink { [weak self] _ in
            self?.objectWillChange.send()
            DispatchQueue.main.async { [weak self] in
                self?.refreshSearch()
                self?.normalizeSelection()
            }
        }
    }

    private var searchQueryNodes: [OriginalSearchQueryNode] {
        if let searchInputProjection { return searchInputProjection }
        var buffer = query
        var nodes: [OriginalSearchQueryNode] = []
        OriginalSearchTextTokens.f_1002f8760(&buffer, into: &nodes)
        nodes += searchFilters.map(\.queryNode)
        return OriginalSearchQueryNormalization.f_1002da16c(nodes, flag: 0)
    }

    func applySearchInput(nodes: [OriginalSearchQueryNode], text: String,
                          filters: [ReplicaSearchFilterChip.Selection]) {
        isApplyingSearchInput = true
        query = text
        searchFilters = filters
        searchInputProjection = nodes
        isApplyingSearchInput = false
        refreshSearch()
    }

    var isSearchQueryEmpty: Bool { OriginalSearchQuery.f_1002ddcf0(searchQueryNodes) }

    private func refreshSearch() {
        searchIndex.update(items: store.items, nodes: searchQueryNodes)
    }

    var searchFailed: Bool { !searchIndex.queryString.isEmpty && searchIndex.error != nil }
    func retrySearch() { searchIndex.retry() }

    var visibleItems: [ClipboardItem] {
        if searchIndex.queryString.isEmpty {
            return store.search(query: "", pinboardID: pinboardID, includeDeleted: showDeleted)
                .filter { !showDeleted || $0.isDeleted }
        }
        return store.items.filter { item in
            (showDeleted ? item.isDeleted : !item.isDeleted)
                && (pinboardID == nil || item.pinboardIDs.contains(pinboardID!))
                && searchIndex.identifiers.contains(item.id)
        }.sorted { $0.updatedAt > $1.updatedAt }
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
        if selection.isEmpty, !allowsEmptySelection, let first = visibleItems.first { selection = [first.id] }
        if primaryID == nil || !ids.contains(primaryID!) || !selection.contains(primaryID!) {
            primaryID = visibleItems.first { selection.contains($0.id) }?.id
        }
        if let pinboardID, !store.pinboards.contains(where: { $0.id == pinboardID }) {
            self.pinboardID = nil
        }
    }

    func select(_ item: ClipboardItem, modifiers: NSEvent.ModifierFlags = []) {
        allowsEmptySelection = false
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
        allowsEmptySelection = false
        let items = visibleItems
        guard !items.isEmpty else { return }
        let current = items.firstIndex { $0.id == primaryID } ?? 0
        let next = max(0, min(items.count - 1, current + offset))
        if extending { selection.insert(items[next].id) } else { selection = [items[next].id] }
        primaryID = items[next].id
    }

    func chooseBoard(_ id: UUID?) {
        allowsEmptySelection = false
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

    func reverseStack() {
        OriginalStackFunctions.f_10008468c(&stackIDs)
        store.preferences.stackReversed.toggle()
        perform { try store.save() }
    }

    func selectAll() { allowsEmptySelection = false; selection = Set(visibleItems.map(\.id)) }
    func deselectAll() { allowsEmptySelection = true; selection = []; primaryID = nil }

    func pauseMonitoring(minutes: Int? = nil) {
        store.preferences.isMonitoringPaused = true
        store.preferences.pauseUntil = minutes.map { Date().addingTimeInterval(Double($0) * 60) }
        perform {
            try store.save()
            ReplicaCopiedOSD.showPaused(resumeDate: store.preferences.pauseUntil)
            monitoringPauseChanged?()
        }
    }

    func resumeMonitoring() {
        store.preferences.isMonitoringPaused = false
        store.preferences.pauseUntil = nil
        perform {
            try store.save()
            ReplicaCopiedOSD.showResumed()
            monitoringPauseChanged?()
        }
    }

    func movePinboard(_ board: Pinboard, by offset: Int) {
        var ids = store.pinboards.sorted { $0.sortOrder < $1.sortOrder }.map(\.id)
        guard let index = ids.firstIndex(of: board.id), ids.indices.contains(index + offset) else { return }
        ids.swapAt(index, index + offset)
        perform { try store.reorderPinboards(ids: ids) }
    }

    func movePinboard(id: UUID, before target: UUID) {
        guard id != target else { return }
        var ids = store.pinboards.sorted { $0.sortOrder < $1.sortOrder }.map(\.id)
        guard ids.contains(id), ids.contains(target) else { return }
        ids.removeAll { $0 == id }
        ids.insert(id, at: ids.firstIndex(of: target)!)
        perform { try store.reorderPinboards(ids: ids) }
    }
}

@MainActor
private final class ReplicaPanel: NSPanel {
    var keyHandler: ((NSEvent) -> Bool)?
    override var canBecomeKey: Bool { true }
    override var canBecomeMain: Bool { true }
    override func makeFirstResponder(_ responder: NSResponder?) -> Bool {
        super.makeFirstResponder(responder ?? initialFirstResponder ?? contentView)
    }
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
private final class ReplicaStackPanel: NSPanel {
    override var canBecomeKey: Bool { OriginalStackFunctions.f_1000114f4() }
    override var canBecomeMain: Bool { OriginalStackFunctions.f_1000114ec() }
}

@MainActor
final class ReplicaUIController {
    let store: ClipboardStore
    let state: ReplicaUIState
    let panel: NSPanel
    var pasteHandler: ((UUID, Bool) -> Void)?
    var pasteItemsHandler: (([UUID], Bool) -> Void)?
    var copiedItemsHandler: (() -> Void)?
    var pasteboard: NSPasteboard = .general
    var hotKeyConfigurationChanged: (() -> Void)?
    var hotKeyRecordingChanged: ((Bool) -> Void)?
    var stackDidChange: (() -> Void)?
    var isStackVisible: Bool { stackWindow?.isVisible == true }
    var hotKeyStatusMessage: String {
        get { state.hotKeyStatusMessage }
        set { state.hotKeyStatusMessage = newValue }
    }
    private let sharingPolicy: WindowSharingPolicy
    private var settingsWindow: NSWindow?
    private var closedSearchTimer: Timer?
    private var closedCreateObserver: NSObjectProtocol?
    private var closedRestoreObservation: AnyCancellable?
    private var stackWindow: NSWindow?
    private var itemWindows: [UUID: NSWindow] = [:]
    private let previewRegistry = OriginalPreviewWindowRegistry()
    private var previewAnchors: [UUID: WeakReplicaPreviewAnchor] = [:]
    private lazy var previewPopover = makePreviewPopover()
    var filterBrowserPopover: OriginalFilterBrowserPopover?
    private var preferenceObservation: AnyCancellable?

    init(store: ClipboardStore) {
        self.store = store
        sharingPolicy = WindowSharingPolicy(store: store)
        state = ReplicaUIState(store: store)
        let panel = ReplicaPanel(contentRect: .init(x: 0, y: 0, width: 1512, height: 332),
                                 styleMask: [.borderless, .nonactivatingPanel],
                                 backing: .buffered, defer: false)
        self.panel = panel
        panel.identifier = NSUserInterfaceItemIdentifier("paste-replica-panel")
        panel.title = "Paste Replica"
        panel.isOpaque = false
        panel.backgroundColor = .clear
        panel.hasShadow = false
        panel.isMovable = false
        panel.isFloatingPanel = true
        panel.level = .mainMenu
        panel.hidesOnDeactivate = false
        panel.collectionBehavior = [.canJoinAllSpaces, .fullScreenAuxiliary]
        panel.isReleasedWhenClosed = false
        sharingPolicy.apply(to: panel)
        panel.contentView = NSHostingView(rootView: ReplicaPanelView(state: state))
        state.controller = self
        panel.keyHandler = { [weak self] event in self?.handleKey(event) ?? false }
        preferenceObservation = store.$preferences.sink { [weak self] _ in
            DispatchQueue.main.async { [weak self] in self?.applyAppearance() }
        }
        applyAppearance()
    }

    deinit {
        MainActor.assumeIsolated { cancelClosedState() }
    }

    func showPanel() {
        cancelClosedState()
        if !panel.isVisible { panel.makeFirstResponder(nil) }
        state.normalizeSelection()
        positionPanel()
        panel.makeKeyAndOrderFront(nil)
        NSApp.activate(ignoringOtherApps: true)
    }

    func hidePanel() {
        guard panel.isVisible else { return }
        panel.makeFirstResponder(nil)
        NotificationCenter.default.post(name: OriginalPreviewPopover.mainWindowWillCloseNotification, object: nil)
        panel.orderOut(nil)
        cancelClosedState()
        closedCreateObserver = NotificationCenter.default.addObserver(
            forName: ClipboardMonitor.didCreateItemNotification, object: nil, queue: .main) { [weak self] _ in
                MainActor.assumeIsolated {
                    guard let self else { return }
                    self.state.chooseBoard(nil)
                    self.closedSearchTimer?.invalidate()
                    self.closedSearchTimer = nil
                }
            }
        closedRestoreObservation = store.didRestoreItem.sink { [weak self] in
            guard let self, self.state.isSearchQueryEmpty, self.state.pinboardID == nil else { return }
            self.state.chooseBoard(nil)
            self.closedSearchTimer?.invalidate()
            self.closedSearchTimer = nil
        }
        closedSearchTimer = Timer.scheduledTimer(withTimeInterval: 10, repeats: false) { [weak self] _ in
            MainActor.assumeIsolated {
                guard let self, !self.state.isSearchQueryEmpty else { return }
                self.state.applySearchInput(nodes: [], text: "", filters: [])
                self.state.searchVisible = false
            }
        }
    }

    private func cancelClosedState() {
        closedSearchTimer?.invalidate()
        closedSearchTimer = nil
        if let closedCreateObserver { NotificationCenter.default.removeObserver(closedCreateObserver) }
        closedCreateObserver = nil
        closedRestoreObservation?.cancel()
        closedRestoreObservation = nil
    }
    func togglePanel() { panel.isVisible ? hidePanel() : showPanel() }
    func focusSearch() { showPanel(); state.searchVisible = true; state.searchFocus = UUID() }
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
            let window = ReplicaStackPanel(contentRect: .init(x: 0, y: 0, width: 264, height: 76),
                                           styleMask: [.borderless, .nonactivatingPanel], backing: .buffered, defer: false)
            window.title = "Paste Stack"
            window.isReleasedWhenClosed = false
            window.isOpaque = false; window.backgroundColor = .clear; window.hasShadow = true
            window.contentView = NSHostingView(rootView: ReplicaStackView(state: state))
            sharingPolicy.apply(to: window)
            if !window.setFrameUsingName(OriginalStackWindowController.stackFrameAutosaveName),
               !window.setFrameUsingName("PasteReplicaStack") {
                let frame = NSScreen.main?.visibleFrame ?? .init(x: 0, y: 0, width: 1200, height: 800)
                window.setFrameOrigin(.init(x: frame.maxX - 284, y: frame.maxY - 96))
            }
            let controller = OriginalStackWindowController(window: window)
            controller.f_100011138()
            stackWindow = window
        }
        hidePanel()
        stackWindow!.orderFrontRegardless()
        stackContentsChanged()
    }

    func hideStack() { stackWindow?.orderOut(nil); stackDidChange?() }

    func stackContentsChanged() {
        if let window = stackWindow {
            let height = CGFloat(32 + min(10, max(1, state.stackItems.count)) * 44)
            let top = window.frame.maxY
            window.setFrame(.init(x: window.frame.minX, y: top - height, width: 264, height: height), display: true)
        }
        stackDidChange?()
    }

    func captureIntoStack(id: UUID) {
        guard isStackVisible, let item = store.items.first(where: { $0.id == id && !$0.isDeleted }) else { return }
        state.addToStack(item)
    }

    func consumeStackHead() {
        guard let first = state.stackItems.first else { return }
        guard let index = state.stackIDs.firstIndex(of: first.id) else { return }
        state.stackIDs.remove(at: index)
    }

    func newTextItem() { showEditor(item: nil) }

    func renameHistory() {
        guard let name = prompt(title: "重命名", message: "", initial: store.preferences.historyTitle) else { return }
        store.preferences.historyTitle = name
        state.perform { try store.save() }
    }

    func renameItem(_ item: ClipboardItem) {
        guard let title = prompt(title: "重命名", message: "", initial: item.title) else { return }
        state.perform { try store.updateItem(id: item.id, title: title, text: nil) }
    }

    func clearHistory() {
        let alert = NSAlert()
        sharingPolicy.apply(to: alert.window)
        alert.messageText = "您确定要删除剪贴板历史记录吗？"
        alert.informativeText = "已固定的项目和 Pinboards 不会被删除。此操作无法撤销。"
        alert.addButton(withTitle: "删除历史"); alert.addButton(withTitle: "取消")
        if alert.runModal() == .alertFirstButtonReturn { state.perform { try store.eraseHistory() } }
    }

    func copySelection(plainTextOnly: Bool) {
        let items = state.selectedItems
        guard !items.isEmpty else { return }
        copy(ids: items.map(\.id), plainTextOnly: plainTextOnly)
    }

    func copy(item: ClipboardItem, plainTextOnly: Bool) {
        copy(ids: [item.id], plainTextOnly: plainTextOnly)
    }

    func copy(ids: [UUID], plainTextOnly: Bool) {
        state.perform {
            try store.writeToPasteboard(ids: ids, pasteboard: pasteboard, plainTextOnly: plainTextOnly)
            copiedItemsHandler?()
        }
    }

    func pasteSelection(plainTextOnly: Bool) {
        let items = state.selectedItems
        guard !items.isEmpty else { return }
        paste(ids: items.map(\.id), plainTextOnly: plainTextOnly)
    }

    @discardableResult
    func paste(item: ClipboardItem, plainTextOnly: Bool) -> Bool {
        paste(ids: [item.id], plainTextOnly: plainTextOnly)
    }

    @discardableResult
    func paste(ids: [UUID], plainTextOnly: Bool) -> Bool {
        guard !ids.isEmpty else { return false }
        if let pasteItemsHandler {
            hidePanel()
            pasteItemsHandler(ids, plainTextOnly)
            return true
        }
        guard ids.count == 1, let id = ids.first, let pasteHandler else {
            presentError(NSError(domain: "PasteReplica", code: 1,
                                 userInfo: [NSLocalizedDescriptionKey: "粘贴服务尚未就绪，请使用“拷贝”后粘贴。 "]))
            return false
        }
        hidePanel()
        pasteHandler(id, plainTextOnly)
        return true
    }

    func showPreview(item: ClipboardItem) {
        if let existing = previewRegistry.f_10008747c(itemIdentity: AnyHashable(item.id)) {
            show(existing)
            return
        }
        if let anchor = previewAnchors[item.id]?.view, anchor.window != nil {
            previewPopover.show(itemIdentity: AnyHashable(item.id), itemIdentifier: item.id.uuidString,
                contentView: makePreviewContent(for: item), relativeTo: anchor)
            return
        }
        let window = OriginalPreviewWindow()
        window.title = item.title.isEmpty ? item.kind.displayName : item.title
        let content = makePreviewContent(for: item)
        if let preview = content as? OriginalItemPreviewView {
            preview.onEditingStateChanged = { [weak self] editing in
                self?.previewRegistry.f_10008727c(isEditing: editing, itemIdentifier: item.id.uuidString)
            }
        }
        window.contentView = content
        window.setContentSize(content.frame.size)
        sharingPolicy.apply(to: window)
        window.center()
        previewRegistry.f_100086c10(window: window, itemIdentity: AnyHashable(item.id),
            itemIdentifier: item.id.uuidString, isEditing: false)
        show(window)
    }

    func registerPreviewAnchor(for itemID: UUID, view: NSView) {
        previewAnchors[itemID] = WeakReplicaPreviewAnchor(view)
    }

    func removePreviewAnchor(for itemID: UUID, view: NSView) {
        if previewAnchors[itemID]?.view === view { previewAnchors.removeValue(forKey: itemID) }
    }

    private func makePreviewContent(for item: ClipboardItem) -> NSView {
        makeOriginalReplicaPreview(state: state, item: item)
    }

    private func makePreviewPopover() -> OriginalPreviewPopover {
        let preferenceStore = store
        let changes = preferenceStore.preferenceChanges
            .filter { $0.old.showDuringScreenSharing != $0.new.showDuringScreenSharing }
            .map { $0.new.showDuringScreenSharing }.eraseToAnyPublisher()
        let popover = OriginalPreviewPopover(registry: previewRegistry,
            isScreenSharingContentVisible: { preferenceStore.preferences.showDuringScreenSharing },
            visibilityChanges: changes)
        popover.makeContentView = { [weak self] _, identifier in
            guard let self, let item = self.store.items.first(where: { $0.id.uuidString == identifier }) else { return nil }
            return makeOriginalReplicaPreview(state: self.state, item: item)
        }
        return popover
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
        sharingPolicy.apply(to: window)
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
        sharingPolicy.apply(to: chooser)
        chooser.title = "导出剪贴板归档"
        chooser.nameFieldStringValue = "PasteReplica-archive.json"
        chooser.allowedContentTypes = [.json]
        if chooser.runModal() == .OK, let url = chooser.url {
            state.perform { try store.exportArchive(to: url) }
        }
    }

    func importArchive() {
        let chooser = NSOpenPanel()
        sharingPolicy.apply(to: chooser)
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
        sharingPolicy.apply(to: alert.window)
        alert.messageText = "操作未完成"
        alert.runModal()
    }

    private func prompt(title: String, message: String, initial: String) -> String? {
        let alert = NSAlert()
        sharingPolicy.apply(to: alert.window)
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
        NSApp.appearance = appearance
        panel.appearance = appearance
        settingsWindow?.appearance = appearance
        stackWindow?.appearance = appearance
        itemWindows.values.forEach { $0.appearance = appearance }
        previewRegistry.windows.forEach { $0.appearance = appearance }
        if panel.isVisible { positionPanel() }
    }

    private func makeWindow<V: View>(title: String, size: NSSize, view: V) -> NSWindow {
        let window = NSWindow(contentRect: .init(origin: .zero, size: size),
                              styleMask: [.titled, .closable, .miniaturizable, .resizable],
                              backing: .buffered, defer: false)
        window.title = title
        window.isReleasedWhenClosed = false
        window.contentView = NSHostingView(rootView: view)
        sharingPolicy.apply(to: window)
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
        if store.preferences.previousPinboardShortcut?.matches(event) == true { state.switchBoard(-1); return true }
        if store.preferences.nextPinboardShortcut?.matches(event) == true { state.switchBoard(1); return true }
        let plainModifiers = NSEvent.ModifierFlags(rawValue: store.preferences.plainTextModifierRawValue)
        let plain = !plainModifiers.isEmpty && modifiers.isSuperset(of: plainModifiers)
        let quickModifiers = NSEvent.ModifierFlags(rawValue: store.preferences.quickPasteModifierRawValue)
        let numericKeys: [UInt16: Int] = [18: 1, 19: 2, 20: 3, 21: 4, 23: 5, 22: 6, 26: 7, 28: 8, 25: 9]
        if !quickModifiers.isEmpty, modifiers.isSuperset(of: quickModifiers),
           let number = numericKeys[event.keyCode], state.visibleItems.indices.contains(number - 1) {
            state.select(state.visibleItems[number - 1])
            pasteSelection(plainTextOnly: plain)
            return true
        }
        if command {
            switch key {
            case "f": handleSearchCommand(); return true
            case "n": shift ? createPinboard() : newTextItem(); return true
            case ",": showSettings(); return true
            case "c" where !isEditing: copySelection(plainTextOnly: shift); return true
            case "a" where !isEditing: shift ? state.deselectAll() : state.selectAll(); return true
            default: break
            }
        }
        switch event.keyCode {
        case 53:
            return OriginalSearchCommands.f_10004867c(selector: NSSelectorFromString("cancelOperation:"),
                onEnter: nil, onCancel: { [self] in cancelSearchOrPanel() })
        case 36, 76:
            return OriginalSearchCommands.f_10004867c(selector: NSSelectorFromString("insertNewline:"),
                onEnter: { [self] in pasteSelection(plainTextOnly: command || plain) }, onCancel: nil)
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

    func cancelSearchOrPanel() {
        if !state.isSearchQueryEmpty {
            state.query = ""
            state.searchFilters = []
            state.searchVisible = true
            state.searchFocus = UUID()
            state.normalizeSelection()
        } else if state.searchVisible || panel.firstResponder is NSTextView {
            state.query = ""
            state.searchFilters = []
            state.searchVisible = false
            panel.makeFirstResponder(nil)
        } else { hidePanel() }
    }
}
