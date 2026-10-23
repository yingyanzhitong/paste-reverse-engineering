import AppKit
import SwiftUI
import PasteReplicaCore

/// Bridge the recovered NSTextView delegate into the existing panel. This does
/// not claim migration of SearchField's remaining layout and filter functions.
@MainActor
struct ReplicaSearchEditor: NSViewRepresentable {
    @Binding var text: String
    @Binding var focused: Bool
    var onEnter: () -> Void
    var onCancel: () -> Void

    func makeCoordinator() -> Coordinator { Coordinator(self) }

    func makeNSView(context: Context) -> NSScrollView {
        let editor = SearchTextView(usingTextLayoutManager: true)
        editor.preferredTypingAttributes = [.font: OriginalSearchAppearance.f_1001ff928(),
            .foregroundColor: OriginalSearchAppearance.f_1001fec18()!]
        let scroll = OriginalSearchTextScroller(textView: editor)
        editor.frame = NSRect(x: 0, y: 0, width: scroll.contentSize.width, height: 22)
        editor.allowsUndo = true
        editor.autoresizingMask = [.width]
        editor.textContainerInset = NSSize(width: 0, height: 2)
        editor.setAccessibilityLabel("搜索剪贴板")
        editor.setAccessibilityIdentifier("clipboard-search")
        editor.string = text
        editor.f_1000436a0().isHidden = !text.isEmpty
        context.coordinator.attach(editor)
        return scroll
    }

    func updateNSView(_ scroll: NSScrollView, context: Context) {
        context.coordinator.parent = self
        guard let editor = scroll.documentView as? SearchTextView else { return }
        if editor.string != text, !editor.hasMarkedText() {
            editor.string = text
            editor.f_1000436a0().isHidden = !text.isEmpty
            editor.setSelectedRange(NSRange(location: (text as NSString).length, length: 0))
        }
        editor.requestedFocus = focused
        if focused, let window = editor.window, window.firstResponder !== editor {
            window.makeFirstResponder(editor)
        }
    }

    @MainActor final class Coordinator {
        var parent: ReplicaSearchEditor
        private var editing: OriginalSearchEditing?
        init(_ parent: ReplicaSearchEditor) { self.parent = parent }

        func attach(_ editor: SearchTextView) {
            let editing = OriginalSearchEditing(textView: editor)
            self.editing = editing
            // The plain-text panel has no attachment proposal consumer yet.
            // Keep the recovered optional callback nil so AppKit applies edits,
            // preserving its undo registration and input-method composition.
            editing.onEndEditing = { [weak self] in
                if self?.parent.focused == true { self?.parent.focused = false }
            }
            editing.onEnter = { [weak self] in self?.parent.onEnter() }
            editing.onCancel = { [weak self] in self?.parent.onCancel() }
            editor.delegate = editing
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
