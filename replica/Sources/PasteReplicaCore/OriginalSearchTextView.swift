import AppKit

/// Recovered SearchField.InputView.TextView behavior. The panel supplies its
/// current typing attributes and translated placeholder; initializer/theme and
/// localization functions are tracked separately from these method contracts.
@MainActor
open class OriginalSearchTextView: NSTextView {
    public var canAcceptFocus = true
    public var preferredTypingAttributes: [NSAttributedString.Key: Any] = [:]
    public var placeholderText = OriginalSearchAppearance.searchPlaceholder()
    private var storedPlaceholder: NSTextField?

    public func f_1000436a0() -> NSTextField {
        if let storedPlaceholder { return storedPlaceholder }
        let label = NSTextField()
        f_10004371c(label)
        storedPlaceholder = label
        return label
    }

    public func f_10004371c(_ label: NSTextField) {
        label.drawsBackground = false
        label.isSelectable = false
        label.isEditable = false
        label.isBordered = false
        label.textColor = .placeholderTextColor
        label.font = preferredTypingAttributes[.font] as? NSFont
        label.stringValue = placeholderText
    }

    public func f_100043904() {
        f_1000436a0().font = preferredTypingAttributes[.font] as? NSFont
        typingAttributes = preferredTypingAttributes
        font = preferredTypingAttributes[.font] as? NSFont
    }

    public func f_100043b74() -> Bool { canAcceptFocus }
    open override var acceptsFirstResponder: Bool { f_100043b74() }

    public func f_100043c24() -> Bool {
        let accepted = super.becomeFirstResponder()
        if accepted { setSelectedRange(selectedRange()) }
        return accepted
    }
    open override func becomeFirstResponder() -> Bool { f_100043c24() }

    public func f_100043d2c(_ range: NSRange, affinity: NSSelectionAffinity, stillSelecting: Bool) {
        super.setSelectedRange(range, affinity: affinity, stillSelecting: stillSelecting)
        f_100043904()
    }
    open override func setSelectedRange(_ charRange: NSRange, affinity: NSSelectionAffinity, stillSelecting flag: Bool) {
        f_100043d2c(charRange, affinity: affinity, stillSelecting: flag)
    }

    public func f_100043e4c() {
        super.didChangeText()
        f_1000436a0().isHidden = !string.isEmpty
        f_100043904()
    }
    @discardableResult
    public static func f_100043508<T>(_ context: T, action: (T) -> Void) -> Int {
        action(context)
        return 0
    }
    public func f_100043efc() { Self.f_100043508(self) { $0.f_100043e4c() } }
    open override func didChangeText() { f_100043efc() }

    public func f_100043f0c() {
        super.layout()
        let x = textContainerOrigin.x - 1
        let y = textContainerOrigin.y
        let label = f_1000436a0()
        var frame = label.frame
        frame.origin = NSPoint(x: x, y: y)
        label.frame = frame
        label.sizeToFit()
    }
    public func f_100043fa0() { Self.f_100043508(self) { $0.f_100043f0c() } }
    open override func layout() { f_100043fa0() }

    public func f_100043fb0(_ item: NSValidatedUserInterfaceItem) -> Bool {
        if item.action == NSSelectorFromString("changeLayoutOrientation:") { return false }
        return super.validateUserInterfaceItem(item)
    }
    open override func validateUserInterfaceItem(_ item: NSValidatedUserInterfaceItem) -> Bool {
        f_100043fb0(item)
    }

    /// 0x100042fc8: the text layout/configuration method, including its final
    /// placeholder and typing-attribute refresh. This uses TextKit 2, as does
    /// the original lazy text-view constructor.
    public func f_100042fc8() {
        minSize = NSSize(width: 1, height: 1)
        maxSize = NSSize(width: 1_000_000, height: 1_000_000)
        textLayoutManager?.textContainer?.widthTracksTextView = false
        textLayoutManager?.textContainer?.heightTracksTextView = false
        textLayoutManager?.textContainer?.size = maxSize
        textLayoutManager?.textContainer?.maximumNumberOfLines = 1
        textLayoutManager?.textContainer?.lineFragmentPadding = 0
        drawsBackground = false
        focusRingType = .none
        isAutomaticSpellingCorrectionEnabled = false
        isAutomaticQuoteSubstitutionEnabled = false
        isAutomaticDashSubstitutionEnabled = false
        isAutomaticTextReplacementEnabled = false
        isAutomaticTextCompletionEnabled = false
        isAutomaticDataDetectionEnabled = false
        isAutomaticLinkDetectionEnabled = false
        contentType = nil
        isHorizontallyResizable = true
        isVerticallyResizable = true
        isFieldEditor = true
        isSelectable = true
        isEditable = true
        isRichText = false
        addSubview(f_1000436a0())
        f_100043904()
    }
}
