import AppKit
import Foundation
import ImageIO
import Vision

extension ClipboardItem {
    public var recognizedText: String? {
        payloads[ClipboardStore.recognizedTextPayloadKey].flatMap { String(data: $0, encoding: .utf8) }
    }

    var imageData: Data? {
        for key in [NSPasteboard.PasteboardType.png.rawValue, NSPasteboard.PasteboardType.tiff.rawValue,
                    "public.jpeg", "public.heic", "com.compuserve.gif"] {
            if let data = payloads[key] { return data }
        }
        return nil
    }
}

public enum ImageTextRecognizer {
    /// Mirrors the local Vision request observed at REA 0x1002d4830; no remote service is used.
    public static func recognize(imageData: Data) async throws -> String {
        try await Task.detached(priority: .utility) {
            guard let source = CGImageSourceCreateWithData(imageData as CFData, nil),
                  CGImageSourceGetCount(source) > 0 else { throw CocoaError(.fileReadCorruptFile) }
            let request = VNRecognizeTextRequest()
            request.automaticallyDetectsLanguage = true
            request.usesLanguageCorrection = true
            request.preferBackgroundProcessing = true
            let handler = VNImageRequestHandler(data: imageData, options: [:])
            try handler.perform([request])
            // 0x1002d576c also takes the top candidate; the original additionally keeps word boxes.
            return (request.results ?? []).compactMap { $0.topCandidates(1).first?.string }.joined(separator: "\n")
        }.value
    }
}

extension ClipboardStore {
    nonisolated static let recognizedTextPayloadKey = "com.pastereplica.internal.recognized-text"
    nonisolated static let analysisPayloadKeys: Set<String> = [recognizedTextPayloadKey]

    @discardableResult
    public func recognizeImageText(id: UUID) async throws -> String {
        try save()
        guard let item = items.first(where: { $0.id == id && !$0.isDeleted }) else { throw ClipboardStoreError.itemNotFound }
        if let recognized = item.recognizedText { return recognized }
        guard item.kind == .image, let data = item.imageData else { throw CocoaError(.fileReadUnsupportedScheme) }
        let text = try await ImageTextRecognizer.recognize(imageData: data)
        try saveRecognizedText(id: id, text: text, expectedImageData: data)
        return text
    }

    func startBackgroundTextRecognition(id: UUID) {
        guard let item = items.first(where: { $0.id == id }), item.recognizedText == nil else { return }
        Task { [weak self] in _ = try? await self?.recognizeImageText(id: id) }
    }
}
