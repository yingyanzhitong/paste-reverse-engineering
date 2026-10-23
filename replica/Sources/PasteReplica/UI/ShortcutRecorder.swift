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
        button.setAccessibilityValue(shortcut.map {
            OriginalShortcutFunctions.f_1001e9774(verbose: true, modifierRawValue: $0.modifierRawValue)
                + OriginalShortcutFunctions.f_1001e7e50(keyCode: $0.keyCode)
        })
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
        eventMonitor = NSEvent.addLocalMonitorForEvents(matching: [.keyDown, .flagsChanged]) { [weak self] event in
            guard let self, self.recording, self.window?.isKeyWindow == true else { return event }
            return self.record(event) ? nil : event
        }
        for name in [NSWindow.willCloseNotification, NSWindow.didResignKeyNotification] {
            observations.append(NotificationCenter.default.addObserver(forName: name, object: window, queue: .main) { [weak self] _ in
                Task { @MainActor in self?.finish() }
            })
        }
    }

    /// Return false only for the original Command-W / Command-Q pass-through branch.
    private func record(_ event: NSEvent) -> Bool {
        let value = OriginalShortcutFunctions.f_1001e7d18(event)
        let flags = value.modifiers
        if [51, 117].contains(event.keyCode), value.modifierRawValue == 0 {
            changed?(nil)
            finish()
            title = "录制快捷键"
            return true
        }
        if event.keyCode == 53, value.modifierRawValue == 0 { finish(); return true }
        let keyLabel = OriginalShortcutFunctions.f_1001e7e50(keyCode: value.keyCode)
        if value.modifierRawValue == NSEvent.ModifierFlags.command.rawValue,
           ["w", "q"].contains(keyLabel.lowercased()) {
            finish()
            return false
        }
        if keyLabel.isEmpty {
            title = OriginalShortcutFunctions.f_1001e9774(verbose: false, modifierRawValue: value.modifierRawValue)
            return true
        }
        guard OriginalShortcutFunctions.f_1001ebc2c(keyCode: value.keyCode,
                                                  modifierRawValue: value.modifierRawValue) else {
            NSSound.beep()
            return true
        }
        if let failure = OriginalShortcutValidation.f_1001ebce4(shortcut: value, menu: NSApp.mainMenu) {
            finish()
            error?(failure)
            return true
        }
        changed?(value)
        finish()
        title = value.displayName
        if let warning = OriginalShortcutValidation.optionCompatibilityWarning(
            modifierRawValue: flags.rawValue, version: ProcessInfo.processInfo.operatingSystemVersion) {
            error?(warning)
        }
        return true
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
