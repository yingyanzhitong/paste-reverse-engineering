import AppKit
import Foundation
import PasteReplicaCore

@main
struct UIInteractionHarness {
    @MainActor static func main() throws {
        _ = NSApplication.shared
        let directory = FileManager.default.temporaryDirectory.appendingPathComponent(UUID().uuidString)
        defer { try? FileManager.default.removeItem(at: directory) }
        let board = NSPasteboard(name: .init("PasteReplicaUIHarness-\(UUID().uuidString)"))
        defer { board.releaseGlobally() }
        let store = try ClipboardStore(directoryURL: directory)
        let first = try store.add(ClipboardItem(plainText: "FIRST fixture"))
        let second = try store.add(ClipboardItem(plainText: "SECOND fixture"))
        let pin = try store.createPinboard(name: "fixture", colorHex: "#00AAFF")
        try store.assign(ids: [first], to: pin.id)
        let ui = ReplicaUIController(store: store)
        ui.pasteboard = board
        let state = ui.state
        var delivered: [([UUID], Bool)] = []
        ui.pasteItemsHandler = { delivered.append(($0, $1)) }
        func key(_ code: UInt16, _ chars: String, _ modifiers: NSEvent.ModifierFlags) {
            let event = NSEvent.keyEvent(with: .keyDown, location: .zero, modifierFlags: modifiers,
                                        timestamp: 0, windowNumber: ui.panel.windowNumber,
                                        context: nil, characters: chars,
                                        charactersIgnoringModifiers: chars, isARepeat: false, keyCode: code)!
            ui.panel.sendEvent(event)
        }
        state.normalizeSelection()
        key(0, "a", .command)
        precondition(state.selection == Set([first, second]))
        key(8, "c", .command)
        let ordered = state.selectedItems.map(\.plainText)
        precondition(board.pasteboardItems?.map { $0.string(forType: .string) } == ordered)
        key(0, "a", [.command, .shift])
        state.normalizeSelection()
        precondition(state.selection.isEmpty && state.primaryID == nil)
        let visible = state.visibleItems
        state.select(visible[0])
        state.select(visible[1], modifiers: .shift)
        precondition(state.selection.count == 2)
        ui.pasteSelection(plainTextOnly: false)
        precondition(delivered.last?.0 == visible.map(\.id) && delivered.last?.1 == false)
        store.preferences.quickPasteModifierRawValue = NSEvent.ModifierFlags.option.rawValue
        store.preferences.plainTextModifierRawValue = NSEvent.ModifierFlags.control.rawValue
        key(18, "1", [.option, .control])
        precondition(delivered.last?.0 == [visible[0].id] && delivered.last?.1 == true)
        store.preferences.nextPinboardShortcut = KeyboardShortcut(keyCode: 124, modifierRawValue: NSEvent.ModifierFlags.option.rawValue)
        key(124, "", .option)
        precondition(state.pinboardID == pin.id && state.visibleItems.map(\.id) == [first])
        state.chooseBoard(nil)
        state.addToStack(visible[0]); state.addToStack(visible[1]); state.addToStack(visible[0])
        precondition(state.stackIDs == visible.map(\.id))
        state.reverseStack()
        let reopened = try ClipboardStore(directoryURL: directory)
        precondition(reopened.preferences.stackItemIDs == visible.map(\.id).reversed())
        precondition(reopened.preferences.stackReversed)
        ui.consumeStackHead()
        precondition(state.stackIDs == [visible[0].id])
        for minutes in [15, 30, 60, 180, 480] {
            let start = Date()
            state.pauseMonitoring(minutes: minutes)
            precondition(store.preferences.isMonitoringPaused)
            precondition(abs(store.preferences.pauseUntil!.timeIntervalSince(start) - Double(minutes * 60)) < 1)
        }
        state.pauseMonitoring()
        precondition(store.preferences.isMonitoringPaused && store.preferences.pauseUntil == nil)
        state.resumeMonitoring()
        precondition(!store.preferences.isMonitoringPaused && store.preferences.pauseUntil == nil)
        precondition(!ui.panel.isVisible && NSApp.windows.allSatisfy { !$0.isVisible })
        print("{\"passed\":true,\"checks\":[\"panel event routing for select/copy/deselect\",\"multi-selection paste delivery order\",\"custom quick paste and plain text modifiers\",\"custom Pinboard navigation\",\"Stack duplicate prevention, reverse persistence and queue consumption\"],\"scope\":\"Hidden native panel, synthetic key events, temporary store and private named pasteboard; no global hooks, visible windows or cross-application paste\"}")
    }
}
