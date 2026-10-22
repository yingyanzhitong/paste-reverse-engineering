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
        let functionKeys: Set<UInt32> = [122, 120, 99, 118, 96, 97, 98, 100, 101, 109, 103, 111, 105, 107, 113, 106, 64, 79, 80, 90]
        return !modifiers.intersection([.command, .control, .option]).isEmpty || functionKeys.contains(keyCode)
    }

    public func matches(_ event: NSEvent) -> Bool {
        UInt32(event.keyCode) == keyCode
            && event.modifierFlags.intersection(Self.modifierMask).rawValue == modifierRawValue
    }

    public var displayName: String {
        let labels: [UInt32: String] = [
            0:"A",1:"S",2:"D",3:"F",4:"H",5:"G",6:"Z",7:"X",8:"C",9:"V",11:"B",
            12:"Q",13:"W",14:"E",15:"R",16:"Y",17:"T",18:"1",19:"2",20:"3",21:"4",22:"6",23:"5",
            24:"=",25:"9",26:"7",27:"−",28:"8",29:"0",30:"]",31:"O",32:"U",33:"[",34:"I",35:"P",
            36:"↩",37:"L",38:"J",39:"'",40:"K",41:";",42:"\\",43:",",44:"/",45:"N",46:"M",47:".",
            48:"⇥",49:"Space",50:"`",51:"⌫",65:".",67:"*",69:"+",71:"Clear",75:"/",76:"⌤",78:"−",
            81:"=",82:"0",83:"1",84:"2",85:"3",86:"4",87:"5",88:"6",89:"7",91:"8",92:"9",
            122:"F1",120:"F2",99:"F3",118:"F4",96:"F5",97:"F6",98:"F7",100:"F8",101:"F9",109:"F10",
            103:"F11",111:"F12",105:"F13",107:"F14",113:"F15",106:"F16",64:"F17",79:"F18",80:"F19",90:"F20",
            115:"Home",116:"Page Up",117:"⌦",119:"End",121:"Page Down",123:"←",124:"→",125:"↓",126:"↑"
        ]
        var value = ""
        if modifiers.contains(.control) { value += "⌃" }
        if modifiers.contains(.option) { value += "⌥" }
        if modifiers.contains(.shift) { value += "⇧" }
        if modifiers.contains(.command) { value += "⌘" }
        return value + (labels[keyCode] ?? "Key \(keyCode)")
    }
}
