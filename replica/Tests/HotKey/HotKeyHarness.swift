import AppKit
import Carbon
import Foundation

// 不发送键盘输入：仅临时注册未占用的 ⇧⌘F13...F20，向本进程投递 Carbon 测试事件。
@main
struct HotKeyHarness {
    @MainActor static func main() throws {
        let app = NSApplication.shared
        app.setActivationPolicy(.prohibited)
        let first = GlobalHotKey(), conflicting = GlobalHotKey(), second = GlobalHotKey()
        defer { first.unregister(); conflicting.unregister(); second.unregister() }
        var firstCount = 0, secondCount = 0, conflictingCount = 0
        first.action = { firstCount += 1 }
        second.action = { secondCount += 1 }
        conflicting.action = { conflictingCount += 1 }
        let candidates = [kVK_F18, kVK_F19, kVK_F20, kVK_F17, kVK_F16, kVK_F15, kVK_F14, kVK_F13].map(UInt32.init)
        guard let firstCode = candidates.first(where: { first.register(keyCode: $0, identifier: 41) == noErr }),
              let secondCode = candidates.first(where: { $0 != firstCode && second.register(keyCode: $0, identifier: 44) == noErr }) else {
            print("{\"status\":\"blocked\",\"reason\":\"No two unused shift-command function-key combinations available\"}")
            exit(77)
        }
        let conflict = conflicting.register(keyCode: firstCode, identifier: 42)
        let reregister = first.register(keyCode: firstCode, identifier: 43)
        func deliver(_ id: UInt32, signature: UInt32 = 0x5052504c) -> OSStatus {
            var event: EventRef?
            let status = CreateEvent(nil, OSType(kEventClassKeyboard), UInt32(kEventHotKeyPressed),
                                     GetCurrentEventTime(), EventAttributes(kEventAttributeUserEvent), &event)
            guard status == noErr, let event else { return status }
            defer { ReleaseEvent(event) }
            var key = EventHotKeyID(signature: signature, id: id)
            let set = SetEventParameter(event, EventParamName(kEventParamDirectObject), EventParamType(typeEventHotKeyID),
                                        MemoryLayout<EventHotKeyID>.size, &key)
            guard set == noErr else { return set }
            return SendEventToEventTarget(event, GetApplicationEventTarget())
        }
        let oldResult = deliver(41), firstResult = deliver(43), secondResult = deliver(44)
        let failedResult = deliver(42), wrongSignatureResult = deliver(43, signature: 0x12345678)
        let passed = conflict != noErr && reregister == noErr && firstCount == 1 && secondCount == 1
            && conflictingCount == 0 && firstResult == noErr && secondResult == noErr
            && oldResult != noErr && failedResult != noErr && wrongSignatureResult != noErr
        let value: [String: Any] = ["status": passed ? "passed" : "failed", "key_codes": [firstCode, secondCode],
                                   "conflict_register": conflict, "reregister": reregister,
                                   "delivery_status": ["old_id": oldResult, "first": firstResult, "second": secondResult,
                                                       "failed_registration": failedResult, "wrong_signature": wrongSignatureResult],
                                   "callbacks": ["first": firstCount, "second": secondCount, "conflicting": conflictingCount],
                                   "scope": "Temporary unused shift-command F13...F20 registrations; synthetic Carbon events to this process only. No keyboard input, default shortcut changes, or pasteboard access."]
        print(String(data: try JSONSerialization.data(withJSONObject: value, options: [.sortedKeys, .prettyPrinted]), encoding: .utf8)!)
        if !passed { exit(1) }
    }
}
