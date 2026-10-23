import AppKit
import Foundation
import OSLog

/// Local replacement for the original lazy logger dependency. Resolving the
/// sink is deferred until the first diagnostic, as in the source initializer.
public protocol OriginalPasteboardEventLogging {
    func record(scope: String, message: String)
}

private struct OriginalLocalPasteboardEventLogger: OriginalPasteboardEventLogging {
    func record(scope: String, message: String) {
        Logger(subsystem: "com.pastereplica", category: scope).debug("\(message, privacy: .public)")
    }
}

@MainActor
public final class OriginalPasteboardLogDependency {
    private var cached: (any OriginalPasteboardEventLogging)?

    public func resolve() -> any OriginalPasteboardEventLogging {
        if let cached { return cached }
        let logger = OriginalLocalPasteboardEventLogger()
        cached = logger
        return logger
    }
}

@MainActor
public final class OriginalPasteboardCaptureState {
    private final class WeakState {
        weak var value: OriginalPasteboardCaptureState?
        init(_ value: OriginalPasteboardCaptureState) { self.value = value }
    }
    private static var active: [NSPasteboard.Name: WeakState] = [:]

    public let pasteboard: NSPasteboard
    public weak var delegate: AnyObject?
    public var items: [OriginalPasteboardItem] = []
    public var lastChangeCount: Int
    public var pollTimer: Timer?
    public var syncTimer: Timer?
    public let diagnostics = OriginalNamedDiagnostic.f_1000d4624(name: "Pasteboard")
    public var diagnosticName: String { diagnostics.name }
    public let loggingDependency = OriginalPasteboardLogDependency()

    private init(pasteboard: NSPasteboard, changeCount: Int) {
        self.pasteboard = pasteboard
        self.lastChangeCount = changeCount == 0 ? pasteboard.changeCount : changeCount
    }

    public static func f_100378664(changeCount: Int, pasteboard: NSPasteboard = .general) -> OriginalPasteboardCaptureState {
        OriginalPasteboardCaptureState(pasteboard: pasteboard, changeCount: changeCount)
    }

    public static func register(_ state: OriginalPasteboardCaptureState) {
        active[state.pasteboard.name] = WeakState(state)
    }

    public static func current(for pasteboard: NSPasteboard) -> OriginalPasteboardCaptureState? {
        active[pasteboard.name]?.value
    }
}
