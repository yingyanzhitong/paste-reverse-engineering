import AppKit
import Foundation

@main
enum HelperMain {
    @MainActor static func main() {
        let app = NSApplication.shared
        let delegate = HelperDelegate()
        app.delegate = delegate
        app.setActivationPolicy(.prohibited)
        app.run()
        withExtendedLifetime(delegate) {}
    }
}

@MainActor
final class HelperDelegate: NSObject, NSApplicationDelegate {
    private let defaults = UserDefaults(suiteName: "com.yingyanzhitong.paste-replica.session")!
    private let mainID = "com.yingyanzhitong.paste-replica"
    private var observers: [NSObjectProtocol] = []
    private var pending: Task<Void, Never>?

    func applicationDidFinishLaunching(_ notification: Notification) {
        for name in [NSWorkspace.didTerminateApplicationNotification, NSWorkspace.didLaunchApplicationNotification] {
            observers.append(NSWorkspace.shared.notificationCenter.addObserver(forName: name, object: nil, queue: .main) {
                [weak self] _ in Task { @MainActor in self?.checkRunning() }
            })
        }
        checkRunning()
    }

    private var shouldLaunch: Bool {
        defaults.synchronize()
        return defaults.bool(forKey: "isRunning")
            && NSRunningApplication.runningApplications(withBundleIdentifier: mainID).isEmpty
    }

    private func checkRunning() {
        guard pending == nil, shouldLaunch else { return }
        pending = Task { @MainActor [weak self] in
            defer { self?.pending = nil }
            for delay in [1, 2, 4, 8] {
                try? await Task.sleep(nanoseconds: UInt64(delay) * 1_000_000_000)
                guard !Task.isCancelled, let self, self.shouldLaunch else { return }
                var url = Bundle.main.bundleURL
                for _ in 0..<4 { url.deleteLastPathComponent() }
                guard Bundle(url: url)?.bundleIdentifier == self.mainID else { return }
                let configuration = NSWorkspace.OpenConfiguration()
                configuration.activates = false
                do {
                    _ = try await NSWorkspace.shared.openApplication(at: url, configuration: configuration)
                    return
                } catch { NSLog("Paste Replica background launch failed: %@", error.localizedDescription) }
            }
        }
    }

    func applicationWillTerminate(_ notification: Notification) {
        pending?.cancel()
        observers.forEach { NSWorkspace.shared.notificationCenter.removeObserver($0) }
    }
}
