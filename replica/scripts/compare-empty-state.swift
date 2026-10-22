import AppKit
import Foundation

// Compare already captured, same-size empty-state screenshots. No UI access or image resizing.
guard CommandLine.arguments.count == 3,
      let referenceData = try? Data(contentsOf: URL(fileURLWithPath: CommandLine.arguments[1])),
      let replicaData = try? Data(contentsOf: URL(fileURLWithPath: CommandLine.arguments[2])),
      let reference = NSBitmapImageRep(data: referenceData),
      let replica = NSBitmapImageRep(data: replicaData),
      reference.pixelsWide == replica.pixelsWide,
      reference.pixelsHigh == replica.pixelsHigh else {
    fputs("Usage: compare-empty-state reference.png replica.png (same dimensions required)\n", stderr)
    exit(1)
}
var total = 0.0
var changed = 0
var samples = 0
for y in stride(from: 0, to: reference.pixelsHigh, by: 2) {
    for x in stride(from: 0, to: reference.pixelsWide, by: 2) {
        guard let a = reference.colorAt(x: x, y: y)?.usingColorSpace(.deviceRGB),
              let b = replica.colorAt(x: x, y: y)?.usingColorSpace(.deviceRGB) else { continue }
        let distances = [abs(a.redComponent - b.redComponent), abs(a.greenComponent - b.greenComponent),
                         abs(a.blueComponent - b.blueComponent)]
        total += distances.reduce(0, +) / 3
        if distances.max()! > 2.0 / 255.0 { changed += 1 }
        samples += 1
    }
}
let result: [String: Any] = ["width": reference.pixelsWide, "height": reference.pixelsHigh,
    "sample_stride_pixels": 2, "samples": samples, "mean_absolute_channel_error_0_255": total / Double(samples) * 255,
    "fraction_differing_over_2_levels": Double(changed) / Double(samples),
    "pixel_identical": changed == 0 && total == 0,
    "scope": "Empty search screenshots only. Focus, cursor overlay, blur and renderer differences included; no full UI equivalence claim."]
let data = try JSONSerialization.data(withJSONObject: result, options: [.prettyPrinted, .sortedKeys])
print(String(decoding: data, as: UTF8.self))
