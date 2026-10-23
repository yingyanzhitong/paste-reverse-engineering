import AppKit
import SwiftUI
import PasteReplicaCore

struct ReplicaSearchFilterChip {
    enum Selection: Hashable {
        case kind(ClipboardKind), source(String), device(String), date(Int)
    }
    let selection: Selection
    let title: String
    let image: NSImage?
}

private let searchFilterSelectionKey = NSAttributedString.Key("com.pastereplica.search.filter")

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
    var filters: [ReplicaSearchFilterChip]
    var onFiltersChange: ([ReplicaSearchFilterChip.Selection]) -> Void
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
        context.coordinator.attach(field, editor: editor)
        context.coordinator.updateContents(field, editor: editor)
        field.onClear = { [weak coordinator = context.coordinator] _ in
            coordinator?.parent.text = ""
            coordinator?.parent.onFiltersChange([])
        }
        field.onShowFilters = { [weak coordinator = context.coordinator] button in coordinator?.parent.onShowFilters(button) }
        input.f_100042090().setAccessibilityLabel("清空搜索")
        field.f_100045730().setAccessibilityLabel("筛选")
        return field
    }

    func updateNSView(_ field: SearchField, context: Context) {
        context.coordinator.parent = self
        let input = field.f_100045c2c()
        guard let editor = input.f_100041f9c() as? SearchTextView else { return }
        context.coordinator.updateContents(field, editor: editor)
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
        private var renderedFilters: [ReplicaSearchFilterChip.Selection] = []
        init(_ parent: ReplicaSearchEditor) { self.parent = parent }

        private func contents(_ storage: NSAttributedString, editor: NSTextView) -> (String, [ReplicaSearchFilterChip.Selection]) {
            var selections: [ReplicaSearchFilterChip.Selection] = []
            var ranges: [NSRange] = []
            storage.enumerateAttribute(searchFilterSelectionKey,
                in: NSRange(location: 0, length: storage.length)) { value, range, _ in
                if let selection = value as? ReplicaSearchFilterChip.Selection {
                    selections.append(selection)
                    ranges.append(range)
                }
            }
            let plain = NSMutableString(string: editor.f_1000f7254())
            for range in ranges.reversed() { plain.deleteCharacters(in: range) }
            return (plain as String, selections)
        }

        func updateContents(_ field: SearchField, editor: SearchTextView) {
            guard !editor.hasMarkedText(), let storage = editor.textStorage else { return }
            let selections = parent.filters.map(\.selection)
            let previous = contents(storage, editor: editor)
            guard previous.0 != parent.text || previous.1 != selections else { return }
            let range = editor.selectedRange()
            let position = max(0, range.location - previous.1.count)
            let result = NSMutableAttributedString(string: "")
            for filter in parent.filters {
                let attachment = OriginalFilterTextAttachment { [weak field] in
                    field?.f_100046914(title: filter.title, image: filter.image) ?? NSView()
                }
                let token = NSMutableAttributedString(attributedString: NSAttributedString(attachment: attachment))
                token.addAttributes(editor.preferredTypingAttributes,
                                    range: NSRange(location: 0, length: token.length))
                token.addAttribute(searchFilterSelectionKey, value: filter.selection,
                                   range: NSRange(location: 0, length: token.length))
                result.append(token)
            }
            result.append(NSAttributedString(string: parent.text, attributes: editor.preferredTypingAttributes))
            if selections.isEmpty {
                editor.f_1000f733c(parent.text)
            } else {
                storage.setAttributedString(result)
            }
            renderedFilters = selections
            field.f_100045c2c().f_1000449e8()
            let location = min(result.length, selections.count + position)
            editor.setSelectedRange(NSRange(location: location,
                length: min(range.length, result.length - location)))
        }

        func attach(_ field: SearchField, editor: SearchTextView) {
            let editing = field.editingDelegate!
            // AppKit applies edits and records undo; the recovered delegate
            // selects an attachment before a single backward deletion removes it.
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
                guard let self, let editor, !editor.hasMarkedText(), let storage = editor.textStorage else { return }
                let (text, selections) = self.contents(storage, editor: editor)
                self.parent.text = text
                if selections != self.renderedFilters {
                    self.renderedFilters = selections
                    self.parent.onFiltersChange(selections)
                }
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
