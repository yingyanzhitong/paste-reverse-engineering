import AppKit
import Combine
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
    private var runningApplicationsObservation: AnyCancellable?
    private var pending: Task<Void, Never>?

    func applicationDidFinishLaunching(_ notification: Notification) {
        // REA 0x100001db0 observes the runningApplications collection via KVO.
        runningApplicationsObservation = NSWorkspace.shared.publisher(for: \.runningApplications)
            .receive(on: RunLoop.main)
            .sink { [weak self] _ in self?.checkRunning() }
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
            var failures: UInt64 = 0
            while !Task.isCancelled {
                // REA 0x10000307c: three seconds before each launch attempt.
                do { try await Task.sleep(nanoseconds: 3_000_000_000) }
                catch { return }
                guard !Task.isCancelled, let self, self.shouldLaunch else { return }
                var url = Bundle.main.bundleURL
                for _ in 0..<4 { url.deleteLastPathComponent() }
                guard Bundle(url: url)?.bundleIdentifier == self.mainID else { return }
                let configuration = NSWorkspace.OpenConfiguration()
                configuration.activates = false
                do {
                    _ = try await NSWorkspace.shared.openApplication(at: url, configuration: configuration)
                    return
                } catch {
                    NSLog("Paste Replica background launch failed: %@", error.localizedDescription)
                    // REA 0x100003514 / 0x100004020: failures * 10 seconds, then recheck.
                    failures += 1
                    do { try await Task.sleep(nanoseconds: failures * 10_000_000_000) }
                    catch { return }
                }
            }
        }
    }

    func applicationWillTerminate(_ notification: Notification) {
        pending?.cancel()
        runningApplicationsObservation?.cancel()
    }
}
