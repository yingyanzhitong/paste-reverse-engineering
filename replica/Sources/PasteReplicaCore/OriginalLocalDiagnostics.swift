import Foundation
import OSLog

public protocol OriginalDiagnosticSink {
    func emit(level: UInt8, message: String)
}

extension OriginalDiagnosticSink {
    public func f_1000d4db8(_ message: String) { emit(level: 0, message: message) }
    public func f_1000d4dd4(_ message: String) { emit(level: 1, message: message) }
    public func f_1000d4df0(_ message: String) { emit(level: 2, message: message) }
    public func f_1000d4e0c(_ message: String) { emit(level: 3, message: message) }
}

/// The local sink replaces the original console/file provider registration.
/// The named logger's initializer and cache do not depend on that backend.
private struct OriginalOSLogDiagnosticSink: OriginalDiagnosticSink {
    let logger: Logger

    init(name: String) { logger = Logger(subsystem: "com.pastereplica", category: name) }

    func emit(level: UInt8, message: String) {
        let levels: [OSLogType] = [.debug, .info, .default, .error]
        guard Int(level) < levels.count else { return }
        logger.log(level: levels[Int(level)], "\(message, privacy: .public)")
    }
}

public final class OriginalNamedDiagnostic {
    private let lock = NSLock()
    public let name: String
    private var cached: (any OriginalDiagnosticSink)?
    private let factory: (String) -> any OriginalDiagnosticSink

    private init(name: String, factory: @escaping (String) -> any OriginalDiagnosticSink) {
        self.name = name
        self.factory = factory
        self.cached = nil
    }

    public static func f_1000d4624(name: String,
                                  factory: ((String) -> any OriginalDiagnosticSink)? = nil) -> OriginalNamedDiagnostic {
        OriginalNamedDiagnostic(name: name, factory: factory ?? { OriginalOSLogDiagnosticSink(name: $0) })
    }

    public func f_1000d468c() -> any OriginalDiagnosticSink {
        lock.lock()
        defer { lock.unlock() }
        if let cached { return cached }
        let sink = factory(name)
        cached = sink
        return sink
    }
}
