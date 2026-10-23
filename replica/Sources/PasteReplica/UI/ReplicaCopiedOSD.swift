import AppKit
import PasteReplicaCore
import QuartzCore
import SwiftUI

/// Recovered local OSD presentation. The original optional action remains a separate contract.
@MainActor
enum ReplicaCopiedOSD {
    static func showCopied() {
        show(symbolName: "checkmark", title: String(localized: OriginalPreviewLocalization.f_1001c482c()))
    }

    static func showPaused(resumeDate: Date?) {
        let subtitle: String?
        if let resumeDate {
            let formatter = DateFormatter()
            formatter.dateFormat = "HH:mm"
            subtitle = String(localized: OriginalPreviewLocalization.f_1001e6c18(formatter.string(from: resumeDate)))
        } else { subtitle = nil }
        show(symbolName: "pause", title: String(localized: OriginalPreviewLocalization.f_1001c5838()),
             subtitle: subtitle)
    }

    static func showResumed() {
        show(symbolName: "arrow.clockwise", title: String(localized: OriginalPreviewLocalization.f_1001c59b8()))
    }

    private static func show(symbolName: String, title: String?, subtitle: String? = nil) {
        // The original controller enqueues its presenter on MainActor rather than presenting inline.
        Task { @MainActor in
            let content = NSHostingView(rootView: Content(symbolName: symbolName, title: title, subtitle: subtitle))
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

    private struct Content: View {
        let symbolName: String
        let title: String?
        let subtitle: String?

        var body: some View {
            VStack(spacing: 16) {
                Image(systemName: symbolName)
                    .renderingMode(.template)
                    .font(.system(size: 86))
                VStack(spacing: 4) {
                    if let title { Text(title).font(.title) }
                    if let subtitle { Text(subtitle).font(.body) }
                }
            }
            .foregroundStyle(.secondary)
        }
    }
}
