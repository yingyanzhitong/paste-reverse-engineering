import AppKit
import Foundation

public enum OriginalPasteboardRestore {
    /// The original entity getter first decodes ItemData; this is its array projection.
    public static func f_10031bcdc(_ items: [OriginalPasteboardItem]) -> [OriginalPasteboardItem] {
        items.compactMap { $0.f_10037c9a8() }.map(OriginalPasteboardItem.f_10037c6d4)
    }

    public static func f_100383a0c(separator: String, contents: [NSAttributedString]) -> NSMutableAttributedString {
        let result = NSMutableAttributedString(string: "")
        for content in contents {
            if !result.string.isEmpty { result.append(NSAttributedString(string: separator)) }
            result.append(content)
        }
        return result
    }

    public static func f_100381fdc(_ content: NSAttributedString) -> Data? {
        try? content.data(from: NSRange(location: 0, length: content.length), documentAttributes: [
            .documentType: NSAttributedString.DocumentType.rtf,
            .characterEncoding: String.Encoding.utf8
        ])
    }
}
