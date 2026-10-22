import AppKit

@MainActor
enum SourceAppColor {
    private static var cache: [String: NSColor] = [:]

    static func color(bundleID: String?, name: String) -> NSColor {
        let key = bundleID ?? name
        if let cached = cache[key] { return cached }
        let observed: [String: UInt32] = ["com.google.Chrome": 0x4285F4, "com.tencent.qq": 0x00A3F5]
        let result: NSColor
        if let value = bundleID.flatMap({ observed[$0] }) {
            result = NSColor(srgbRed: Double((value >> 16) & 255) / 255,
                             green: Double((value >> 8) & 255) / 255, blue: Double(value & 255) / 255, alpha: 1)
        } else if let bundleID, let url = NSWorkspace.shared.urlForApplication(withBundleIdentifier: bundleID),
                  let color = prominentColor(in: NSWorkspace.shared.icon(forFile: url.path)) {
            result = color
        } else { result = NSColor(srgbRed: 0.55, green: 0.65, blue: 0.71, alpha: 1) }
        cache[key] = result
        return result
    }

    private static func prominentColor(in image: NSImage) -> NSColor? {
        guard let cgImage = image.cgImage(forProposedRect: nil, context: nil, hints: nil) else { return nil }
        let bitmap = NSBitmapImageRep(cgImage: cgImage)
        var buckets = Array(repeating: (weight: 0.0, red: 0.0, green: 0.0, blue: 0.0), count: 36)
        for y in stride(from: 0, to: bitmap.pixelsHigh, by: max(1, bitmap.pixelsHigh / 48)) {
            for x in stride(from: 0, to: bitmap.pixelsWide, by: max(1, bitmap.pixelsWide / 48)) {
                guard let color = bitmap.colorAt(x: x, y: y)?.usingColorSpace(.deviceRGB), color.alphaComponent > 0.5,
                      color.saturationComponent > 0.3, color.brightnessComponent > 0.35 else { continue }
                let index = min(35, Int(color.hueComponent * 36))
                let weight = color.alphaComponent * color.saturationComponent
                buckets[index].weight += weight
                buckets[index].red += color.redComponent * weight
                buckets[index].green += color.greenComponent * weight
                buckets[index].blue += color.blueComponent * weight
            }
        }
        guard let winner = buckets.max(by: { $0.weight < $1.weight }), winner.weight > 0 else { return nil }
        return NSColor(srgbRed: winner.red / winner.weight, green: winner.green / winner.weight,
                       blue: winner.blue / winner.weight, alpha: 1)
    }
}
