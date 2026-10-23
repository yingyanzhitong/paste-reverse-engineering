import AppKit

/// Native child window for search suggestions. The editor supplies real rows and keeps first responder.
@MainActor
final class ReplicaSearchSuggestionsMenu: NSWindow {
    struct Row {
        let title: String
        let subtitle: String?
        let image: NSImage?
        let isEnabled: Bool

        init(title: String, subtitle: String? = nil, image: NSImage? = nil, isEnabled: Bool = true) {
            self.title = title
            self.subtitle = subtitle
            self.image = image
            self.isEnabled = isEnabled
        }
    }

    private let scroller = SuggestionsScroller()
    private var rows: [Row] = []
    private var selectedIndex: Int?
    private var accept: ((Int) -> Void)?
    private var escape: (() -> Void)?
    private weak var anchorView: NSView?
    private var mouseMonitor: Any?
    private var lostFocusObserver: NSObjectProtocol?

    override var canBecomeKey: Bool { false }
    override var canBecomeMain: Bool { false }

    init() {
        super.init(contentRect: .zero, styleMask: .borderless, backing: .buffered, defer: false)
        backgroundColor = .clear
        hasShadow = true
        isOpaque = false
        level = .init(rawValue: 101)
        isReleasedWhenClosed = false
        contentView = scroller
        scroller.onHover = { [weak self] index in self?.select(index, reveal: false) }
        scroller.onAccept = { [weak self] index in self?.acceptRow(index) }
    }

    deinit {
        MainActor.assumeIsolated {
            removeMonitors()
            scroller.dispose()
        }
    }

    func show(rows: [Row], anchorRect: NSRect, in anchorView: NSView,
              onAccept: @escaping (Int) -> Void, onEscape: @escaping () -> Void) {
        guard let parent = anchorView.window else { dismiss(); return }
        self.rows = rows
        self.anchorView = anchorView
        accept = onAccept
        escape = onEscape
        guard !rows.isEmpty else { dismiss(); return }
        scroller.setRows(rows)
        selectedIndex = rows.indices.first { rows[$0].isEnabled }
        scroller.select(selectedIndex)
        let screenRect = parent.convertToScreen(anchorView.convert(anchorRect, to: nil))
        guard let screen = NSScreen.screens.first(where: { $0.frame.contains(screenRect.origin) }) else {
            cancel()
            return
        }
        let fit = scroller.fittingSize
        let width = max(120, fit.width)
        // Original caps downward height at anchor.y - visibleFrame.minY - 6;
        // it does not add an unrelated right-edge or above-anchor placement policy.
        let height = min(fit.height, screenRect.minY - screen.visibleFrame.minY - 6)
        guard height > 0 else { cancel(); return }
        setFrame(.init(x: screenRect.minX, y: screenRect.minY - height, width: width, height: height), display: true)
        scroller.layoutSubtreeIfNeeded()
        if self.parent !== parent {
            self.parent?.removeChildWindow(self)
            parent.addChildWindow(self, ordered: .above)
        }
        display()
        orderFront(nil)
        installMonitors(parent: parent)
    }

    func dismiss() {
        removeMonitors()
        self.parent?.removeChildWindow(self)
        orderOut(nil)
        accept = nil
        escape = nil
        anchorView = nil
    }

    /// Only suggestion navigation keys are handled; ordinary editor input remains untouched.
    @discardableResult
    func handleKeyDown(_ event: NSEvent) -> Bool {
        guard isVisible else { return false }
        switch event.keyCode {
        case 125: moveSelection(by: 1)
        case 126: moveSelection(by: -1)
        case 36, 76:
            guard let selectedIndex else { return false }
            acceptRow(selectedIndex)
        case 53: cancel()
        default: return false
        }
        return true
    }

    private func moveSelection(by offset: Int) {
        let enabled = rows.indices.filter { rows[$0].isEnabled }
        guard !enabled.isEmpty else { return }
        let current = selectedIndex.flatMap { enabled.firstIndex(of: $0) }
        let position = current.map { ($0 + offset + enabled.count) % enabled.count }
            ?? (offset > 0 ? 0 : enabled.count - 1)
        select(enabled[position], reveal: true)
    }

    private func select(_ index: Int, reveal: Bool) {
        guard rows.indices.contains(index), rows[index].isEnabled else { return }
        selectedIndex = index
        scroller.select(index)
        if reveal { scroller.reveal(index) }
    }

    private func acceptRow(_ index: Int) {
        guard rows.indices.contains(index), rows[index].isEnabled else { return }
        let callback = accept
        dismiss()
        callback?(index)
    }

    private func cancel() {
        let callback = escape
        dismiss()
        callback?()
    }

    private func installMonitors(parent: NSWindow) {
        removeMonitors()
        mouseMonitor = NSEvent.addLocalMonitorForEvents(matching: .init(rawValue: 0x200000a)) { [weak self] event in
            MainActor.assumeIsolated {
                guard let self, self.isVisible else { return }
                if event.window === self { return }
                if let anchor = self.anchorView, event.window === anchor.window,
                   anchor.bounds.contains(anchor.convert(event.locationInWindow, from: nil)) { return }
                self.cancel()
            }
            return event
        }
        lostFocusObserver = NotificationCenter.default.addObserver(forName: NSWindow.didResignKeyNotification,
            object: parent, queue: .main) { [weak self] _ in
                MainActor.assumeIsolated { self?.cancel() }
            }
    }

    private func removeMonitors() {
        if let mouseMonitor { NSEvent.removeMonitor(mouseMonitor); self.mouseMonitor = nil }
        if let lostFocusObserver { NotificationCenter.default.removeObserver(lostFocusObserver); self.lostFocusObserver = nil }
    }
}

@MainActor
private final class SuggestionsScroller: NSView {
    private let background = NSVisualEffectView()
    private let scrollView = NSScrollView()
    private let list = SuggestionsList()
    private let up = SuggestionsScrollIndicator(symbol: "chevron.up")
    private let down = SuggestionsScrollIndicator(symbol: "chevron.down")
    private var boundsObserver: NSObjectProtocol?
    var onHover: ((Int) -> Void)?
    var onAccept: ((Int) -> Void)?

    override init(frame frameRect: NSRect) {
        super.init(frame: frameRect)
        background.material = .menu
        background.blendingMode = .behindWindow
        background.state = .active
        background.wantsLayer = true
        background.layer?.cornerRadius = 6
        background.layer?.masksToBounds = true
        addSubview(background)
        scrollView.contentView.postsBoundsChangedNotifications = true
        scrollView.usesPredominantAxisScrolling = true
        scrollView.hasHorizontalScroller = false
        scrollView.hasVerticalScroller = false
        scrollView.autohidesScrollers = false
        scrollView.drawsBackground = false
        scrollView.borderType = .noBorder
        scrollView.wantsLayer = true
        scrollView.documentView = list
        addSubview(scrollView)
        addSubview(up)
        addSubview(down)
        list.onHover = { [weak self] in self?.onHover?($0) }
        list.onAccept = { [weak self] in self?.onAccept?($0) }
        up.hoverChanged = { [weak self] in self?.hover(direction: -1, active: $0) }
        down.hoverChanged = { [weak self] in self?.hover(direction: 1, active: $0) }
        boundsObserver = NotificationCenter.default.addObserver(forName: NSView.boundsDidChangeNotification,
            object: scrollView.contentView, queue: .main) { [weak self] _ in
                MainActor.assumeIsolated { self?.updateIndicators() }
            }
    }

    required init?(coder: NSCoder) { return nil }

    override var fittingSize: NSSize { list.fittingSize }

    func setRows(_ rows: [ReplicaSearchSuggestionsMenu.Row]) { list.setRows(rows); needsLayout = true }
    func select(_ index: Int?) { list.select(index) }
    func reveal(_ index: Int) { list.reveal(index); updateIndicators() }

    override func layout() {
        super.layout()
        background.frame = bounds
        scrollView.frame = bounds
        list.frame = .init(origin: .zero, size: .init(width: bounds.width, height: list.fittingSize.height))
        list.layoutSubtreeIfNeeded()
        up.frame = .init(x: 0, y: bounds.height - 16, width: bounds.width, height: 16)
        down.frame = .init(x: 0, y: 0, width: bounds.width, height: 16)
        updateIndicators()
    }

    private func updateIndicators() {
        let visible = scrollView.documentVisibleRect
        up.isHidden = visible.minY <= 0
        down.isHidden = visible.maxY >= list.bounds.height
    }

    private func hover(direction: Int, active: Bool) {
        guard active else { return }
        // Original hover callbacks step by the current selected row's height, without a timer.
        scroll(by: CGFloat(direction) * list.selectedRowHeight)
    }

    private func scroll(by delta: CGFloat) {
        let clip = scrollView.contentView
        let y = max(0, min(list.bounds.height - clip.bounds.height, clip.bounds.minY + delta))
        clip.scroll(to: .init(x: 0, y: y))
        scrollView.reflectScrolledClipView(clip)
        updateIndicators()
    }

    func dispose() {
        if let boundsObserver { NotificationCenter.default.removeObserver(boundsObserver); self.boundsObserver = nil }
    }
}

@MainActor
private final class SuggestionsList: NSView {
    private var rows: [SuggestionRowView] = []
    private var selectedIndex: Int?
    var selectedRowHeight: CGFloat { selectedIndex.flatMap { rows.indices.contains($0) ? rows[$0].bounds.height : nil } ?? 0 }
    var onHover: ((Int) -> Void)?
    var onAccept: ((Int) -> Void)?
    override var isFlipped: Bool { true }

    override var fittingSize: NSSize {
        .init(width: rows.map { $0.fittingSize.width }.max() ?? 0,
              height: rows.reduce(8) { $0 + $1.fittingSize.height })
    }

    func setRows(_ items: [ReplicaSearchSuggestionsMenu.Row]) {
        rows.forEach { $0.removeFromSuperview() }
        rows = items.enumerated().map { index, item in
            let row = SuggestionRowView(item: item)
            row.onHover = { [weak self] in self?.onHover?(index) }
            row.onAccept = { [weak self] in self?.onAccept?(index) }
            addSubview(row)
            return row
        }
        needsLayout = true
    }

    override func layout() {
        super.layout()
        var y: CGFloat = 4
        for row in rows {
            row.frame = .init(x: 4, y: y, width: max(0, bounds.width - 8), height: row.fittingSize.height)
            y += row.fittingSize.height
        }
    }

    func select(_ index: Int?) {
        selectedIndex = index
        for (offset, row) in rows.enumerated() { row.setSelected(offset == index) }
    }
    func reveal(_ index: Int) { if rows.indices.contains(index) { rows[index].scrollToVisible(rows[index].bounds) } }
}

@MainActor
private final class SuggestionRowView: NSView {
    private let title: NSTextField
    private let subtitle: NSTextField
    private let image: NSImageView
    private let enabled: Bool
    private var hoverArea: NSTrackingArea?
    var onHover: (() -> Void)?
    var onAccept: (() -> Void)?

    init(item: ReplicaSearchSuggestionsMenu.Row) {
        title = NSTextField(labelWithString: item.title)
        subtitle = NSTextField(labelWithString: item.subtitle ?? "")
        image = NSImageView()
        image.image = item.image
        enabled = item.isEnabled
        super.init(frame: .zero)
        title.font = .menuFont(ofSize: 0)
        subtitle.font = .menuFont(ofSize: 0)
        subtitle.textColor = .secondaryLabelColor
        for view in [image, title, subtitle] { view.translatesAutoresizingMaskIntoConstraints = false; addSubview(view) }
        image.imageScaling = .scaleProportionallyDown
        image.isHidden = item.image == nil
        title.lineBreakMode = .byTruncatingTail
        subtitle.lineBreakMode = .byTruncatingTail
        subtitle.setContentCompressionResistancePriority(.defaultLow, for: .horizontal)
        NSLayoutConstraint.activate([
            image.leadingAnchor.constraint(equalTo: leadingAnchor, constant: 8),
            image.centerYAnchor.constraint(equalTo: centerYAnchor), image.widthAnchor.constraint(equalToConstant: 16),
            image.heightAnchor.constraint(equalToConstant: 16),
            title.leadingAnchor.constraint(equalTo: leadingAnchor, constant: item.image == nil ? 8 : 30),
            title.centerYAnchor.constraint(equalTo: centerYAnchor),
            subtitle.leadingAnchor.constraint(greaterThanOrEqualTo: title.trailingAnchor, constant: 12),
            subtitle.centerYAnchor.constraint(equalTo: centerYAnchor),
            subtitle.trailingAnchor.constraint(equalTo: trailingAnchor, constant: -8)
        ])
        alphaValue = enabled ? 1 : 0.5
        wantsLayer = true
        layer?.cornerRadius = 4
    }

    required init?(coder: NSCoder) { return nil }
    override var fittingSize: NSSize {
        .init(width: title.fittingSize.width + subtitle.fittingSize.width + (image.isHidden ? 28 : 50), height: 28)
    }
    func setSelected(_ value: Bool) {
        let selected = enabled && value
        layer?.backgroundColor = selected ? NSColor.selectedContentBackgroundColor.cgColor : NSColor.clear.cgColor
        title.textColor = selected ? .alternateSelectedControlTextColor : .labelColor
        subtitle.textColor = selected ? .alternateSelectedControlTextColor : .secondaryLabelColor
    }
    override func updateTrackingAreas() {
        super.updateTrackingAreas()
        if let hoverArea { removeTrackingArea(hoverArea) }
        let area = NSTrackingArea(rect: .zero, options: [.mouseEnteredAndExited, .activeAlways, .inVisibleRect], owner: self, userInfo: nil)
        addTrackingArea(area)
        hoverArea = area
    }
    override func mouseEntered(with event: NSEvent) { if enabled { onHover?() } }
    override func mouseDown(with event: NSEvent) { if enabled { onAccept?() } }
}

@MainActor
private final class SuggestionsScrollIndicator: NSView {
    private let image: NSImageView
    private var hoverArea: NSTrackingArea?
    var hoverChanged: ((Bool) -> Void)?
    init(symbol: String) {
        image = NSImageView()
        image.image = NSImage(systemSymbolName: symbol, accessibilityDescription: nil)
        super.init(frame: .zero)
        addSubview(image)
        wantsLayer = true
        layer?.backgroundColor = NSColor.windowBackgroundColor.withAlphaComponent(0.95).cgColor
    }
    required init?(coder: NSCoder) { return nil }
    override func layout() { super.layout(); image.frame = .init(x: (bounds.width - 12) / 2, y: (bounds.height - 8) / 2, width: 12, height: 8) }
    override func updateTrackingAreas() {
        super.updateTrackingAreas()
        if let hoverArea { removeTrackingArea(hoverArea) }
        let area = NSTrackingArea(rect: .zero, options: [.mouseEnteredAndExited, .activeAlways, .inVisibleRect], owner: self, userInfo: nil)
        addTrackingArea(area)
        hoverArea = area
    }
    override func mouseEntered(with event: NSEvent) { hoverChanged?(true) }
    override func mouseExited(with event: NSEvent) { hoverChanged?(false) }
}
