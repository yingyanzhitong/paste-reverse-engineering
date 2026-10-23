import AppKit
import Foundation

public struct KeyboardShortcut: Codable, Equatable, Hashable, Sendable {
    public var keyCode: UInt32
    public var modifierRawValue: UInt

    public init(keyCode: UInt32, modifierRawValue: UInt) {
        self.keyCode = keyCode
        self.modifierRawValue = modifierRawValue
    }

    public static let modifierMask: NSEvent.ModifierFlags = [.command, .shift, .option, .control]
    public static let historyDefault = KeyboardShortcut(keyCode: 9, modifierRawValue: [.command, .shift])
    public static let stackDefault = KeyboardShortcut(keyCode: 8, modifierRawValue: [.command, .shift])
    public static let previousPinboardDefault = KeyboardShortcut(keyCode: 123, modifierRawValue: NSEvent.ModifierFlags.command.rawValue)
    public static let nextPinboardDefault = KeyboardShortcut(keyCode: 124, modifierRawValue: NSEvent.ModifierFlags.command.rawValue)

    private init(keyCode: UInt32, modifierRawValue flags: NSEvent.ModifierFlags) {
        self.init(keyCode: keyCode, modifierRawValue: flags.rawValue)
    }

    public var modifiers: NSEvent.ModifierFlags { NSEvent.ModifierFlags(rawValue: modifierRawValue) }

    public var isValidGlobal: Bool {
        guard keyCode < 128, keyCode != 53,
              ![54, 55, 56, 57, 58, 59, 60, 61, 62, 63].contains(keyCode),
              modifierRawValue == modifiers.intersection(Self.modifierMask).rawValue else { return false }
        return OriginalShortcutFunctions.f_1001ebc2c(keyCode: keyCode, modifierRawValue: modifierRawValue)
    }

    public func matches(_ event: NSEvent) -> Bool {
        OriginalShortcutFunctions.f_1001e7d18(event) == self
    }

    public var displayName: String {
        OriginalShortcutFunctions.f_1001e9774(verbose: false, modifierRawValue: modifierRawValue)
            + OriginalShortcutFunctions.f_1001e7e50(keyCode: keyCode)
    }
}
