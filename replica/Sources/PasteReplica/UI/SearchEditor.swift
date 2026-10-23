import AppKit
import SwiftUI
import PasteReplicaCore

@MainActor
final class ReplicaSearchMenuAction: NSObject {
    private let action: () -> Void
    private init(action: @escaping () -> Void) { self.action = action }
    @objc private func perform(_ sender: NSMenuItem) { action() }

    static func item(title: String, action: @escaping () -> Void) -> NSMenuItem {
        let target = ReplicaSearchMenuAction(action: action)
        let item = NSMenuItem(title: title, action: #selector(perform(_:)), keyEquivalent: "")
        item.target = target
        item.representedObject = target
        return item
    }
}

/// Bridge the recovered NSTextView delegate into the existing panel. This does
/// not claim migration of SearchField's remaining layout and filter functions.
@MainActor
struct ReplicaSearchEditor: NSViewRepresentable {
    @Binding var text: String
    @Binding var focused: Bool
    var onEnter: () -> Void
    var onCancel: () -> Void
    var onShowFilters: (NSButton) -> Void

    func makeCoordinator() -> Coordinator { Coordinator(self) }

    func makeNSView(context: Context) -> SearchField {
        let field = SearchField(frame: .zero)
        let input = field.f_100045c2c()
        let editor = input.f_100041f9c() as! SearchTextView
        let scroll = input.f_10004200c()
        editor.frame = NSRect(x: 0, y: 0, width: scroll.contentSize.width, height: 22)
        editor.allowsUndo = true
        editor.autoresizingMask = [.width]
        editor.setAccessibilityLabel("搜索剪贴板")
        editor.setAccessibilityIdentifier("clipboard-search")
        editor.string = text
        input.f_1000449e8()
        context.coordinator.attach(field, editor: editor)
        field.onClear = { [weak coordinator = context.coordinator] _ in coordinator?.parent.text = "" }
        field.onShowFilters = { [weak coordinator = context.coordinator] button in coordinator?.parent.onShowFilters(button) }
        input.f_100042090().setAccessibilityLabel("清空搜索")
        field.f_100045730().setAccessibilityLabel("筛选")
        return field
    }

    func updateNSView(_ field: SearchField, context: Context) {
        context.coordinator.parent = self
        let input = field.f_100045c2c()
        guard let editor = input.f_100041f9c() as? SearchTextView else { return }
        if editor.string != text, !editor.hasMarkedText() {
            editor.string = text
            input.f_1000449e8()
            editor.setSelectedRange(NSRange(location: (text as NSString).length, length: 0))
        }
        editor.requestedFocus = focused
        if focused, let window = editor.window, window.firstResponder !== editor {
            window.makeFirstResponder(editor)
        }
    }

    final class SearchField: OriginalSearchField {
        override func makeInputView() -> OriginalSearchInputView { InputView(frame: .zero) }
    }

    final class InputView: OriginalSearchInputView {
        override func makeTextView() -> OriginalSearchTextView {
            SearchTextView(usingTextLayoutManager: true)
        }
    }

    @MainActor final class Coordinator {
        var parent: ReplicaSearchEditor
        init(_ parent: ReplicaSearchEditor) { self.parent = parent }

        func attach(_ field: SearchField, editor: SearchTextView) {
            let editing = field.editingDelegate!
            // The plain-text panel has no attachment proposal consumer yet.
            // Keep the recovered optional callback nil so AppKit applies edits,
            // preserving its undo registration and input-method composition.
            editing.onEndEditing = { [weak self] in
                if self?.parent.focused == true { self?.parent.focused = false }
            }
            editing.onEnter = { [weak self] in self?.parent.onEnter() }
            editing.onCancel = { [weak self] in self?.parent.onCancel() }
            editor.delegate = editing
            field.onUndo = { [weak editor] in
                guard let manager = editor?.undoManager, manager.canUndo else { return false }
                manager.undo()
                return true
            }
            field.onRedo = { [weak editor] in
                guard let manager = editor?.undoManager, manager.canRedo else { return false }
                manager.redo()
                return true
            }
            editor.didFocus = { [weak self] in
                if self?.parent.focused == false { self?.parent.focused = true }
            }
            editor.didChange = { [weak self, weak editor] in
                guard let editor, !editor.hasMarkedText() else { return }
                self?.parent.text = editor.string
            }
        }
    }

    final class SearchTextView: OriginalSearchTextView {
        var requestedFocus = false
        var didFocus: (() -> Void)?
        var didChange: (() -> Void)?

        override func viewDidMoveToWindow() {
            super.viewDidMoveToWindow()
            if requestedFocus { window?.makeFirstResponder(self) }
        }

        override func becomeFirstResponder() -> Bool {
            let accepted = super.becomeFirstResponder()
            if accepted { didFocus?() }
            return accepted
        }

        override func didChangeText() {
            super.didChangeText()
            didChange?()
        }
    }
}
