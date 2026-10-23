import AppKit
import Combine
import PasteReplicaCore
import SwiftUI

/// Connects recovered preview mode transitions to the replica's local text model.
/// Color, image, and link editing require their separate recovered content adapters.
@MainActor
func makeOriginalReplicaTextPreview(state: ReplicaUIState, item: ClipboardItem) -> OriginalItemPreviewView? {
    guard item.kind == .text || item.kind == .richText else { return nil }
    let content = ReplicaInlineTextPreviewContent(state: state, item: item)
    let header = ReplicaInlinePreviewHeader(item: item)
    let editorHeader = ReplicaInlinePreviewEditorHeader(document: content.document)
    let footer = ReplicaInlinePreviewFooter(document: content.document)
    let view = ReplicaInlinePreviewContainer(previewHeader: header, editorHeader: editorHeader,
                                            contentView: content, footer: footer,
                                            contentSize: content.preferredPreviewSize)
    header.onEdit = { [weak view] in view?.f_10007be8c() }
    header.onCopy = { [weak state] in
        guard let state, let current = state.store.items.first(where: { $0.id == item.id }) else { return }
        state.controller?.copy(item: current, plainTextOnly: false)
    }
    editorHeader.onCancel = { [weak view] in view?.f_10007c1fc() }
    editorHeader.onSave = { [weak view] in view?.f_10007c080() }
    view.setCanCommitEditing = { [weak editorHeader] enabled in editorHeader?.setCanCommit(enabled) }
    content.onCancel = { [weak view] in view?.f_10007c1fc() }
    content.onSave = { [weak view, weak content] in
        guard content?.canCommit == true else { return }
        view?.f_10007c080()
    }
    return view
}

@MainActor
private final class ReplicaInlinePreviewContainer: OriginalItemPreviewView {
    override func performKeyEquivalent(with event: NSEvent) -> Bool {
        let modifiers = event.modifierFlags.intersection(.deviceIndependentFlagsMask)
        if modifiers == .command, event.charactersIgnoringModifiers == "e", editorHeader.isHidden {
            f_10007be8c()
            return true
        }
        if modifiers.isEmpty, event.keyCode == 53 {
            if !editorHeader.isHidden { f_10007c1fc() }
            else { window?.performClose(nil) }
            return true
        }
        return super.performKeyEquivalent(with: event)
    }
}

@MainActor
private final class ReplicaInlinePreviewTextView: NSTextView {
    weak var document: ReplicaRichTextDocument?
    var onSave: (() -> Void)?
    var onCancel: (() -> Void)?

    override func performKeyEquivalent(with event: NSEvent) -> Bool {
        if isEditable, event.modifierFlags.intersection(.deviceIndependentFlagsMask) == .command {
            switch event.charactersIgnoringModifiers {
            case "s": onSave?(); return true
            case "b": document?.toggle(.bold); return true
            case "i": document?.toggle(.italic); return true
            case "u": document?.toggle(.underline); return true
            default: break
            }
        }
        return super.performKeyEquivalent(with: event)
    }

    override func cancelOperation(_ sender: Any?) {
        if isEditable { onCancel?() }
        else { super.cancelOperation(sender) }
    }
}

@MainActor
private final class ReplicaInlineTextPreviewContent: NSScrollView, OriginalPreviewEditableContent {
    let document: ReplicaRichTextDocument
    private let text: ReplicaInlinePreviewTextView
    private weak var state: ReplicaUIState?
    private let itemID: UUID
    private var itemObservation: AnyCancellable?
    private var contentObservation: AnyCancellable?
    private var editingBaseline: NSAttributedString
    private(set) var canCommit = false
    var onCanCommitEditing: ((Bool) -> Void)?
    var onCancel: (() -> Void)?
    var onSave: (() -> Void)?
    var previewEditingToolbar: NSView? { nil }

    init(state: ReplicaUIState, item: ClipboardItem) {
        self.state = state
        itemID = item.id
        let initial = Self.attributedContent(item)
        editingBaseline = initial
        document = ReplicaRichTextDocument(content: initial)
        text = ReplicaInlinePreviewTextView(frame: .zero)
        super.init(frame: .zero)
        hasVerticalScroller = true
        autohidesScrollers = true
        hasHorizontalScroller = false
        borderType = .noBorder
        drawsBackground = false
        text.isEditable = false
        text.isSelectable = true
        text.isRichText = true
        text.allowsUndo = true
        text.isVerticallyResizable = true
        text.isHorizontallyResizable = false
        text.autoresizingMask = [.width]
        text.maxSize = .init(width: CGFloat.greatestFiniteMagnitude, height: CGFloat.greatestFiniteMagnitude)
        text.textContainer?.widthTracksTextView = true
        text.textContainer?.containerSize = .init(width: 500, height: CGFloat.greatestFiniteMagnitude)
        text.textContainerInset = .init(width: 8, height: 8)
        text.usesAdaptiveColorMappingForDarkAppearance = true
        text.textStorage?.setAttributedString(initial)
        text.typingAttributes = [.font: NSFont.systemFont(ofSize: 14), .foregroundColor: NSColor.textColor]
        text.delegate = document
        text.document = document
        text.onSave = { [weak self] in self?.onSave?() }
        text.onCancel = { [weak self] in self?.onCancel?() }
        document.textView = text
        documentView = text
        contentObservation = document.$content.sink { [weak self] content in
            MainActor.assumeIsolated {
                guard let self else { return }
                self.canCommit = !content.string.isEmpty && !content.isEqual(to: self.editingBaseline)
                self.onCanCommitEditing?(self.canCommit)
            }
        }
        itemObservation = state.store.$items.sink { [weak self] items in
            MainActor.assumeIsolated {
                guard let self else { return }
                guard let current = items.first(where: { $0.id == self.itemID }), !current.isDeleted else {
                    self.window?.performClose(nil)
                    return
                }
                if !self.text.isEditable {
                    self.text.textStorage?.setAttributedString(Self.attributedContent(current))
                    self.document.textDidChange(Notification(name: NSText.didChangeNotification, object: self.text))
                }
            }
        }
    }

    required init?(coder: NSCoder) { fatalError("init(coder:) has not been implemented") }

    var preferredPreviewSize: NSSize {
        let screenSize = NSScreen.main?.frame.size
        let maximum = NSSize(width: (screenSize?.width ?? 2000) * 0.5,
                             height: (screenSize?.height ?? 2000) * 0.5)
        let attributed = document.content
        let sample = attributed.length > 2000
            ? attributed.attributedSubstring(from: NSRange(location: 0, length: 2000)) : attributed
        let bounds = sample.boundingRect(with: maximum, options: [.usesLineFragmentOrigin, .usesFontLeading])
        return .init(width: max(380, bounds.width), height: max(240, bounds.height))
    }

    func beginPreviewEditing() {
        text.isEditable = true
        if let item = state?.store.items.first(where: { $0.id == itemID }) {
            editingBaseline = Self.attributedContent(item)
        }
        reloadStoredContent()
        window?.makeFirstResponder(text)
    }

    func cancelPreviewEditing() {
        text.isEditable = false
        reloadStoredContent()
    }

    func commitPreviewEditing() {
        text.isEditable = false
        guard let state else { return }
        do {
            try state.store.updateRichTextItem(id: itemID, attributedString: text.attributedString())
            state.normalizeSelection()
        } catch { state.controller?.presentError(error) }
        reloadStoredContent()
    }

    private func reloadStoredContent() {
        guard let item = state?.store.items.first(where: { $0.id == itemID }) else { return }
        text.textStorage?.setAttributedString(Self.attributedContent(item))
        document.textDidChange(Notification(name: NSText.didChangeNotification, object: text))
    }

    private static func attributedContent(_ item: ClipboardItem) -> NSAttributedString {
        if let data = item.payloads["public.rtf"],
           let content = NSAttributedString(rtf: data, documentAttributes: nil) { return content }
        return NSAttributedString(string: item.plainText ?? "", attributes: [
            .font: NSFont.systemFont(ofSize: 14), .foregroundColor: NSColor.textColor
        ])
    }
}

@MainActor
private final class ReplicaInlinePreviewHeader: NSView {
    var onEdit: (() -> Void)?
    var onCopy: (() -> Void)?
    init(item: ClipboardItem) {
        super.init(frame: .zero)
        let title = NSTextField(labelWithString: item.title.isEmpty ? item.kind.displayName : item.title)
        title.lineBreakMode = .byTruncatingTail
        let edit = NSButton(title: "编辑", target: self, action: #selector(editAction))
        let copy = NSButton(title: "拷贝", target: self, action: #selector(copyAction))
        let row = NSStackView(views: [title, NSView(), edit, copy])
        row.spacing = 8
        row.alignment = .centerY
        row.translatesAutoresizingMaskIntoConstraints = false
        addSubview(row)
        NSLayoutConstraint.activate([
            row.leadingAnchor.constraint(equalTo: leadingAnchor, constant: 10),
            row.trailingAnchor.constraint(equalTo: trailingAnchor, constant: -10),
            row.centerYAnchor.constraint(equalTo: centerYAnchor)
        ])
    }
    required init?(coder: NSCoder) { fatalError("init(coder:) has not been implemented") }
    @objc private func editAction() { onEdit?() }
    @objc private func copyAction() { onCopy?() }
}

@MainActor
private final class ReplicaInlinePreviewEditorHeader: NSView {
    var onCancel: (() -> Void)?
    var onSave: (() -> Void)?
    private var saveButton: NSButton?
    init(document: ReplicaRichTextDocument) {
        super.init(frame: .zero)
        let cancel = NSButton(title: "取消", target: self, action: #selector(cancelAction))
        let save = NSButton(title: "保存", target: self, action: #selector(saveAction))
        save.isEnabled = false
        saveButton = save
        let toolbar = NSHostingView(rootView: ReplicaInlinePreviewFormatting(document: document))
        for view in [cancel, save, toolbar] { view.translatesAutoresizingMaskIntoConstraints = false; addSubview(view) }
        NSLayoutConstraint.activate([
            cancel.leadingAnchor.constraint(equalTo: leadingAnchor, constant: 8),
            cancel.centerYAnchor.constraint(equalTo: centerYAnchor),
            save.trailingAnchor.constraint(equalTo: trailingAnchor, constant: -8),
            save.centerYAnchor.constraint(equalTo: centerYAnchor),
            toolbar.centerXAnchor.constraint(equalTo: centerXAnchor),
            toolbar.centerYAnchor.constraint(equalTo: centerYAnchor)
        ])
    }
    required init?(coder: NSCoder) { fatalError("init(coder:) has not been implemented") }
    func setCanCommit(_ enabled: Bool) { saveButton?.isEnabled = enabled }
    @objc private func cancelAction() { onCancel?() }
    @objc private func saveAction() { onSave?() }
}

@MainActor
private struct ReplicaInlinePreviewFormatting: View {
    @ObservedObject var document: ReplicaRichTextDocument
    var body: some View {
        HStack(spacing: 18) {
            Button("B") { document.toggle(.bold) }.fontWeight(.bold)
            Button("I") { document.toggle(.italic) }.italic()
            Button("U") { document.toggle(.underline) }.underline()
            Button("S") { document.toggle(.strikethrough) }.strikethrough()
        }.buttonStyle(.plain).frame(height: 38)
    }
}

@MainActor
private final class ReplicaInlinePreviewFooter: NSView {
    private var contentObservation: AnyCancellable?
    init(document: ReplicaRichTextDocument) {
        super.init(frame: .zero)
        let label = NSTextField(labelWithString: "")
        label.font = .systemFont(ofSize: 12)
        label.textColor = .secondaryLabelColor
        label.translatesAutoresizingMaskIntoConstraints = false
        addSubview(label)
        NSLayoutConstraint.activate([
            heightAnchor.constraint(equalToConstant: 38),
            label.leadingAnchor.constraint(equalTo: leadingAnchor, constant: 12),
            label.centerYAnchor.constraint(equalTo: centerYAnchor)
        ])
        contentObservation = document.$content.sink { [weak label] content in
            MainActor.assumeIsolated {
                label?.stringValue = "\(content.string.count) 个字符  ·  \(content.string.split(whereSeparator: \.isWhitespace).count) 单词"
            }
        }
    }
    required init?(coder: NSCoder) { fatalError("init(coder:) has not been implemented") }
}
