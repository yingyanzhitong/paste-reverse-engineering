import AppKit
import Foundation

@main
struct ShortcutModelHarness {
    static func main() throws {
        var checks = [String]()
        let decoder = JSONDecoder(), encoder = JSONEncoder()
        let defaults = try decoder.decode(AppPreferences.self, from: Data("{}".utf8))
        precondition(defaults.historyShortcut == .historyDefault && defaults.stackShortcut == .stackDefault)
        precondition(defaults.previousPinboardShortcut == .previousPinboardDefault && defaults.nextPinboardShortcut == .nextPinboardDefault)
        precondition(defaults.quickPasteModifierRawValue == NSEvent.ModifierFlags.command.rawValue)
        precondition(defaults.plainTextModifierRawValue == NSEvent.ModifierFlags.shift.rawValue)
        precondition(defaults.showDuringScreenSharing && defaults.ignoreTransientContent)
        checks.append("legacy JSON missing fields receives evidence-backed defaults")

        var preferences = defaults
        preferences.historyShortcut = nil; preferences.stackShortcut = nil
        preferences.previousPinboardShortcut = nil; preferences.nextPinboardShortcut = nil
        let cleared = try encoder.encode(preferences)
        let json = try JSONSerialization.jsonObject(with: cleared) as! [String: Any]
        precondition(json["historyShortcut"] is NSNull && json["stackShortcut"] is NSNull)
        precondition(json["previousPinboardShortcut"] is NSNull && json["nextPinboardShortcut"] is NSNull)
        let reloadedCleared = try decoder.decode(AppPreferences.self, from: cleared)
        precondition(reloadedCleared == preferences)
        checks.append("cleared shortcuts encode explicit null and remain disabled after reload")

        let custom = KeyboardShortcut(keyCode: 0, modifierRawValue: NSEvent.ModifierFlags([.control, .option]).rawValue)
        precondition(custom.isValidGlobal && custom.displayName == "⌃⌥A")
        preferences.historyShortcut = custom
        let directory = FileManager.default.temporaryDirectory.appendingPathComponent(UUID().uuidString)
        try FileManager.default.createDirectory(at: directory, withIntermediateDirectories: false)
        defer { try? FileManager.default.removeItem(at: directory) }
        let file = directory.appendingPathComponent("preferences.json")
        try encoder.encode(preferences).write(to: file, options: .atomic)
        let reloadedCustom = try decoder.decode(AppPreferences.self, from: Data(contentsOf: file))
        precondition(reloadedCustom == preferences)
        preferences = AppPreferences()
        precondition(preferences == defaults)
        checks.append("custom recording persists to isolated disk fixture; reset restores defaults")

        precondition(!KeyboardShortcut(keyCode: 0, modifierRawValue: 0).isValidGlobal)
        precondition(!KeyboardShortcut(keyCode: 0, modifierRawValue: NSEvent.ModifierFlags.shift.rawValue).isValidGlobal)
        precondition(!KeyboardShortcut(keyCode: 55, modifierRawValue: NSEvent.ModifierFlags.command.rawValue).isValidGlobal)
        precondition(!KeyboardShortcut(keyCode: 53, modifierRawValue: NSEvent.ModifierFlags.command.rawValue).isValidGlobal)
        precondition(!KeyboardShortcut(keyCode: 999, modifierRawValue: NSEvent.ModifierFlags.command.rawValue).isValidGlobal)
        precondition(KeyboardShortcut(keyCode: 79, modifierRawValue: 0).isValidGlobal)
        checks.append("recording rejects bare text, shift-only text, modifier keys, Escape and invalid codes; permits function keys")

        let event = NSEvent.keyEvent(with: .keyDown, location: .zero, modifierFlags: [.control, .option, .capsLock], timestamp: 0,
                                    windowNumber: 0, context: nil, characters: "a", charactersIgnoringModifiers: "a", isARepeat: false, keyCode: 0)!
        precondition(custom.matches(event) && !KeyboardShortcut.historyDefault.matches(event))
        precondition(KeyboardShortcut.historyDefault.displayName == "⇧⌘V")
        precondition(KeyboardShortcut.stackDefault.displayName == "⇧⌘C")
        checks.append("event matching ignores Caps Lock, preserves exact modifiers and renders default labels")
        let value: [String: Any] = ["status": "passed", "checks": checks,
                                   "scope": "Isolated preference JSON/disk and synthetic NSEvent objects only; no global registration or clipboard access."]
        print(String(data: try JSONSerialization.data(withJSONObject: value, options: [.sortedKeys, .prettyPrinted]), encoding: .utf8)!)
    }
}
