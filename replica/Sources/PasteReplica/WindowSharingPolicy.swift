import AppKit
import Combine
import PasteReplicaCore

/// Mirrors the local NSWindow.sharingType policy used by the reference application.
@MainActor
final class WindowSharingPolicy {
    private let store: ClipboardStore
    private var preferenceObservation: AnyCancellable?
    private var windowObservations: [NSObjectProtocol] = []

    init(store: ClipboardStore) {
        self.store = store
        preferenceObservation = store.$preferences.map(\.showDuringScreenSharing).removeDuplicates()
            .sink { [weak self] _ in
                DispatchQueue.main.async { self?.applyToAllWindows() }
            }
        observeKeyWindow()
        for name in [NSWindow.didExposeNotification, NSWindow.didUpdateNotification] {
            windowObservations.append(NotificationCenter.default.addObserver(forName: name, object: nil, queue: .main) {
                [weak self] notification in
                guard let window = notification.object as? NSWindow else { return }
                Task { @MainActor in self?.apply(to: window) }
            })
        }
        applyToAllWindows()
    }

    func apply(to window: NSWindow) {
        set(window, visible: store.preferences.showDuringScreenSharing)
    }

    /// Paste 0x10004f7d4: observe key-window notifications on the main operation queue.
    private func observeKeyWindow() {
        windowObservations.append(NotificationCenter.default.addObserver(
            forName: NSWindow.didBecomeKeyNotification, object: nil, queue: .main
        ) { [weak self] _ in
            MainActor.assumeIsolated { self?.applyToKeyWindow() }
        })
    }

    /// Paste 0x10004fd68: read NSApp.keyWindow; a missing key window is a no-op.
    private func applyToKeyWindow() {
        guard let window = NSApp.keyWindow else { return }
        set(window, visible: store.preferences.showDuringScreenSharing)
    }

    /// Paste 0x10004fa08: apply the current sharing policy to every application window.
    private func applyToAllWindows() {
        for window in NSApp.windows { set(window, visible: store.preferences.showDuringScreenSharing) }
    }

    private func set(_ window: NSWindow, visible: Bool) {
        window.sharingType = visible ? .readOnly : .none
    }

    deinit {
        for observer in windowObservations { NotificationCenter.default.removeObserver(observer) }
    }
}
