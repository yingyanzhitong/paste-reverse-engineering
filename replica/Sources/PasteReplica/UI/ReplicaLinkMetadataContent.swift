import AppKit
import PasteReplicaCore
import SwiftUI

/// Local stored link values. Original card configuration and outer layout remain separate.
@MainActor
struct ReplicaLinkMetadataContent: View {
    let metadata: OriginalLinkPreviewMetadata
    let compact: Bool

    var body: some View {
        let image = metadata.imageData.flatMap(NSImage.init(data:))
        VStack(alignment: .leading, spacing: 0) {
            if let image, image.size.width != image.size.height {
                Image(nsImage: image).resizable().scaledToFit()
            } else if let icon = image ?? metadata.iconData.flatMap(NSImage.init(data:)) ?? fallbackIcon() {
                Image(nsImage: icon).resizable().scaledToFit()
                    .frame(width: 42, height: 42)
            }
            if let name = metadata.name {
                Text(name)
                    .font(Font(OriginalSearchAppearance.f_1001ff928()))
                    .foregroundStyle(Color(nsColor: OriginalToolbarAppearance.labelForeground()))
            }
            // The original fullsize card uses f_1003189b0; its complete formatter is not restored here.
            Text(metadata.url.absoluteString)
                .foregroundStyle(Color(nsColor: OriginalToolbarAppearance.secondaryForeground()))
        }
        .help(metadata.url.absoluteString)
    }

    private func fallbackIcon() -> NSImage? {
        let image = NSImage(systemSymbolName: "safari", accessibilityDescription: nil)
            ?? NSImage(systemSymbolName: "questionmark.square", accessibilityDescription: nil)!
        let configuration = NSImage.SymbolConfiguration(pointSize: 42, weight: .regular)
            .applying(NSImage.SymbolConfiguration(paletteColors: [OriginalToolbarAppearance.secondaryForeground()]))
        return image.withSymbolConfiguration(configuration)
    }
}
