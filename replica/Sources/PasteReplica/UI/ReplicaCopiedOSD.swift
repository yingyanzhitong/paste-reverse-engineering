import AppKit
import PasteReplicaCore
import QuartzCore
import SwiftUI

/// The copied-only branch of the recovered OSD. Optional subtitle/action remain separate contracts.
@MainActor
enum ReplicaCopiedOSD {
    static func showCopied() {
        // The original controller enqueues its presenter on MainActor rather than presenting inline.
        Task { @MainActor in
            let content = NSHostingView(rootView: CopiedContent())
            let effect = NSVisualEffectView()
            effect.wantsLayer = true
            effect.layer?.cornerRadius = 20
            effect.material = .init(rawValue: 13)!
            effect.blendingMode = .behindWindow
            effect.state = .active
            effect.autoresizingMask = [.width, .height]
            content.translatesAutoresizingMaskIntoConstraints = false
            effect.addSubview(content)
            NSLayoutConstraint.activate([
                content.topAnchor.constraint(equalTo: effect.topAnchor),
                content.bottomAnchor.constraint(equalTo: effect.bottomAnchor),
                content.leadingAnchor.constraint(equalTo: effect.leadingAnchor),
                content.trailingAnchor.constraint(equalTo: effect.trailingAnchor),
                content.widthAnchor.constraint(equalToConstant: 200),
                content.heightAnchor.constraint(equalToConstant: 200)
            ])
            let window = NSWindow(contentRect: .zero, styleMask: .borderless,
                                  backing: .buffered, defer: false)
            window.level = .init(rawValue: 1000)
            window.backgroundColor = .clear
            window.contentView = effect
            window.layoutIfNeeded()
            window.center()
            if let screen = NSScreen.main {
                window.setFrameOrigin(.init(x: window.frame.origin.x, y: screen.frame.minY + 140))
            }
            window.orderFrontRegardless()
            // Each presentation owns its window through both callbacks; an older fade cannot hide a newer OSD.
            DispatchQueue.main.asyncAfter(deadline: .now() + 1) {
                NSAnimationContext.runAnimationGroup { context in
                    context.duration = 0.5
                    context.timingFunction = CAMediaTimingFunction(name: .easeOut)
                    context.allowsImplicitAnimation = true
                    window.animator().alphaValue = 0
                } completionHandler: {
                    MainActor.assumeIsolated { window.orderOut(nil) }
                }
            }
        }
    }

    private struct CopiedContent: View {
        var body: some View {
            VStack(spacing: 16) {
                Image(systemName: "checkmark")
                    .renderingMode(.template)
                    .font(.system(size: 86))
                VStack(spacing: 4) {
                    Text(String(localized: OriginalPreviewLocalization.f_1001c482c()))
                        .font(.title)
                }
            }
            .foregroundStyle(.secondary)
        }
    }
}
