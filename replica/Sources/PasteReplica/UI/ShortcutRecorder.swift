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
        button.refreshFromBinding()
    }

    static func dismantleNSView(_ nsView: ShortcutRecorderButton, coordinator: ()) { nsView.finish() }
}

@MainActor
final class ShortcutRecorderButton: NSButton {
    var shortcut: PasteReplicaCore.KeyboardShortcut?
    var changed: ((PasteReplicaCore.KeyboardShortcut?) -> Void)?
    var error: ((String) -> Void)?
    var recordingChanged: ((Bool) -> Void)?
    private var recorder: OriginalShortcutRecorder?
    private var hostedControls: NSHostingView<OriginalShortcutControls>?
    private var observations: [NSObjectProtocol] = []
    private var announcedRecording = false
    private var synchronizedBinding: PasteReplicaCore.KeyboardShortcut?
    private var hasSynchronizedBinding = false

    var recording: Bool { recorder?.f_1001f0460().isRecording == true }

    override init(frame: NSRect) { super.init(frame: frame); configure() }
    required init?(coder: NSCoder) { super.init(coder: coder); configure() }
    override var acceptsFirstResponder: Bool { true }
    override var intrinsicContentSize: NSSize { NSSize(width: 120, height: 24) }

    private func configure() {
        isBordered = false
        target = self
        action = #selector(beginRecording)
        toolTip = "点击后按下组合键，Esc 取消，Delete 清除"
    }

    private func model() -> OriginalShortcutRecorder {
        if let recorder { return recorder }
        let recorder = OriginalShortcutRecorder(shortcut: shortcut?.originalValue) { [weak self] value in
            self?.changed?(value.flatMap { PasteReplicaCore.KeyboardShortcut(originalValue: $0) })
        }
        recorder.stateDidChange = { [weak self] in self?.stateChanged() }
        recorder.validationErrorDidChange = { [weak self] in
            guard let self else { return }
            self.error?(self.recorder?.f_1001f04e8()?.localizedDescription ?? "")
        }
        self.recorder = recorder
        return recorder
    }

    func refreshFromBinding() {
        let recorder = model()
        if hasSynchronizedBinding {
            if synchronizedBinding != shortcut { recorder.f_1001ee19c(shortcut?.originalValue) }
        } else {
            recorder.synchronizeShortcut(shortcut?.originalValue)
            hasSynchronizedBinding = true
        }
        synchronizedBinding = shortcut
        render()
    }

    private func render() {
        let recorder = model()
        let assigned: Bool
        if case .assigned = recorder.f_1001f0460() { assigned = true }
        else { assigned = false }
        let controls = OriginalShortcutControls(presentation: recorder.f_1001f02d8(), assigned: assigned,
            begin: { [weak self] in self?.beginRecording() },
            clear: { [weak self] in self?.model().f_1001ef434() })
        if let hostedControls { hostedControls.rootView = controls }
        else {
            let hosted = NSHostingView(rootView: controls)
            hosted.translatesAutoresizingMaskIntoConstraints = false
            addSubview(hosted)
            NSLayoutConstraint.activate([
                hosted.leadingAnchor.constraint(equalTo: leadingAnchor),
                hosted.trailingAnchor.constraint(equalTo: trailingAnchor),
                hosted.topAnchor.constraint(equalTo: topAnchor),
                hosted.bottomAnchor.constraint(equalTo: bottomAnchor)
            ])
            hostedControls = hosted
        }
        title = ""
    }

    private func stateChanged() {
        render()
        let active = recording
        if active != announcedRecording {
            announcedRecording = active
            recordingChanged?(active)
        }
        if !active { removeWindowObservers() }
    }

    @objc private func beginRecording() {
        if !recording {
            window?.makeFirstResponder(self)
            model().f_1001ee478()
        }
        model().f_1001ef2bc()
        if recording {
            for name in [NSWindow.willCloseNotification, NSWindow.didResignKeyNotification] {
                observations.append(NotificationCenter.default.addObserver(forName: name, object: window, queue: .main) { [weak self] _ in
                    Task { @MainActor in self?.finish() }
                })
            }
        }
    }

    private func removeWindowObservers() {
        observations.forEach { NotificationCenter.default.removeObserver($0) }
        observations = []
    }

    func finish() {
        if recording { recorder?.f_1001eff84() }
        else { recorder?.f_1001f1150(newState: nil) }
        removeWindowObservers()
    }

    override func resignFirstResponder() -> Bool { finish(); return super.resignFirstResponder() }
}
