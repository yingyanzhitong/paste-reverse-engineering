import AppKit

public extension OriginalDependencyValues {
    var shortcutDiagnostic: (OriginalShortcutDiagnostic) -> Void {
        OriginalGlobalShortcutMonitor.writeDiagnostic
    }

    var shortcutValidator: @MainActor (OriginalShortcutValue) -> Error? {
        { shortcut in
            guard let message = OriginalShortcutValidation.f_1001ebce4(shortcut: shortcut, menu: NSApp.mainMenu)
            else { return nil }
            return OriginalShortcutRecorderError(message)
        }
    }
}
