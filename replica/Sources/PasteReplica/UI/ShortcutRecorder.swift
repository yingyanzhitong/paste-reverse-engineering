import AppKit
import SwiftUI
import PasteReplicaCore

@MainActor
struct ReplicaShortcutRecorder: NSViewRepresentable {
    @Binding var shortcut: PasteReplicaCore.KeyboardShortcut?
    let label: String
    let error: (String) -> Void
    let recordingChanged: (Bool) -> Void

    func makeNSView(context: Context) -> ShortcutRecorderButton {
        let button = ShortcutRecorderButton(frame: .zero)
        configure(button)
        return button
    }

    func updateNSView(_ nsView: ShortcutRecorderButton, context: Context) { configure(nsView) }

    private func configure(_ button: ShortcutRecorderButton) {
        button.shortcut = shortcut
        button.changed = { shortcut = $0 }
        button.error = error
        button.recordingChanged = recordingChanged
        button.setAccessibilityLabel("\(label)快捷键")
        if !button.recording { button.title = shortcut?.displayName ?? "录制快捷键" }
    }

    static func dismantleNSView(_ nsView: ShortcutRecorderButton, coordinator: ()) { nsView.finish() }
}

@MainActor
final class ShortcutRecorderButton: NSButton {
    var shortcut: PasteReplicaCore.KeyboardShortcut?
    var changed: ((PasteReplicaCore.KeyboardShortcut?) -> Void)?
    var error: ((String) -> Void)?
    var recordingChanged: ((Bool) -> Void)?
    private(set) var recording = false
    private var eventMonitor: Any?
    private var observations: [NSObjectProtocol] = []

    override init(frame: NSRect) { super.init(frame: frame); configure() }
    required init?(coder: NSCoder) { super.init(coder: coder); configure() }
    override var acceptsFirstResponder: Bool { true }

    private func configure() {
        bezelStyle = .rounded
        font = .monospacedSystemFont(ofSize: 12, weight: .regular)
        target = self
        action = #selector(beginRecording)
        toolTip = "点击后按下组合键，Esc 取消，Delete 清除"
    }

    @objc private func beginRecording() {
        if recording { finish(); return }
        window?.makeFirstResponder(self)
        recording = true
        title = "按下快捷键…"
        error?("")
        recordingChanged?(true)
        eventMonitor = NSEvent.addLocalMonitorForEvents(matching: .keyDown) { [weak self] event in
            guard let self, self.recording, self.window?.isKeyWindow == true else { return event }
            self.record(event)
            return nil
        }
        for name in [NSWindow.willCloseNotification, NSWindow.didResignKeyNotification] {
            observations.append(NotificationCenter.default.addObserver(forName: name, object: window, queue: .main) { [weak self] _ in
                Task { @MainActor in self?.finish() }
            })
        }
    }

    private func record(_ event: NSEvent) {
        if event.keyCode == 53 { finish(); return }
        if [51, 117].contains(event.keyCode), event.modifierFlags.intersection([.command, .option, .control, .shift]).isEmpty {
            finish()
            changed?(nil)
            title = "录制快捷键"
            return
        }
        let flags = event.modifierFlags.intersection([.command, .option, .control, .shift])
        let value = PasteReplicaCore.KeyboardShortcut(keyCode: UInt32(event.keyCode), modifierRawValue: flags.rawValue)
        guard value.isValidGlobal else {
            error?("请使用包含 ⌘、⌥ 或 ⌃ 的组合键。")
            return
        }
        if let menuTitle = menuConflict(NSApp.mainMenu, event: event, flags: flags) {
            error?("由于菜单项“\(menuTitle)”已使用该快捷键，因此无法使用。")
            return
        }
        finish()
        changed?(value)
        title = value.displayName
    }

    private func menuConflict(_ menu: NSMenu?, event: NSEvent, flags: NSEvent.ModifierFlags) -> String? {
        for item in menu?.items ?? [] {
            if let found = menuConflict(item.submenu, event: event, flags: flags) { return found }
            if !item.keyEquivalent.isEmpty,
               item.keyEquivalent.lowercased() == event.charactersIgnoringModifiers?.lowercased(),
               item.keyEquivalentModifierMask.intersection([.command, .option, .control, .shift]) == flags { return item.title }
        }
        return nil
    }

    func finish() {
        guard recording else { return }
        recording = false
        if let eventMonitor { NSEvent.removeMonitor(eventMonitor); self.eventMonitor = nil }
        observations.forEach { NotificationCenter.default.removeObserver($0) }
        observations = []
        title = shortcut?.displayName ?? "录制快捷键"
        recordingChanged?(false)
    }

    override func resignFirstResponder() -> Bool { finish(); return super.resignFirstResponder() }
}
