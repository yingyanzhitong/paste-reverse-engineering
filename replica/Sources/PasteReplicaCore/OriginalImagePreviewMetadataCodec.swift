import Foundation

/// The image projection of the original ContentMetadata.Stored wire record.
/// Other content projections and the original configuration lookup remain separate.
public enum OriginalImagePreviewMetadataCodec {
    public static func decode(_ rawPreview: Data?) -> OriginalImagePreviewMetadata? {
        guard let rawPreview else { return nil }
        let stored = (try? PropertyListDecoder().decode(Stored.self, from: rawPreview))
            ?? (try? JSONDecoder().decode(Stored.self, from: rawPreview))
        guard let stored, stored.type == "image" else { return nil }
        let size = stored.imageSize ?? .zero
        return OriginalImagePreviewMetadata(width: size.width, height: size.height,
                                            previewData: stored.imageData ?? Data())
    }

    public static func encode(_ metadata: OriginalImagePreviewMetadata?, binaryPropertyList: Bool) -> Data? {
        guard let metadata else { return nil }
        var stored = Stored()
        stored.type = "image"
        stored.imageSize = metadata.size
        stored.imageData = metadata.previewData
        if binaryPropertyList {
            let encoder = PropertyListEncoder()
            encoder.outputFormat = .binary
            return try? encoder.encode(stored)
        }
        return try? JSONEncoder().encode(stored)
    }

    // All original fields are decoded, including optional fields irrelevant to
    // images: a malformed present value makes decoding the whole record fail.
    private struct Stored: Codable {
        var type: String?
        var textLength: Int?
        var text: AttributedString?
        var url: URL?
        var urlName: String?
        var urlIconData: Data?
        var urlImageData: Data?
        var imageSize: CGSize?
        var imageData: Data?
        var filePaths: [String]?
        var filesTotalSize: Int?
        var filesImageData: Data?
        var colorCode: UInt64?
    }
}
