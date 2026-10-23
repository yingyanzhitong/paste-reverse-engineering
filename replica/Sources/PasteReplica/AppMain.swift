import AppKit
import ApplicationServices
import Combine
import PasteReplicaCore

@main
enum PasteReplicaMain {
    @MainActor static func main() {
        let application = NSApplication.shared
        let delegate = ReplicaAppDelegate()
        application.delegate = delegate
        application.setActivationPolicy(.accessory)
        application.run()
        withExtendedLifetime(delegate) {}
    }
}

@MainActor
final class ReplicaAppDelegate: NSObject, NSApplicationDelegate, NSMenuItemValidation {
    private var store: ClipboardStore!
    private var ui: ReplicaUIController!
    private var monitor: ClipboardMonitor?
    private var diagnostics: OriginalDiagnosticsManager?
    private var diagnosticsObservation: AnyCancellable?
    private let hotKey = GlobalHotKey()
    private let stackHotKey = GlobalHotKey()
    private let stackPasteHotKey = GlobalHotKey()
    private var stackPasteRegistered = false
    private var statusItem: NSStatusItem!
    private var targetApplication: NSRunningApplication?
    private var activationObserver: NSObjectProtocol?
    private var refreshTimer: Timer?
    private var hotKeyStatus: OSStatus = noErr
    private var stackHotKeyStatus: OSStatus = noErr
    private var hotKeyObservation: AnyCancellable?
    private var lastHotKeyConfiguration: [KeyboardShortcut?]?
    private var isRecordingHotKey = false
    private var pasteGeneration = UUID()
    private let arguments = ProcessInfo.processInfo.arguments
    private var pasteboard: NSPasteboard = .general

    private func argument(_ name: String) -> String? {
        guard let index = arguments.firstIndex(of: name), index + 1 < arguments.count else { return nil }
        return arguments[index + 1]
    }

    func applicationDidFinishLaunching(_ notification: Notification) {
        do {
            for flag in ["--data-dir", "--pasteboard-name"] where arguments.contains(flag) {
                guard let value = argument(flag), !value.isEmpty, !value.hasPrefix("--") else {
                    throw NSError(domain: "PasteReplicaArguments", code: 1,
                                  userInfo: [NSLocalizedDescriptionKey: "\(flag) 必须提供有效的值。"])
                }
            }
            if arguments.contains("--fixture"), argument("--data-dir") == nil {
                throw NSError(domain: "PasteReplicaArguments", code: 2,
                              userInfo: [NSLocalizedDescriptionKey: "--fixture 必须搭配独立的 --data-dir。"])
            }
            if let name = argument("--pasteboard-name") {
                guard name != "general", name != NSPasteboard.Name.general.rawValue else {
                    throw NSError(domain: "PasteReplicaArguments", code: 3,
                                  userInfo: [NSLocalizedDescriptionKey: "--pasteboard-name 只支持具名私有剪贴板。"])
                }
                pasteboard = NSPasteboard(name: .init(name))
            } else if arguments.contains("--fixture") {
                pasteboard = NSPasteboard(name: .init("paste-replica-fixture-\(UUID().uuidString)"))
            }
            let directory = argument("--data-dir").map { URL(fileURLWithPath: $0, isDirectory: true) }
                ?? ClipboardStore.defaultDirectoryURL
            store = try ClipboardStore(directoryURL: directory)
            diagnostics = OriginalDiagnosticsManager.makeLocal(
                logDirectory: directory.appendingPathComponent("Diagnostics", isDirectory: true)
            ) { [weak self] enabled in
                guard let self, self.store.preferences.isDiagnosticsEnabled != enabled else { return }
                self.store.preferences.isDiagnosticsEnabled = enabled
                do { try self.store.save() }
                catch { self.ui?.presentError(error) }
            }
            diagnostics?.f_1002fe72c(store.preferences.isDiagnosticsEnabled)
            diagnosticsObservation = store.$preferences.map(\.isDiagnosticsEnabled).removeDuplicates().sink { [weak self] _ in
                // @Published emits before storage changes; resolve the committed preference next turn.
                DispatchQueue.main.async {
                    guard let self else { return }
                    self.diagnostics?.f_1002fe72c(self.store.preferences.isDiagnosticsEnabled)
                }
            }
            try store.save()
            if arguments.contains("--fixture"), store.items.isEmpty { try seedFixture() }
            ui = ReplicaUIController(store: store)
            ui.pasteboard = pasteboard
            ui.pasteHandler = { [weak self] id, plain in self?.paste(id: id, plain: plain) }
            ui.pasteItemsHandler = { [weak self] ids, plain in self?.paste(ids: ids, plain: plain) }
            ui.hotKeyConfigurationChanged = { [weak self] in self?.configureGlobalHotKeys() }
            ui.stackDidChange = { [weak self] in self?.configureStackPasteShortcut() }
            ui.hotKeyRecordingChanged = { [weak self] recording in
                guard let self else { return }
                self.isRecordingHotKey = recording
                if recording { self.hotKey.unregister(); self.stackHotKey.unregister(); self.updateStatus() }
                else { self.configureGlobalHotKeys(force: true) }
                self.configureStackPasteShortcut()
            }
            setupMenus()
            targetApplication = NSWorkspace.shared.frontmostApplication
            activationObserver = NSWorkspace.shared.notificationCenter.addObserver(
                forName: NSWorkspace.didActivateApplicationNotification, object: nil, queue: .main
            ) { [weak self] notification in
                guard let app = notification.userInfo?[NSWorkspace.applicationUserInfoKey] as? NSRunningApplication,
                      app.processIdentifier != ProcessInfo.processInfo.processIdentifier else { return }
                Task { @MainActor in self?.targetApplication = app }
            }
            if !arguments.contains("--no-monitor") {
                monitor = ClipboardMonitor(store: store, pasteboard: pasteboard)
                monitor?.onCapture = { [weak self] id in self?.ui.captureIntoStack(id: id) }
                monitor?.start()
            }
            hotKey.action = { [weak self] in self?.togglePanel(nil) }
            stackHotKey.action = { [weak self] in
                guard let self else { return }
                if NSApp.isActive, self.ui.panel.isKeyWindow, self.store.preferences.stackShortcut == .stackDefault {
                    self.ui.copySelection(plainTextOnly: true)
                } else { self.ui.showStack() }
            }
            hotKeyObservation = store.$preferences.sink { [weak self] _ in
                // @Published 在赋值前通知，下一轮读取完整的新偏好。
                DispatchQueue.main.async { self?.configureGlobalHotKeys() }
            }
            stackPasteHotKey.action = { [weak self] in
                guard let self else { return }
                if NSApp.isActive {
                    NSApp.sendAction(#selector(NSText.paste(_:)), to: nil, from: nil)
                    return
                }
                guard let first = self.ui.state.stackItems.first else { return }
                self.targetApplication = NSWorkspace.shared.frontmostApplication
                if self.paste(ids: [first.id], plain: false, forceDirect: true) { self.ui.consumeStackHead() }
            }
            configureGlobalHotKeys(force: true)
            refreshTimer = Timer.scheduledTimer(withTimeInterval: 1, repeats: true) { [weak self] _ in
                Task { @MainActor in
                    guard let self else { return }
                    do { try self.store.reload() }
                    catch { self.statusItem.button?.toolTip = "无法刷新历史：\(error.localizedDescription)" }
                    self.configureStackPasteShortcut()
                }
            }
            updateStatus()
            if argument("--data-dir") == nil { BackgroundService.markRunning(true) }
            if arguments.contains("--show-panel") { ui.showPanel() }
            if arguments.contains("--show-settings") { ui.showSettings() }
        } catch {
            NSAlert(error: error).runModal()
            NSApp.terminate(nil)
        }
    }

    private func menuItem(_ title: String, _ action: Selector, key: String = "",
                          modifiers: NSEvent.ModifierFlags = [.command]) -> NSMenuItem {
        let item = NSMenuItem(title: title, action: action, keyEquivalent: key)
        item.target = self
        item.keyEquivalentModifierMask = modifiers
        return item
    }

    func applicationShouldHandleReopen(_ sender: NSApplication, hasVisibleWindows flag: Bool) -> Bool {
        ui?.showPanel()
        return true
    }

    private func setupMenus() {
        statusItem = NSStatusBar.system.statusItem(withLength: NSStatusItem.squareLength)
        statusItem.button?.image = NSImage(systemSymbolName: "clipboard", accessibilityDescription: "Paste Replica")
        statusItem.button?.target = self
        statusItem.button?.action = #selector(statusClicked(_:))
        statusItem.button?.sendAction(on: [.leftMouseUp, .rightMouseUp])
        let main = NSMenu()
        let appMenu = NSMenu(title: "Paste Replica")
        appMenu.addItem(menuItem("关于 Paste Replica", #selector(about(_:))))
        appMenu.addItem(menuItem("设置…", #selector(settings(_:)), key: ","))
        appMenu.addItem(menuItem(diagnosticsMenuTitle, #selector(toggleDiagnostics(_:))))
        appMenu.addItem(.separator())
        appMenu.addItem(menuItem("退出 Paste Replica", #selector(quit(_:)), key: "q"))
        let app = NSMenuItem(); app.submenu = appMenu; main.addItem(app)
        let file = NSMenu(title: "文件")
        file.addItem(menuItem("新建文本…", #selector(newText(_:)), key: "n"))
        file.addItem(menuItem("新建 Pinboard…", #selector(newBoard(_:)), key: "n", modifiers: [.command, .shift]))
        file.addItem(.separator())
        file.addItem(menuItem("导入…", #selector(importArchive(_:))))
        file.addItem(menuItem("导出…", #selector(exportArchive(_:))))
        let fileItem = NSMenuItem(title: "文件", action: nil, keyEquivalent: ""); fileItem.submenu = file; main.addItem(fileItem)
        let edit = NSMenu(title: "编辑")
        for (title, selector, key) in [("撤销", "undo:", "z"), ("剪切", "cut:", "x"),
                                        ("拷贝", "copy:", "c"), ("粘贴", "paste:", "v"), ("全选", "selectAll:", "a")] {
            edit.addItem(NSMenuItem(title: title, action: Selector(selector), keyEquivalent: key))
        }
        let editItem = NSMenuItem(title: "编辑", action: nil, keyEquivalent: ""); editItem.submenu = edit; main.addItem(editItem)
        let view = NSMenu(title: "显示")
        view.addItem(menuItem("剪贴板历史", #selector(togglePanel(_:))))
        view.addItem(menuItem("搜索", #selector(search(_:)), key: "f"))
        view.addItem(menuItem("Paste Stack", #selector(stack(_:))))
        let viewItem = NSMenuItem(title: "显示", action: nil, keyEquivalent: ""); viewItem.submenu = view; main.addItem(viewItem)
        NSApp.mainMenu = main
    }

    private func updateStatus() {
        if arguments.contains("--no-global-hotkey") {
            ui.hotKeyStatusMessage = "本次运行已停用全局快捷键。"
        } else if isRecordingHotKey {
            ui.hotKeyStatusMessage = "正在录制快捷键，全局快捷键暂时停用。"
        } else {
            func message(_ title: String, _ shortcut: KeyboardShortcut?, _ status: OSStatus) -> String {
                guard let shortcut else { return "\(title)：未设置" }
                return status == noErr ? "\(title)：\(shortcut.displayName)" : "\(title)：\(shortcut.displayName) 无法注册（可能已被占用，错误 \(status)）"
            }
            ui.hotKeyStatusMessage = [message("历史", store.preferences.historyShortcut, hotKeyStatus),
                                      message("Paste Stack", store.preferences.stackShortcut, stackHotKeyStatus)].joined(separator: "；")
        }
        statusItem.button?.toolTip = "Paste Replica · \(ui.hotKeyStatusMessage)"
    }

    private func configureGlobalHotKeys(force: Bool = false) {
        guard !isRecordingHotKey else { updateStatus(); return }
        let configuration = [store.preferences.historyShortcut, store.preferences.stackShortcut]
        guard force || configuration != lastHotKeyConfiguration else { return }
        lastHotKeyConfiguration = configuration
        hotKey.unregister(); stackHotKey.unregister()
        func register(_ shortcut: KeyboardShortcut?, with hotKey: GlobalHotKey, identifier: UInt32) -> OSStatus {
            guard let shortcut else { return noErr }
            guard shortcut.isValidGlobal else { return OSStatus(-50) }
            return hotKey.register(keyCode: shortcut.keyCode, modifiers: shortcut.modifiers, identifier: identifier)
        }
        if !arguments.contains("--no-global-hotkey") {
            hotKeyStatus = register(configuration[0], with: hotKey, identifier: 1)
            stackHotKeyStatus = register(configuration[1], with: stackHotKey, identifier: 2)
        } else { hotKeyStatus = noErr; stackHotKeyStatus = noErr }
        updateStatus()
    }

    private func configureStackPasteShortcut() {
        let enabled = ui.isStackVisible && !ui.state.stackItems.isEmpty && !isRecordingHotKey
            && !arguments.contains("--no-global-hotkey") && pasteboard.name == NSPasteboard.general.name
            && AXIsProcessTrusted()
        guard enabled != stackPasteRegistered else { return }
        stackPasteHotKey.unregister()
        stackPasteRegistered = false
        if enabled {
            stackPasteRegistered = stackPasteHotKey.register(keyCode: 9, modifiers: .command, identifier: 3) == noErr
            if !stackPasteRegistered { ui.hotKeyStatusMessage = "Paste Stack 的 ⌘V 无法注册，请使用项目菜单粘贴。" }
        }
    }

    @objc private func statusClicked(_ sender: Any?) {
        if NSApp.currentEvent?.type == .rightMouseUp {
            let menu = NSMenu()
            menu.addItem(menuItem("打开剪贴板", #selector(togglePanel(_:))))
            menu.addItem(menuItem("新建文本…", #selector(newText(_:))))
            menu.addItem(menuItem("设置…", #selector(settings(_:))))
            menu.addItem(menuItem(diagnosticsMenuTitle, #selector(toggleDiagnostics(_:))))
            menu.addItem(menuItem(store.preferences.isMonitoringPaused ? "继续采集" : "暂停采集", #selector(pause(_:))))
            if hotKeyStatus != noErr {
                let notice = NSMenuItem(title: "历史快捷键无法注册", action: nil, keyEquivalent: "")
                menu.addItem(notice)
            }
            if stackHotKeyStatus != noErr {
                menu.addItem(NSMenuItem(title: "Paste Stack 快捷键无法注册", action: nil, keyEquivalent: ""))
            }
            menu.addItem(.separator())
            menu.addItem(menuItem("退出", #selector(quit(_:))))
            statusItem.menu = menu
            statusItem.button?.performClick(nil)
            statusItem.menu = nil
        } else { togglePanel(sender) }
    }

    private var diagnosticsMenuTitle: String {
        String(localized: diagnostics?.enabled == true
            ? OriginalPreviewLocalization.f_1001be088() : OriginalPreviewLocalization.f_1001bdd88())
    }

    func validateMenuItem(_ menuItem: NSMenuItem) -> Bool {
        if menuItem.action == #selector(toggleDiagnostics(_:)) {
            menuItem.title = diagnosticsMenuTitle
            return diagnostics != nil
        }
        return true
    }

    @objc private func toggleDiagnostics(_ sender: Any?) { f_10004e064() }

    private func f_10004e064() {
        guard let diagnostics else { return }
        let wasEnabled = diagnostics.enabled
        let alert = NSAlert()
        alert.messageText = String(localized: wasEnabled
            ? OriginalPreviewLocalization.f_1001be088() : OriginalPreviewLocalization.f_1001bdd88())
        alert.informativeText = String(localized: wasEnabled
            ? OriginalPreviewLocalization.f_1001bdf08() : OriginalPreviewLocalization.f_1001bdc08())
        alert.addButton(withTitle: String(localized: wasEnabled
            ? OriginalPreviewLocalization.f_1001bda88() : OriginalPreviewLocalization.f_1001c3188()))
        alert.addButton(withTitle: String(localized: OriginalPreviewLocalization.f_1001c0788()))
        NSApp.activate(ignoringOtherApps: true)
        guard alert.runModal() == .alertFirstButtonReturn else { return }
        if wasEnabled {
            diagnostics.f_1002fe72c(false)
            do { _ = try diagnostics.f_1002fef28(store: store, pasteboard: pasteboard) }
            catch { ui.presentError(error) }
        } else {
            diagnostics.f_1002fe72c(true)
            OriginalDiagnosticsAppActions.f_10004e8ec()
        }
    }

    @objc private func togglePanel(_ sender: Any?) {
        if !ui.panel.isVisible {
            pasteGeneration = UUID()
            let app = NSWorkspace.shared.frontmostApplication
            if app?.processIdentifier != ProcessInfo.processInfo.processIdentifier { targetApplication = app }
        }
        ui.togglePanel()
    }
    @objc private func settings(_ sender: Any?) { ui.showSettings() }
    @objc private func newText(_ sender: Any?) { ui.newTextItem() }
    @objc private func newBoard(_ sender: Any?) { ui.createPinboard() }
    @objc private func search(_ sender: Any?) { ui.showPanel(); ui.focusSearch() }
    @objc private func stack(_ sender: Any?) { ui.showStack() }
    @objc private func importArchive(_ sender: Any?) { ui.importArchive() }
    @objc private func exportArchive(_ sender: Any?) { ui.exportArchive() }
    @objc private func quit(_ sender: Any?) { NSApp.terminate(nil) }
    @objc private func about(_ sender: Any?) {
        NSApp.orderFrontStandardAboutPanel(options: [.applicationName: "Paste Replica",
                                                     .applicationVersion: Bundle.main.object(forInfoDictionaryKey: "CFBundleShortVersionString") as? String ?? "开发版本",
                                                     .credits: NSAttributedString(string: "原生剪贴板历史与 Pinboard 工具")])
    }
    @objc private func pause(_ sender: Any?) {
        store.preferences.isMonitoringPaused.toggle()
        store.preferences.pauseUntil = nil
        do { try store.save() } catch { ui.presentError(error) }
    }

    private func paste(id: UUID, plain: Bool) {
        _ = paste(ids: [id], plain: plain)
    }

    @discardableResult
    private func paste(ids: [UUID], plain: Bool, forceDirect: Bool = false) -> Bool {
        let generation = UUID()
        pasteGeneration = generation
        do { try store.writeToPasteboard(ids: ids, pasteboard: pasteboard,
                                        plainTextOnly: plain || store.preferences.alwaysPastePlainText) }
        catch { ui.presentError(error); return false }
        // Named pasteboards support isolated acceptance runs and never generate system keystrokes.
        guard pasteboard.name == NSPasteboard.general.name else { return true }
        guard let target = targetApplication, !target.isTerminated,
              target.processIdentifier != ProcessInfo.processInfo.processIdentifier else { return false }
        guard forceDirect || store.preferences.pasteToActiveApp else { target.activate(options: []); return true }
        guard AXIsProcessTrusted() else {
            let alert = NSAlert()
            alert.messageText = "已拷贝到剪贴板"
            alert.informativeText = "直接粘贴需要辅助功能权限。你可以按 ⌘V 粘贴，或在系统设置中允许 Paste Replica 控制电脑。"
            alert.addButton(withTitle: "好")
            alert.addButton(withTitle: "打开辅助功能设置")
            if alert.runModal() == .alertSecondButtonReturn,
               let url = URL(string: "x-apple.systempreferences:com.apple.preference.security?Privacy_Accessibility") {
                NSWorkspace.shared.open(url)
            } else { target.activate(options: []) }
            return false
        }
        let changeCount = pasteboard.changeCount
        target.activate(options: [])
        let deadline = Date().addingTimeInterval(1)
        waitForTarget(target, deadline: deadline, generation: generation, changeCount: changeCount)
        return true
    }

    private func waitForTarget(_ target: NSRunningApplication, deadline: Date, generation: UUID, changeCount: Int) {
        guard generation == pasteGeneration, !target.isTerminated, pasteboard.changeCount == changeCount else { return }
        if NSWorkspace.shared.frontmostApplication?.processIdentifier == target.processIdentifier {
            guard let source = CGEventSource(stateID: .combinedSessionState),
                  let down = CGEvent(keyboardEventSource: source, virtualKey: 9, keyDown: true),
                  let up = CGEvent(keyboardEventSource: source, virtualKey: 9, keyDown: false) else { return }
            down.flags = .maskCommand; up.flags = .maskCommand
            down.postToPid(target.processIdentifier); up.postToPid(target.processIdentifier)
        } else if Date() < deadline {
            DispatchQueue.main.asyncAfter(deadline: .now() + 0.05) { [weak self] in
                self?.waitForTarget(target, deadline: deadline, generation: generation, changeCount: changeCount)
            }
        }
    }

    private func seedFixture() throws {
        let board = try store.createPinboard(name: "实用链接", colorHex: "5575D9")
        _ = try store.add(ClipboardItem(title: "欢迎使用 Paste Replica", plainText: "拷贝内容，随时找回。\n搜索、预览、编辑，整理到 Pinboard。", sourceName: "文本编辑", sourceBundleID: "com.apple.TextEdit"))
        _ = try store.add(ClipboardItem(title: "REA", kind: .link, plainText: "https://github.com/morluto/rea", sourceName: "Safari", sourceBundleID: "com.apple.Safari", pinboardIDs: [board.id]))
        _ = try store.add(ClipboardItem(title: "品牌颜色", kind: .color, plainText: "#5575D9", sourceName: "设计工具"))
        _ = try store.add(ClipboardItem(title: "会议记录", plainText: "今天的计划\n1. 整理灵感\n2. 完成设计\n3. 分享成果", sourceName: "备忘录", sourceBundleID: "com.apple.Notes"))
    }

    func applicationShouldTerminate(_ sender: NSApplication) -> NSApplication.TerminateReply {
        guard store != nil, ui != nil else { return .terminateNow }
        do { try store?.save(); return .terminateNow }
        catch { ui?.presentError(error); return .terminateCancel }
    }

    func applicationWillTerminate(_ notification: Notification) {
        if argument("--data-dir") == nil { BackgroundService.markRunning(false) }
        pasteGeneration = UUID()
        hotKeyObservation?.cancel()
        diagnosticsObservation?.cancel()
        monitor?.stop(); hotKey.unregister(); stackHotKey.unregister(); stackPasteHotKey.unregister(); refreshTimer?.invalidate()
        if let activationObserver { NSWorkspace.shared.notificationCenter.removeObserver(activationObserver) }
    }
}
