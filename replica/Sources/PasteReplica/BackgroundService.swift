import Foundation
import ServiceManagement

enum BackgroundService {
    static let identifier = "com.yingyanzhitong.paste-replica.helper"
    static let sessionDefaults = UserDefaults(suiteName: "com.yingyanzhitong.paste-replica.session")!
    static var isEnabled: Bool { SMAppService.loginItem(identifier: identifier).status == .enabled }

    static func setEnabled(_ enabled: Bool) throws {
        let service = SMAppService.loginItem(identifier: identifier)
        if enabled { try service.register() }
        else { try service.unregister() }
    }

    static func markRunning(_ running: Bool) {
        sessionDefaults.set(running, forKey: "isRunning")
        sessionDefaults.synchronize()
    }
}
