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
    let header = ReplicaInlinePreviewHeader(state: state, item: item)
    let editorHeader = ReplicaInlinePreviewEditorHeader(document: content.document)
    let footer = ReplicaInlinePreviewFooter(document: content.document)
    let view = ReplicaInlinePreviewContainer(previewHeader: header, editorHeader: editorHeader,
                                            contentView: content, footer: footer,
                                            contentSize: content.preferredPreviewSize)
    header.onEdit = { [weak view] in view?.f_10007be8c() }
    header.onClose = { [weak header, weak view] in
        header?.titleLabel.f_100011d28()
        view?.window?.performClose(nil)
    }
    header.titleLabel.onCommitEditing = { [weak state] title in
        guard let state else { return }
        state.perform { try state.store.updateItem(id: item.id, title: title, text: nil) }
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
    private var originalText: NSAttributedString
    private var editingText: NSAttributedString
    private(set) var canCommit = false
    var onCanCommitEditing: ((Bool) -> Void)?
    var onCancel: (() -> Void)?
    var onSave: (() -> Void)?
    var previewEditingToolbar: NSView? { nil }

    init(state: ReplicaUIState, item: ClipboardItem) {
        self.state = state
        itemID = item.id
        let initial = Self.attributedContent(item)
        originalText = initial
        editingText = OriginalPreviewAttributedText.normalizedEditingText(initial)
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
        OriginalPreviewAttributedText.f_100212e78(initial, editor: text)
        if OriginalPreviewAttributedText.f_1003095bc(initial) {
            text.font = OriginalPreviewAttributedText.f_1000f3e48()
        }
        text.delegate = document
        text.document = document
        text.onSave = { [weak self] in self?.onSave?() }
        text.onCancel = { [weak self] in self?.onCancel?() }
        document.textView = text
        documentView = text
        contentObservation = document.$content.sink { [weak self] content in
            MainActor.assumeIsolated {
                guard let self else { return }
                self.canCommit = OriginalPreviewAttributedText.f_1003c0be0(
                    candidate: content, original: self.originalText, editing: self.editingText)
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
                    self.replaceModelAndDisplay(current)
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
            try state.store.updateRichTextItem(id: itemID,
                attributedString: OriginalPreviewAttributedText.f_100212ccc(editor: text))
            state.normalizeSelection()
        } catch { state.controller?.presentError(error) }
        reloadStoredContent()
    }

    private func reloadStoredContent() {
        guard let item = state?.store.items.first(where: { $0.id == itemID }) else { return }
        replaceModelAndDisplay(item)
    }

    private func replaceModelAndDisplay(_ item: ClipboardItem) {
        originalText = Self.attributedContent(item)
        editingText = OriginalPreviewAttributedText.normalizedEditingText(originalText)
        OriginalPreviewAttributedText.f_1003eb330(original: originalText, editing: editingText, editor: text)
        if !text.isEditable, OriginalPreviewAttributedText.f_1003095bc(originalText) {
            text.font = OriginalPreviewAttributedText.f_1000f3e48()
        }
        document.textDidChange(Notification(name: NSText.didChangeNotification, object: text))
    }

    private static func attributedContent(_ item: ClipboardItem) -> NSAttributedString {
        for type in ["com.apple.flat-rtfd", "com.apple.rtfd"] {
            if let data = item.payloads[type],
               let content = NSAttributedString(rtfd: data, documentAttributes: nil) {
                return OriginalPreviewAttributedText.f_1003097c0(content)
            }
        }
        if let data = item.payloads["public.rtf"],
           let content = NSAttributedString(rtf: data, documentAttributes: nil) {
            return OriginalPreviewAttributedText.f_1003097c0(content)
        }
        return NSAttributedString(string: item.plainText ?? "")
    }
}

@MainActor
private final class ReplicaInlinePreviewHeader: NSView {
    var onEdit: (() -> Void)?
    var onClose: (() -> Void)?
    let titleLabel = OriginalPreviewTitleLabel()
    private var itemObservation: AnyCancellable?
    init(state: ReplicaUIState, item: ClipboardItem) {
        super.init(frame: .zero)
        let close = NSButton()
        f_1000123d4(close)
        let edit = NSButton(title: "编辑", target: self, action: #selector(editAction))
        let row = NSStackView(views: [edit])
        row.spacing = 8
        row.alignment = .centerY
        for child in [close, titleLabel, row] {
            child.translatesAutoresizingMaskIntoConstraints = false
            addSubview(child)
        }
        NSLayoutConstraint.activate([
            close.leadingAnchor.constraint(equalTo: leadingAnchor, constant: 10),
            close.centerYAnchor.constraint(equalTo: centerYAnchor),
            titleLabel.leadingAnchor.constraint(equalTo: close.trailingAnchor, constant: 8),
            titleLabel.trailingAnchor.constraint(lessThanOrEqualTo: row.leadingAnchor, constant: -8),
            titleLabel.centerYAnchor.constraint(equalTo: centerYAnchor),
            row.trailingAnchor.constraint(equalTo: trailingAnchor, constant: -8),
            row.centerYAnchor.constraint(equalTo: centerYAnchor)
        ])
        itemObservation = state.store.$items.sink { [weak self] items in
            MainActor.assumeIsolated {
                guard let self, let current = items.first(where: { $0.id == item.id }) else { return }
                let field = self.titleLabel.f_100013084()
                field.f_10023b600(current.kind.displayName)
                field.f_10023b214(current.title)
            }
        }
    }
    required init?(coder: NSCoder) { fatalError("init(coder:) has not been implemented") }

    private func f_1000123d4(_ button: NSButton) {
        if NSImage(systemSymbolName: "xmark.circle.fill", accessibilityDescription: nil) == nil {
            button.image = NSImage(systemSymbolName: "questionmark.square", accessibilityDescription: nil)!
        } else {
            button.image = NSImage(systemSymbolName: "xmark.circle.fill", accessibilityDescription: nil)!
        }
        button.imagePosition = .imageOnly
        button.contentTintColor = OriginalSearchAppearance.f_1001fec18()
        button.isBordered = false
        button.alphaValue = 0.6
        button.action = #selector(closeAction)
        button.target = self
    }

    @objc private func editAction() { onEdit?() }
    @objc private func closeAction() { onClose?() }
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
