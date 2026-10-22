# 静态分析记录

分析日期：2026-10-22。目标：本机 `/Applications/Paste.app`，版本 6.6.6，构建 29766850，bundle ID 为 `com.wiheads.paste`。

## 方法与范围

原安装包含 x86_64、arm64 两种架构。本次用 Apple `lipo` 提取 arm64 副本，使用 REA 6.7.0 的 `inspect_macho`、`inspect_native_dispatch_metadata`、`list_procedures` 和 `batch_decompile`，原生反编译引擎为 Ghidra 12.1.4。处理主程序、stdio MCP 桥接程序和登录助手；不展开单独的第三方动态库实现。

Ghidra 使用默认自动分析配置，完整函数清单包含本地实现、导入库外部声明及本地跳板。批量导出的范围是所有识别到的本地函数（包含跳板），排除只存在导入声明、无本地实现的外部函数。各目标的具体统计见各自的 `coverage.json`。这表示对已识别函数的导出覆盖，不保证所有机器码都被识别为函数，也不代表伪代码与原始源码语义完全一致。

## 导出结果

截至 2026-10-22，已有产物的核对结果如下：

| 目标 | 识别函数总数 | 排除外部声明 | 本地函数（含跳板） | 其中跳板 | 成功 | 失败 |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| `Paste` | 84,170 | 3,465 | 80,705 | 12,935 | 80,703 | 2 |
| `paste-mcp-stdio` | 342 | 121 | 221 | 121 | 221 | 0 |
| `Paste-Helper` | 314 | 106 | 208 | 114 | 208 | 0 |
| 合计 | 84,826 | 3,692 | 81,134 | 13,170 | 81,132 | 2 |

三个目标的已识别本地函数均已尝试反编译。主程序的 `0x100ac35f8`、`0x100ac746c` 返回 `Ghidra Recoverable Error: Unable to find unique hash for varnode`，没有可用伪代码，失败数保留为 2。`decompiled/Paste/failures/<地址>.s` 为这两个地址附上 LLVM `llvm-objdump` 汇编片段，切片边界取对应地址至下一 Ghidra 函数入口，不宣称是完整语义函数体。边界与产物信息见 `Paste/assembly-fallbacks.json`。

`list_procedures` 的 MCP 返回可能超出 10 MiB 消息大小上限，脚本会根据 `resource_constraint` 中的 Evidence ID 调用 `export_evidence_bundle`，从本地完整 JSON 中读取对应记录；该恢复路径已实际验证。

`function-starts.json` 独立记录主程序 `LC_FUNCTION_STARTS` 有 74,585 个条目。它是 Mach-O 函数起始信息的参考值，与 Ghidra 的外部声明、跳板和分析识别范围不同，不用于推算主程序已导出函数数或机器码覆盖率。

## 可定位的应用结构

REA 的原生元数据解析得到 347 条 Objective-C 类/元类记录、107 条协议记录、948 条实例变量记录、742 条分派实现记录。`objc-classes.txt` 对其中非元类的 Swift 名称进行了解码。

| 方向 | 安装包中可观察的类型名称示例 |
| --- | --- |
| 主界面 | `Paste.MainWindowController`、`Paste.MainViewModel`、`Paste.ItemCollectionViewModel` |
| 搜索与筛选 | `Paste.SearchField`、`Paste.FilterBrowserViewModel`、`Paste.FilterSuggestionsMenu` |
| Paste Stack | `Paste.PasteStackWindowController`、`Paste.PasteStackViewController` |
| 隐私与暂停 | `Paste.PrivacySettingsViewModel`、`Paste.ScreensharingPrivacyManager`、`Paste.PausePasteManager` |
| 共享与同步界面 | `Paste.ItemsSharingPicker`、`Paste.SyncStatusItem` |
| UI 基础组件 | `PasteUI.CollectionView`、`PasteUI.WindowController` |

以上是元数据中实际出现的类型名称，用于索引；仅凭名称不能证明某条业务路径已经动态验证。

主程序有 5,525 条导入和 127 条导出符号记录、73 条动态库依赖记录。导出符号中仍能恢复部分 `PasteUI.CollectionView` 的属性访问器，大量业务函数需要依靠地址、Objective-C 方法表和调用关系继续识别。

## 限制

- Swift 优化、符号剥离、异步状态机和 Objective-C 动态分派影响类型与控制流恢复；`FUN_...`、`undefined` 和反编译警告均保留。
- 主程序自动分析日志还出现了不支持的 Objective-C 类型编码（`T`、`<`）和反编译器无法读取部分推导地址的警告。这些属于引擎恢复限制，成功生成某函数的伪代码并不消除这些限制。
- 主程序默认分析还记录了 Ghidra `InternalResultListener` 获取反编译结果时的 `ArrayIndexOutOfBoundsException`；分析继续运行。该异常属于反编译引擎限制，不能由原生元数据计数判断其影响范围。
- 原生元数据报告明确标记部分信息为 `partial`，包含无法解出的 ivar 偏移指针和 `max_records_reached` 记录预算限制；部分 Swift 元数据族标记为 `unsupported`。Swift 声明、协议一致性和分派表等记录未被本次元数据读取器完整恢复，详见 `native-dispatch.json` 的 `result.coverage`。上述记录数不是应用全部类型或方法的总数。
- 没有启动或注入 Paste，没有读取剪贴板数据库，也没有执行动态业务测试。
- 没有恢复原始工程结构、原始变量名、注释、资源源文件或可编译的 Swift 源码。

## 定位方式

先在 `native-dispatch.json` 中根据类名、selector 找到实现地址；对应目标的 `function-index.json` 包含该地址时，可定位到 `decompiled/<目标>/part-*.c`。`procedures.json` 保留 Ghidra 恢复的函数名、地址、外部声明和跳板目标；`coverage.json` 记录失败及引擎限制。两个失败地址没有伪代码索引，可通过 `Paste/assembly-fallbacks.json` 定位对应汇编片段。
