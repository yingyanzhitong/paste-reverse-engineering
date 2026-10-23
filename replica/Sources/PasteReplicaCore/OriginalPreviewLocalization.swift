import Foundation

/// Recovered Localizable keys use the platform locale and bundle fallback behavior.
public enum OriginalPreviewLocalization {
    private static let resourceBundle: Bundle = {
        if let url = Bundle.main.resourceURL?.appendingPathComponent("PasteReplica_PasteReplicaCore.bundle"),
           let bundle = Bundle(url: url) { return bundle }
        return Bundle.module
    }()

    private static func resource(_ key: String) -> LocalizedStringResource {
        LocalizedStringResource(String.LocalizationValue(stringLiteral: key),
                                table: "Localizable", locale: .current,
                                bundle: .atURL(resourceBundle.bundleURL))
    }

    public static func f_1001bf288() -> LocalizedStringResource {
        resource("edit-item.toolbar.text.bold")
    }

    public static func f_1001bf408() -> LocalizedStringResource {
        resource("edit-item.toolbar.text.italic")
    }

    public static func f_1001bf588() -> LocalizedStringResource {
        resource("edit-item.toolbar.text.strikethrough")
    }

    public static func f_1001bf708() -> LocalizedStringResource {
        resource("edit-item.toolbar.text.underline")
    }

    public static func f_1001bf108() -> LocalizedStringResource {
        resource("edit-item.toolbar.save-changes")
    }

    public static func f_1001c3908() -> LocalizedStringResource {
        resource("general.action.save")
    }

    public static func f_1001c0788() -> LocalizedStringResource {
        resource("general.action.cancel")
    }

    public static func f_1001be988() -> LocalizedStringResource {
        resource("edit-item.toolbar.discard-changes")
    }

    public static func f_1001c1688() -> LocalizedStringResource {
        resource("general.action.edit")
    }

    public static func f_1001c3188() -> LocalizedStringResource {
        resource("general.action.restart-paste")
    }

    public static func f_1001bdd88() -> LocalizedStringResource {
        resource("diagnostics.start.title")
    }

    public static func f_1001bdc08() -> LocalizedStringResource {
        resource("diagnostics.start.message")
    }

    public static func f_1001be088() -> LocalizedStringResource {
        resource("diagnostics.stop.title")
    }

    public static func f_1001bdf08() -> LocalizedStringResource {
        resource("diagnostics.stop.message")
    }

    public static func f_1001bda88() -> LocalizedStringResource {
        resource("diagnostics.action.stop-and-copy-logs")
    }

}
