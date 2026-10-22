import Foundation

public enum ClipboardKind: String, Codable, CaseIterable {
    case text, link, image, files, richText, color, unknown

    public var displayName: String {
        switch self {
        case .text: return "文本"
        case .link: return "链接"
        case .image: return "图片"
        case .files: return "文件"
        case .richText: return "富文本"
        case .color: return "颜色"
        case .unknown: return "其他"
        }
    }
}

public struct ClipboardItem: Identifiable, Codable, Equatable {
    public var id: UUID
    public var createdAt: Date
    public var updatedAt: Date
    public var title: String
    public var kind: ClipboardKind
    public var plainText: String?
    public var sourceName: String
    public var sourceBundleID: String?
    public var sourceDevice: String
    public var isInHistory: Bool
    public var payloads: [String: Data]
    public var pinboardIDs: Set<UUID>
    public var isDeleted: Bool

    public init(id: UUID = UUID(), createdAt: Date = Date(), updatedAt: Date? = nil,
                title: String = "", kind: ClipboardKind = .text, plainText: String? = nil,
                sourceName: String = "Paste Replica", sourceBundleID: String? = nil,
                payloads: [String: Data] = [:], pinboardIDs: Set<UUID> = [], isDeleted: Bool = false,
                sourceDevice: String = "此Mac", isInHistory: Bool = true) {
        self.id = id
        self.createdAt = createdAt
        self.updatedAt = updatedAt ?? createdAt
        self.title = title
        self.kind = kind
        self.plainText = plainText
        self.sourceName = sourceName
        self.sourceBundleID = sourceBundleID
        self.payloads = payloads
        self.pinboardIDs = pinboardIDs
        self.isDeleted = isDeleted
        self.sourceDevice = sourceDevice
        self.isInHistory = isInHistory
    }
}

public struct Pinboard: Identifiable, Codable, Equatable {
    public var id: UUID
    public var name: String
    public var colorHex: String
    public var sortOrder: Int

    public init(id: UUID = UUID(), name: String = "新建 Pinboard", colorHex: String = "#FF9500", sortOrder: Int = 0) {
        self.id = id
        self.name = name
        self.colorHex = colorHex
        self.sortOrder = sortOrder
    }
}

public struct AppPreferences: Codable, Equatable {
    public var historyLimit: Int
    public var isMonitoringPaused: Bool
    public var pauseUntil: Date?
    public var excludedBundleIDs: [String]
    public var ignoreConcealedContent: Bool
    public var playSounds: Bool
    public var appearance: String
    public var panelHeight: Double
    public var launchAtLogin: Bool
    public var pasteToActiveApp: Bool
    public var alwaysPastePlainText: Bool
    public var historyRetentionDays: Int

    public init(historyLimit: Int = 1000, isMonitoringPaused: Bool = false, pauseUntil: Date? = nil,
                excludedBundleIDs: [String] = [], ignoreConcealedContent: Bool = true,
                playSounds: Bool = false, appearance: String = "system", panelHeight: Double = 332,
                launchAtLogin: Bool = false, pasteToActiveApp: Bool = true, alwaysPastePlainText: Bool = false,
                historyRetentionDays: Int = 0) {
        self.historyLimit = historyLimit
        self.isMonitoringPaused = isMonitoringPaused
        self.pauseUntil = pauseUntil
        self.excludedBundleIDs = excludedBundleIDs
        self.ignoreConcealedContent = ignoreConcealedContent
        self.playSounds = playSounds
        self.appearance = appearance
        self.panelHeight = panelHeight
        self.launchAtLogin = launchAtLogin
        self.pasteToActiveApp = pasteToActiveApp
        self.alwaysPastePlainText = alwaysPastePlainText
        self.historyRetentionDays = historyRetentionDays
    }

    private enum CodingKeys: String, CodingKey {
        case historyLimit, isMonitoringPaused, pauseUntil, excludedBundleIDs, ignoreConcealedContent
        case playSounds, appearance, panelHeight, launchAtLogin, pasteToActiveApp, alwaysPastePlainText, historyRetentionDays
    }

    public init(from decoder: Decoder) throws {
        let values = try decoder.container(keyedBy: CodingKeys.self)
        self.init(historyLimit: try values.decodeIfPresent(Int.self, forKey: .historyLimit) ?? 1000,
                  isMonitoringPaused: try values.decodeIfPresent(Bool.self, forKey: .isMonitoringPaused) ?? false,
                  pauseUntil: try values.decodeIfPresent(Date.self, forKey: .pauseUntil),
                  excludedBundleIDs: try values.decodeIfPresent([String].self, forKey: .excludedBundleIDs) ?? [],
                  ignoreConcealedContent: try values.decodeIfPresent(Bool.self, forKey: .ignoreConcealedContent) ?? true,
                  playSounds: try values.decodeIfPresent(Bool.self, forKey: .playSounds) ?? false,
                  appearance: try values.decodeIfPresent(String.self, forKey: .appearance) ?? "system",
                  panelHeight: try values.decodeIfPresent(Double.self, forKey: .panelHeight) ?? 332,
                  launchAtLogin: try values.decodeIfPresent(Bool.self, forKey: .launchAtLogin) ?? false,
                  pasteToActiveApp: try values.decodeIfPresent(Bool.self, forKey: .pasteToActiveApp) ?? true,
                  alwaysPastePlainText: try values.decodeIfPresent(Bool.self, forKey: .alwaysPastePlainText) ?? false,
                  historyRetentionDays: try values.decodeIfPresent(Int.self, forKey: .historyRetentionDays) ?? 0)
    }
}

public enum ClipboardStoreError: LocalizedError {
    case itemNotFound, pinboardNotFound, missingPlainText, pasteboardWriteFailed
    case invalidPinboardName, unsupportedArchiveVersion, duplicateIdentifiers

    public var errorDescription: String? {
        switch self {
        case .itemNotFound: return "未找到剪贴板项目。"
        case .pinboardNotFound: return "未找到 Pinboard。"
        case .missingPlainText: return "此项目没有可用的纯文本。"
        case .pasteboardWriteFailed: return "写入剪贴板失败。"
        case .invalidPinboardName: return "Pinboard 名称不能为空。"
        case .unsupportedArchiveVersion: return "不支持此存档版本。"
        case .duplicateIdentifiers: return "存档中包含重复标识符。"
        }
    }
}
