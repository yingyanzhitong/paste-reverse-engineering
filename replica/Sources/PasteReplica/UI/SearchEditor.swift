import AppKit
import SwiftUI
import PasteReplicaCore

struct ReplicaSearchFilterChip {
    enum Selection: Hashable {
        case kind(ClipboardKind), source(String), device(String), date(OriginalSearchDateFilter), pinboard(UUID)
    }
    let selection: Selection
    let title: String
    let image: NSImage?
}

private let searchFilterSelectionKey = NSAttributedString.Key("com.pastereplica.search.filter")

/// Bridge the recovered NSTextView delegate into the existing panel. This does
/// not claim migration of SearchField's remaining layout and filter functions.
@MainActor
struct ReplicaSearchEditor: NSViewRepresentable {
    @Binding var text: String
    @Binding var focused: Bool
    var filters: [ReplicaSearchFilterChip]
    var onInputChange: (String, [ReplicaSearchFilterChip.Selection], [OriginalSearchQueryNode]) -> Void
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
        field.onClear = { [weak coordinator = context.coordinator, weak field, weak editor] preserveHistory in
            guard let coordinator, let field, let editor else { return }
            coordinator.clearInput(preserveHistory: preserveHistory, field: field, editor: editor)
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
        private var currentNodes: [OriginalSearchQueryNode] = []
        private var knownTokens: [ReplicaSearchFilterChip.Selection: NSAttributedString] = [:]
        private let history = OriginalSearchInputHistory(interval: 0.4)
        private var applyingContents = false
        init(_ parent: ReplicaSearchEditor) { self.parent = parent }

        private struct Projection {
            let text: String
            let filters: [ReplicaSearchFilterChip.Selection]
            let nodes: [OriginalSearchQueryNode]
            let rawNodes: [OriginalSearchQueryNode]
            var needsNormalization: Bool { nodes != rawNodes }
        }

        private func contents(_ storage: NSAttributedString, text: String) -> Projection {
            var selections: [ReplicaSearchFilterChip.Selection] = []
            var nodes: [OriginalSearchQueryNode] = []
            var buffer = ""
            let string = text as NSString
            storage.enumerateAttributes(in: NSRange(location: 0, length: storage.length)) { attributes, range, _ in
                let selection = attributes[searchFilterSelectionKey] as? ReplicaSearchFilterChip.Selection
                var location = range.location
                for character in string.substring(with: range) {
                    defer { location += String(character).utf16.count }
                    if character == "\u{FFFC}" {
                        OriginalSearchTextTokens.f_1002f8760(&buffer, into: &nodes)
                        if let selection {
                            selections.append(selection)
                            nodes.append(selection.queryNode)
                            self.knownTokens[selection] = storage.attributedSubstring(
                                from: NSRange(location: location, length: 1))
                        }
                    } else { buffer.append(character) }
                }
            }
            OriginalSearchTextTokens.f_1002f8760(&buffer, into: &nodes)
            let normalized = OriginalSearchQueryNormalization.f_1002da16c(nodes, flag: 0)
            let filters = normalized.compactMap { node -> ReplicaSearchFilterChip.Selection? in
                guard case .filter = node else { return nil }
                return selections.first { $0.queryNode == node }
            }
            let text = normalized.compactMap { node -> String? in
                guard case let .text(text) = node else { return nil }
                return text
            }.joined()
            return Projection(text: text, filters: filters, nodes: normalized, rawNodes: nodes)
        }

        private func attributedString(_ nodes: [OriginalSearchQueryNode], field: SearchField,
                                      editor: SearchTextView) -> NSAttributedString {
            let result = NSMutableAttributedString(string: "")
            for node in nodes {
                switch node {
                case let .text(text):
                    result.append(NSAttributedString(string: text, attributes: editor.preferredTypingAttributes))
                case .filter:
                    let token: NSMutableAttributedString
                    if let filter = parent.filters.first(where: { $0.selection.queryNode == node }) {
                        let attachment = OriginalFilterTextAttachment { [weak field] in
                            field?.f_100046914(title: filter.title, image: filter.image) ?? NSView()
                        }
                        token = NSMutableAttributedString(attributedString: NSAttributedString(attachment: attachment))
                        token.addAttribute(searchFilterSelectionKey, value: filter.selection,
                                           range: NSRange(location: 0, length: token.length))
                        knownTokens[filter.selection] = token.copy() as? NSAttributedString
                    } else {
                        // Undo retains the actual token metadata even after the filter leaves the model.
                        guard let tokenValue = knownTokens.first(where: { $0.key.queryNode == node })?.value else {
                            preconditionFailure("Search history lost its filter token")
                        }
                        token = NSMutableAttributedString(attributedString: tokenValue)
                    }
                    token.addAttributes(editor.preferredTypingAttributes,
                                        range: NSRange(location: 0, length: token.length))
                    result.append(token)
                }
            }
            return result
        }

        private func display(_ value: NSAttributedString, selection: NSRange,
                             field: SearchField, editor: SearchTextView) {
            applyingContents = true
            editor.textStorage?.setAttributedString(value)
            field.f_100045c2c().f_1000449e8()
            editor.setSelectedRange(selection)
            editor.scrollRangeToVisible(selection)
            applyingContents = false
        }

        private func publish(_ value: Projection) {
            currentNodes = value.nodes
            renderedFilters = value.filters
            parent.onInputChange(value.text, value.filters, value.nodes)
        }

        func updateContents(_ field: SearchField, editor: SearchTextView) {
            guard !applyingContents, !editor.hasMarkedText(), let storage = editor.textStorage else { return }
            let selections = parent.filters.map(\.selection)
            let previous = contents(storage, text: editor.f_1000f7254())
            guard previous.text != parent.text || previous.filters != selections || previous.needsNormalization else { return }
            var buffer = parent.text
            var nodes = selections.map(\.queryNode)
            OriginalSearchTextTokens.f_1002f8760(&buffer, into: &nodes)
            nodes = OriginalSearchQueryNormalization.f_1002da16c(nodes, flag: 0)
            let result = attributedString(nodes, field: field, editor: editor)
            let selection = NSRange(location: result.length, length: 0)
            display(result, selection: selection, field: field, editor: editor)
            if currentNodes != nodes {
                history.f_1002f5e18(.init(nodes: nodes, selection: selection), immediate: true)
            }
            currentNodes = nodes
            renderedFilters = selections
        }

        private func filterCount(_ nodes: [OriginalSearchQueryNode]) -> Int {
            nodes.reduce(0) { count, node in
                if case .filter = node { return count + 1 }
                return count
            }
        }

        private func propose(_ proposed: NSAttributedString, selection: NSRange,
                             field: SearchField, editor: SearchTextView) -> Bool {
            guard !editor.hasMarkedText() else { return true }
            let value = contents(proposed, text: proposed.string)
            guard value.nodes != currentNodes else { return true }
            history.f_1002f5e18(.init(nodes: value.nodes, selection: selection),
                                immediate: filterCount(value.nodes) != filterCount(currentNodes))
            publish(value)
            guard value.needsNormalization else { return true }
            let rendered = attributedString(value.nodes, field: field, editor: editor)
            display(rendered, selection: NSRange(location: rendered.length, length: 0),
                    field: field, editor: editor)
            return false
        }

        private func restore(_ snapshot: OriginalSearchInputHistory.Snapshot?,
                             field: SearchField, editor: SearchTextView) -> Bool {
            guard let snapshot else { return false }
            let rendered = attributedString(snapshot.nodes, field: field, editor: editor)
            display(rendered, selection: snapshot.selection, field: field, editor: editor)
            let value = contents(rendered, text: rendered.string)
            currentNodes = snapshot.nodes
            renderedFilters = value.filters
            parent.onInputChange(value.text, value.filters, snapshot.nodes)
            return true
        }

        func clearInput(preserveHistory: Bool, field: SearchField, editor: SearchTextView) {
            let selection = NSRange(location: 0, length: 0)
            if !currentNodes.isEmpty {
                history.f_1002f5e18(.init(nodes: [], selection: selection), immediate: true)
            }
            display(NSAttributedString(string: ""), selection: selection, field: field, editor: editor)
            publish(Projection(text: "", filters: [], nodes: [], rawNodes: []))
            if !preserveHistory { history.f_1002f6550() }
        }

        func attach(_ field: SearchField, editor: SearchTextView) {
            let editing = field.editingDelegate!
            editing.onTextShouldChange = { [weak self, weak field, weak editor] proposed, selection in
                guard let self, let field, let editor else { return true }
                return self.propose(proposed, selection: selection, field: field, editor: editor)
            }
            editing.onEndEditing = { [weak self] in
                if self?.parent.focused == true { self?.parent.focused = false }
            }
            editing.onEnter = { [weak self] in self?.parent.onEnter() }
            editing.onCancel = { [weak self] in self?.parent.onCancel() }
            editor.delegate = editing
            field.onUndo = { [weak self, weak field, weak editor] in
                guard let self, let field, let editor else { return false }
                return self.restore(self.history.f_1002f61f0(), field: field, editor: editor)
            }
            field.onRedo = { [weak self, weak field, weak editor] in
                guard let self, let field, let editor else { return false }
                return self.restore(self.history.f_1002f63b8(), field: field, editor: editor)
            }
            editor.didFocus = { [weak self] in
                if self?.parent.focused == false { self?.parent.focused = true }
            }
            editor.didChange = { [weak self, weak editor] in
                guard let self, let editor, !self.applyingContents,
                      !editor.hasMarkedText(), let storage = editor.textStorage else { return }
                let value = self.contents(storage, text: editor.f_1000f7254())
                if value.nodes != self.currentNodes {
                    self.history.f_1002f5e18(.init(nodes: value.nodes, selection: editor.selectedRange()),
                                             immediate: self.filterCount(value.nodes) != self.filterCount(self.currentNodes))
                }
                self.publish(value)
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
