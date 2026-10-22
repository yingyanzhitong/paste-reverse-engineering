# 原生复刻实现契约

参考对象是本机 Paste 6.6.6。复刻与原版使用独立 bundle ID、独立数据目录；REA 的原始证据继续保留在根目录 `.local/`。不把用户的历史内容、账号或原版截图提交到公开仓库。

## 窗口与命令

应用类型：菜单栏剪贴板工具。主要窗口是屏幕底部横向卡片面板；另有设置、编辑/预览、Paste Stack 窗口。

实际观察：原版面板在当前屏幕逻辑大小约 1512×332，外边距约 8，外圆角约 24。顶部搜索栏居中，下面横向卡片约 232×232，间隔约 24；卡片有 48 高彩色标题区、来源应用图标、内容区、底部字符数/链接摘要，选中项有约 4 的灰色外描边。空搜索结果中央显示“无结果”。正常分组栏包含“剪贴板”“实用链接”，带新建 Pinboard、历史/Stack、暂停和更多入口。

主要命令：搜索 ⌘F，新文本 ⌘N，新 Pinboard ⇧⌘N，设置 ⌘,，退出 ⌘Q，方向键选择，Space 预览，Return 粘贴，⌘Return 纯文本粘贴，Delete 删除，Escape 关闭。全局默认 ⇧⌘V；必须处理原版已占用的冲突，不修改原版的设置。

## 公共核心 API（三个实现任务共用）

模块 `PasteReplicaCore`，macOS 14+，Swift 5 语言模式。核心服务在 MainActor，支持 Combine ObservableObject。

- `ClipboardKind: String, Codable, CaseIterable`：`text`, `link`, `image`, `files`, `richText`, `color`, `unknown`；提供 `displayName: String`。
- `ClipboardItem: Identifiable, Codable, Equatable`：`id: UUID`, `createdAt: Date`, `updatedAt: Date`, `title: String`, `kind: ClipboardKind`, `plainText: String?`, `sourceName: String`, `sourceBundleID: String?`, `payloads: [String: Data]`, `pinboardIDs: Set<UUID>`, `isDeleted: Bool`。提供有默认参数的 public initializer。
- `Pinboard: Identifiable, Codable, Equatable`：`id: UUID`, `name: String`, `colorHex: String`, `sortOrder: Int`。
- `AppPreferences: Codable, Equatable`：`historyLimit: Int`, `isMonitoringPaused: Bool`, `pauseUntil: Date?`, `excludedBundleIDs: [String]`, `ignoreConcealedContent: Bool`, `playSounds: Bool`, `appearance: String`（system/light/dark）, `panelHeight: Double`, `launchAtLogin: Bool`。提供 public 默认构造。
- `@MainActor final class ClipboardStore: ObservableObject`：public `@Published items`, `pinboards`, `preferences`，`init(directoryURL: URL) throws`；`static defaultDirectoryURL: URL`。
- store 方法：`add(_ item: ClipboardItem) throws -> UUID`；`save() throws`；`reload() throws`；`search(query: String, kind: ClipboardKind? = nil, pinboardID: UUID? = nil, includeDeleted: Bool = false) -> [ClipboardItem]`；`updateItem(id: UUID, title: String?, text: String?) throws`；`delete(ids: Set<UUID>) throws`；`restore(ids: Set<UUID>) throws`；`createPinboard(name: String, colorHex: String) throws -> Pinboard`；`renamePinboard(id: UUID, name: String) throws`；`removePinboard(id: UUID) throws`；`assign(ids: Set<UUID>, to pinboardID: UUID?) throws`（nil 移除所有分组，不删除项目）；`exportArchive(to: URL) throws`；`importArchive(from: URL) throws`。
- store 剪贴板方法：`capture(pasteboard: NSPasteboard, sourceName: String, sourceBundleID: String?) throws -> UUID?`；`writeToPasteboard(id: UUID, pasteboard: NSPasteboard, plainTextOnly: Bool) throws`。
- `@MainActor final class ClipboardMonitor`：`init(store: ClipboardStore, pasteboard: NSPasteboard = .general)`；`start()`、`stop()`、`poll()`，暂停、排除来源、隐藏/临时类型不采集，防止复刻写回形成循环。

## UI 对接

App 目标中提供 `@MainActor final class ReplicaUIController`：`init(store: ClipboardStore)`；`showPanel()`、`hidePanel()`、`togglePanel()`、`showSettings()`、`newTextItem()`、`showStack()`、`copySelection(plainTextOnly: Bool)`、`pasteSelection(plainTextOnly: Bool)`。

public/internal 属性 `pasteHandler: ((UUID, Bool) -> Void)?` 由 AppDelegate 注入负责还原前台目标、写剪贴板及直接粘贴；`panel: NSPanel` 用于生命周期、截图及键盘测试。UI 内部视图与状态由 UI 任务负责，不定义第二个 @main/AppDelegate。

## 状态、存储与可访问性

持久化数据独立于原版，写入采用原子方式，考虑 App 与 MCP 两进程同目录操作；MCP 每次操作前刷新。数据文件最小必要权限。图片/RTF/HTML/文件 URL 需要保留原剪贴板 representation，文本粘贴模式只导出文本。

可访问性：所有主要入口有中文 accessibilityLabel，卡片有来源、类型、文本描述；键盘可达；支持系统深浅色、减少动态效果和字体尺寸。测试默认使用具名私有 NSPasteboard 和临时数据目录，避免测试依赖用户历史。

## 验收

Swift Package 能构建和运行；核心持久化/搜索/去重/分组/删除恢复/多 representation/安全类型过滤/导入导出有真实自动化测试；App 与 stdio MCP 实际启动验证；REA 对原版及复刻进行原生窗口观察，对可控空状态和合成内容状态进行布局与功能对照。未经过原版受控观察的语义不得写作“一比一通过”。
