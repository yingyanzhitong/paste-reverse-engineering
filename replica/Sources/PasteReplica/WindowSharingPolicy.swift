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
            .sink { [weak self] visible in
                DispatchQueue.main.async { self?.applyToAllWindows(visible: visible) }
            }
        for name in [NSWindow.didBecomeKeyNotification, NSWindow.didExposeNotification, NSWindow.didUpdateNotification] {
            windowObservations.append(NotificationCenter.default.addObserver(forName: name, object: nil, queue: .main) {
                [weak self] notification in
                guard let window = notification.object as? NSWindow else { return }
                Task { @MainActor in self?.apply(to: window) }
            })
        }
        applyToAllWindows(visible: store.preferences.showDuringScreenSharing)
    }

    func apply(to window: NSWindow) {
        set(window, visible: store.preferences.showDuringScreenSharing)
    }

    private func applyToAllWindows(visible: Bool) {
        for window in NSApp.windows { set(window, visible: visible) }
    }

    private func set(_ window: NSWindow, visible: Bool) {
        let policy: NSWindow.SharingType = visible ? .readOnly : .none
        if window.sharingType != policy { window.sharingType = policy }
    }

    deinit {
        for observer in windowObservations { NotificationCenter.default.removeObserver(observer) }
    }
}
