# 逐函数实现与验证

目标是为每个原版本地函数建立地址级契约、可运行实现和验证记录。免费使用，不依赖原厂账号，不实现联网同步与付费解锁。排除项也保留地址和逐项理由，不能直接从分母删除。

## 完整清单

`reports/function-implementation/summary.json` 与三个目标的分页 JSONL 覆盖全部 81,134 个本地地址。包括成功导出伪代码的 81,132 个和导出失败、仅有汇编补充的 2 个；本地跳板仍在清单中。外部 SDK 声明与本地跳板分开处理。

每条记录保留原始符号、地址、伪代码位置和 SHA-256、跳板目标、实现入口、测试入口及未完成细节。SHA-256 针对已导出的伪代码片段，不代表该片段恢复了原始源代码或完整机器码语义。

```sh
python3 scripts/function_ledger.py
python3 scripts/function_ledger.py --check
python3 scripts/function_ledger.py --lookup Paste:0x1002d576c
python3 -m unittest discover -s scripts/tests
```

人工审核与映射写入 `replica/function-map.json`；分页清单由脚本生成。按用户最新要求，先完成范围内全部代码迁移，迁移期间只编译及静态检查，之后统一功能回归。不能通过生成同名空函数、默认返回值或批量排除来增加完成数。

## 状态含义

| 状态 | 含义 |
| --- | --- |
| pending | 未完成逐地址审核和映射；即使所属功能已有实现，也不能自动算作该函数完成 |
| partial | 已定位实现，但仍有原版分支、错误类型、参数来源或测试缺口 |
| migrated | 源码迁移或复用已审核、接入实际调用路径并编译；纯 SDK 跳板另须通过真实二进制绑定校验。功能回归延后，不能当作已测试或等价通过 |
| implemented | 根据已恢复契约存在实际执行的实现；仍不等于原版与复刻逐函数等价通过 |
| verified | 有绑定该地址的原版机器码/复刻输入及逐用例比较结果，并绑定原版与当前源码摘要；只代表已列明契约及场景，一般功能测试不能使用此状态 |
| excluded_by_scope | 经逐地址审核确认属于用户排除的范围，并记录具体理由；不计入已实现 |

`migrated` 必须有逐地址静态迁移记录，绑定原版二进制、原版函数片段及当前实现源码摘要。现有验证文件继续保留为历史证据；相关文件修改后，不重跑功能测试来维持旧的 verified 标记，而是回到已迁移待回归状态。

`python3 scripts/function_ledger.py --require-migration-complete` 是功能回归前置检查。`validate.sh` 在构建、原版执行或任何功能测试之前调用它；存在 pending/partial 就退出，不会开始回归。MCP 测试继续排除。

Swift 运行库、系统 SDK、编译器生成的元数据函数与调用跳板可以委托对应系统实现，但必须保留逐地址映射和验证依据，不能将“系统提供”自动记为完成。原版机器码地址与复刻进程地址不相同；优化后的 Swift ABI 与 C 风格伪代码参数也可能不同，恢复依据及未确定项必须记录。

## 首批真实代码

- `OriginalStackFunctions.f_1000114fc`：主执行器上的窗口 key/main 返回 false；实际 Stack 面板调用。
- `f_1000114ec` / `f_1000114f4`：原版两个窗口选择器入口，分别接入 Stack 窗口的 main/key 覆盖。
- `OriginalStackWindowController.f_100011138`：包含 super 调用的 `windowDidLoad` 配置；实际 Stack 创建路径调用，迁移时仍读取旧复刻窗口位置。
- `OriginalStackFunctions.f_10008468c`：原地反转数组，保留 Swift Array 写时复制；实际队列反转调用。
- OCR 的 `f_1002d4738`、`f_1002d4830`、`f_1002d4ba0`、`f_1002d576c`：分离输入检查、Vision 请求、尺寸/缩略图/PNG 预处理、候选分词与置信度/位置框提取；实际识别与索引路径调用。

OCR 已增加词级位置框和持久化，尚未因此宣称原版图片文字选择 UI 已完全还原。空数据错误已通过原版执行恢复为 `invalidImageData`，NSError domain `PasteRecognition.OCRError`、code 0、空 userInfo。分词索引已直接对照重复词、标点、中英文和无候选场景；未测试场景仍不作等价承诺。兼容入口保持不缩小原图，地址级预处理入口接受显式最大尺寸，不能冒称这一默认值就是原版调用方默认值。

测试结果见 `reports/replica/function-contracts.json`。契约测试证明列出的场景，不把当前 81,134 个函数整体记为完成，也不将已有功能模块一对多映射当作所有函数都已实现。

- `OriginalStackTableController` 的 `f_100082b90`、`f_100083a20`、`f_100085230`、`f_100085670`：原生表格的高度约束缓存、延后动画提交、真实项目数与拒绝行选择。已接入 Stack 表格，保留既有项目右键操作。

## 先迁移后回归的搜索批次

`OriginalSearchCommands.f_10004867c` 保留 Enter/Escape 的可选回调及返回值。`OriginalSearchEditing` 新增六个地址：`0x10004795c` 文本修改提案、`0x100047d8c` 编辑选择器入口、`0x100047ea4` 选区通知、`0x100048058` 命令选择器入口、`0x100048128` 结束编辑通知、`0x1000482c8` 首 Unicode 标量读取。已由 `SearchEditor.swift` 中的原生 `NSTextView` 接入主面板；外层布局和筛选菜单仍有尚未迁移的函数，不能将本批视为完整 SearchField 迁移。

文本修改函数保留单字符附件先选中再删除的分支，光标位置按 UTF-16 长度计算；检测到换行后仅在提案中替换 CR/LF，其余换行标量保留。回调为空时允许 AppKit 原编辑，不擅自应用归一化提案。主面板当前使用普通文本，尚无附件筛选提案消费者；不额外模拟尚未恢复的调用方行为。

搜索首批记录时为 20/81,134。此后继续并行迁移，最新数量以 `reports/function-implementation/summary.json` 为准。静态迁移证据保存在 `reports/function-migration/`，当前安装仍是此前已发布的 0.7.0。

## 并行迁移与现有实现复用

2026-10-23 当前 0.8.0-dev.19 快照为 1,448 / 81,134：源码实现或复用 575 个、实际系统转发 873 个；另有5个已逐地址核定的范围排除，范围内剩余 79,681 个，其中 194 个 partial。两个地址保留摘要仍有效的历史差分记录。这些是逐地址证据数量，不是产品功能完成率；大量已有产品功能尚未获得原版全函数等价证据，不能据此说产品只实现了这一比例。

按用户最新要求，四智能体改为先集中核对已有功能和完整调用链：已有实现满足契约就直接复用，只补确认缺失或行为不同的部分。系统转发、薄包装、编译器生成代码按证据成组核对，不再以逐个重写地址推进。功能存在、源码契约迁移、功能回归和一比一验收分别记录；不能把一次静态检查说成全部函数已通过。整体目标保持 active，尚未执行本轮新的功能、UI 或 MCP 测试。

此前 0.8.0-dev.4 补共享依赖缓存、一次性配置、剪贴板 MD5 校验及去重接入、日志输出/诊断启动偏好、搜索筛选原符号、快捷键共享服务与错误类型、原生预览按钮和异步文本格式状态。17 个语言资源按已恢复词条接入，并补资源打包。稳定构建前后 88 份源码、配置和资源摘要一致，生成的 bundle accessor 也绑定构建。完整仓库事务、Sentry 本地副作用、actor 析构和部分父级 UI 工厂继续保留 partial。

本轮一页结论见 [concentrated-review.md](../reports/replica/concentrated-review.md)，集中快审明细见 [fast-coverage-audit.md](../reports/replica/fast-coverage-audit.md)：72 个行为单元绑定 85 份源码，32 项列明行为已有代码、37 项有差异或缺证据、1 项缺实现、2 项未核对。这不是原版完整产品的功能百分比，也不提升逐地址台账状态。

0.8.0-dev.5 先补确认缺口：真实筛选 Popover、多选同组 OR/跨组 AND、三列分组与胶囊条目、键盘和焦点返回；VisionKit 图片文字拖选与原生滚动缩放/居中；预览 Pin/分享和三项复数计数；原 ItemData 编解码与压缩导入。另修三个偏好保存丢失及多项后续图片不能进入 OCR。26 个偏好字段静态核对均有合并分支。稳定编译前后 112 份输入（78 份 Swift/配置、17 份 strings、17 份 stringsdict）摘要一致。

0.8.0-dev.6 继续复用现有实现：12 条剪贴板数据链核对未发现新的已证实问题，保持不动；补原五个日期筛选和固定日历范围，闭合非文本预览及脱离重建 factory，修正被拒绝快捷键的显示。稳定编译前后 114 份输入摘要一致；两个旧 SDK 转发因当前产物已不存在而撤回，不保留虚假完成数。

0.8.0-dev.7 将主界面查询接入实际 CoreSpotlight，恢复原两种查询构造、转义及匹配选项；索引完成后查询，取消旧请求并缓存未变化内容。图片补旋转、保存/取消、撤销/重做和尺寸，直接复用已有 PNG 编码器；颜色和链接补本地编辑与 metadata，保存使用类型明确的原子写入。纯文本多项恢复及同质多选属性文本/RTF 聚合已接实际写回路径。最终 release 编译用时 10.15 秒，120 份输入摘要前后一致；完整编译器复用审核见 [compiled-reuse-build24.json](../reports/function-migration/compiled-reuse-build24.json)。

0.8.0-dev.8 根据完整 arm64 中 FRINTM/FRINTP 修正日期编码的下界向下/上界向上取整，恢复相对日期标签重新匹配和原 medium 格式 fallback。图片补透明棋盘，文件补 Quick Look 非抢焦点子类、底栏和 Finder 按钮；图像恢复接临时文件 URL 及 24 小时清理。全部复用原已有 LayerBackedView、动态颜色、预览外壳和类型数据访问。稳定构建 124 份输入摘要一致，日志 18.83 秒、包装用时 20.85 秒；最新编译器完整体重审见 [compiled-reuse-build25.json](../reports/function-migration/compiled-reuse-build25.json)。

0.8.0-dev.9 新增 Objective-C 异常桥并接入实际锁内存储及归档读写，原 Swift Error、异常 name/reason 与无结果 trap 分开处理；原 LSDA、实际异常类型绑定及新桥 ARC/对象生命周期均经静态核对，见 [objc-exception-build26.json](../reports/function-migration/objc-exception-build26.json)。诊断菜单确认启动后复用原重启，停止后先建历史文件条目再恢复剪贴板；六个已有本地化方法直接复用，成功 toast 与完整实体仓库链保留缺口。依据真实协议 witness 修正文件/链接半屏、颜色四分之一屏、图片同比缩小，以及共用动态边框和圆角。最终编译 128 份输入（含 ObjC .m/.h）摘要一致，日志 19.09 秒、包装 20.82 秒；最新八项编译器复用完整体见 [compiled-reuse-build26.json](../reports/function-migration/compiled-reuse-build26.json)。未执行菜单重启、剪贴板写入或异常注入。

0.8.0-dev.10 补原 Character.isWhitespace 连续文本片段和空查询判断，接实际主界面查询、显示与 Escape/resign。恢复混合多选包含文本/链接时的 compactMap 聚合分支和纯文本来源元表示；普通复制及停止诊断的真实成功分支共用 copied-only 原生 OSD。快速旋转没有找到完整实际触发链，仍保留缺口，不增添推测 Header 按钮。最终构建 130 份输入摘要一致，日志 16.63 秒、包装 18.30 秒；最新编译器及异常捕获证明分别见 [compiled-reuse-build27.json](../reports/function-migration/compiled-reuse-build27.json) 与 [objc-exception-build27.json](../reports/function-migration/objc-exception-build27.json)。没有执行真实剪贴板、OSD、动画或功能回归。

0.8.0-dev.11 继续集中核查已有实现。真实属性片段和 U+FFFC 筛选附件接入原 `f_1002da16c`，按 raw 值去重、保留文本节点边界和原前后分组顺序，一次发布查询输入。日期投影原样移至共用 Selection，已有两条日期记录只更新真实引用、不重复计数。恢复链接原双位 options、空结果 clear/write 与多项分组；默认过滤列表已有原静态数组证据。OSD 复用现有窗口补手动暂停/恢复及已保存暂停时间字幕，完整 timer/action 链仍缺。最终构建 131 份输入摘要一致，日志 16.85 秒、包装 18.61 秒；当前完整编译与异常桥证据见 [compiled-reuse-build28.json](../reports/function-migration/compiled-reuse-build28.json) 和 [objc-exception-build28.json](../reports/function-migration/objc-exception-build28.json)。未执行产品或任何新功能测试，未打包或安装。

0.8.0-dev.12 修正独立暂停到期恢复：真实单次 Timer 到期即恢复监控，不再等待新剪贴板输入；取消重排、弱 owner、终止清理与实际 monitor.stop/start 已接。无日期字幕读取实际采集计时器状态，17 种语言补两个原词条。恢复后 ClosedState/提示音/rateApp 三消费者及共用原音效开关、声音素材差异已静态定位，事务/Undo/音效仍有缺口。搜索已定位编辑提案和选区→描述→异步建议任务链，当前无完整消费者，保留 partial；图片对象传递满足已核部分，未重复改写。最终构建 131 份输入摘要一致，日志 15.97 秒、包装 17.81 秒；当前完整体证据见 [compiled-reuse-build29.json](../reports/function-migration/compiled-reuse-build29.json) 和 [objc-exception-build29.json](../reports/function-migration/objc-exception-build29.json)。本轮没有运行产品或功能回归，尚未验证真实计时器/音效/粘贴交互。

0.8.0-dev.13 将编辑提案接原归一化，并恢复独立的节点/UTF-16 选区历史。真实 Undo/Redo 回放筛选附件和原节点边界；按筛选数量决定即时分组或 0.4 秒 Timer 分组，保留异步 weak/MainActor flush、redo 不 flush、reset 不改 current 等原边界。历史六个方法静态合同完成，整个输入协调器继续 partial；原 anchor 上下文值已恢复但真实建议消费者未闭合。建议 provider 已定位实际 CoreData 来源与匹配/排序规则，不用 JSON 全候选替代。成功写回后接历史事务、逆序逐项时间更新及共享 Undo 清理，原实体复制/持久 token/通知/ClosedState 仍缺。最终构建 133 份输入摘要一致，日志 17.60 秒、包装 19.65 秒；证据见 [compiled-reuse-build30.json](../reports/function-migration/compiled-reuse-build30.json) 和 [objc-exception-build30.json](../reports/function-migration/objc-exception-build30.json)。没有运行功能回归或实际剪贴板、Undo、计时器交互。

0.8.0-dev.14 已将真实选区 context、分组 provider、原 TextKit2 anchor 几何、独立 child NSWindow 及 captured-context 接受操作连接。原候选顺序/过滤/限额/日期匹配与类型原值已恢复；普通筛选统一 TitleCase，当前索引 cd 匹配兼容。父链仍 partial：JSON 与原 CoreData 的身份/关系不同，通用整 query 建议和菜单完整视觉/高亮/标题对齐/Scroller/DI 尚有缺口。逐项已连行为和限制见 [search-suggestions-static-audit.json](../reports/replica/search-suggestions-static-audit.json)。build31 的 Swift AppKit 改名问题已修正，最终 build32 的 137 份输入摘要一致，日志 10.02 秒、包装 11.20 秒；完整体证据见 [compiled-reuse-build32.json](../reports/function-migration/compiled-reuse-build32.json) 和 [objc-exception-build32.json](../reports/function-migration/objc-exception-build32.json)。未执行菜单、候选、焦点、键盘或其他功能回归。

0.8.0-dev.15 按功能调用链集中检查，复用已满足契约的实现。根据原 sourceApplication.name → SearchableItemEntity → pasteApp 证据，将应用建议、普通筛选与索引统一为 sourceName；bundleID 保留作元数据和现有排除策略。建议菜单改为真实 local keyDown monitor，避免主面板提前吞键；初始无选中，端点停留，保留原全部 raw key 分支和 modifier 行为。鼠标冷却使用弱引用 DispatchWorkItem，下一次非空移动取消旧任务，100ms 后清空，刷新列表不提前解除。接受只有节点实际变化并完成发布后关闭，程序性选区不重入提前清理。行样式复用原字体/动态颜色/匹配算法，恢复单标题、省略、18点图标、间距/内距/圆角和首行标题定位。完整实体持久化、stored icon、Scroller、通用 query/addMode1 及 DI 生命周期继续部分实现。

本轮 build33 为中间成功快照，经静态复审修正冷却后，最终 build34 release 编译通过：137 份输入前后摘要一致，日志 9.56 秒、包装 10.57 秒。原有编译器/析构、缓存、异常桥按完整当前机器码及绑定重审；SDK 转发新增5、撤回1，源码新完整计数0。公开证据见 [compiled-reuse-build34.json](../reports/function-migration/compiled-reuse-build34.json) 与 [objc-exception-build34.json](../reports/function-migration/objc-exception-build34.json)。未执行新功能或单元测试、原版动态、UI 或 MCP；未打包安装，当前安装仍0.7.0。集中核对报告将已有路径、实际差异和待验证项分开，避免为过期报告重复开发。

0.8.0-dev.16 继续沿真实消费者链修正，不增加重复地址计数。恢复成功后将 writer 已更新的 captureState.changeCount 保存到同一个注入 defaults，再进入 recency 事务及共享 Undo。颜色提交删除多余旧色回填，保留原 nonthrowing 外层结束顺序。成功保存暂停/恢复偏好并提交 OSD 后，同步停启实际 monitor，外部偏好观察及 timer 去重保持。EXIF rawValue 的旧回退缺口经当前优化 SIL 及原版/产品实际调用与 VisionKit 绑定证据证明为误判，撤回该差异，保持异步/actor 父 partial；见 [exif-orientation-static-audit.json](../reports/replica/exif-orientation-static-audit.json)。最终 build35 的137输入前后摘要一致，日志17.74秒、包装19.14秒；既有编译器/析构、共享缓存及异常桥绑定当前完整体，[compiled-reuse-build35.json](../reports/function-migration/compiled-reuse-build35.json) 与 [objc-exception-build35.json](../reports/function-migration/objc-exception-build35.json) 留证。未运行新产品或测试，未打包安装。

0.8.0-dev.17 将真实粘贴消费者的固定键码9改为原当前ASCII-capable布局的首个原始字符v扫描，保留原4 UTF16缓冲、actionDisplay、modifiers/options/deadState零值和首UniChar分支；没有匹配不创建事件，不宣称异步投递等于目标接受。原Share enabled的内容/文件可达门槛已接实际Header及同一picker转换。ClosedState原metadata解出仅history(tag1)执行特殊路由，现已满足的部分直接复用；图片正常metadata来自源NSImage逻辑尺寸，剩余rawPreview生成与缺失门槛继续partial。build36稳定编译138输入一致，日志18.75秒、包装20.48秒；[compiled-reuse-build36.json](../reports/function-migration/compiled-reuse-build36.json) 与 [objc-exception-build36.json](../reports/function-migration/objc-exception-build36.json) 绑定当前完整体及真实SDK/元数据。未运行新产品或测试。

范围排除单列于 [cloud-network-scope-exclusions.json](../reports/function-migration/cloud-network-scope-exclusions.json)，只包含明确逐地址审阅的五个CloudKit网络调用跳板；不由模块/类名前缀推定其他函数排除。`python3 scripts/scope_exclusions.py --check` 重新解析原版完整12字节、真实dyld绑定与原片段摘要，台账检查同步验证。排除项不是实现或等价通过，总分母仍81,134，不删除本地类型/metadata/取消任务/仓库事务/日志或任意调用方。

0.8.0-dev.18 将Stack热键消费顺序、关闭后10秒保留搜索及实际创建/恢复事件消费者接回原证据；不再用发送Bool决定消费或重开立即清空查询。类型默认标题及空title初值使用原资源，17语言119值静态相同。复制模式OSD点击延迟0.1秒真实写入direct paste偏好，完整Accessibility/gesture/错误状态仍partial。图片元数据恢复280×230缩略、alpha采样/PNG或JPEG0.6成功门槛及原图逻辑尺寸，真实生成/配对写入在add/capture/去重/导入/update-image，非image writer清空；consumer读取已存optional。旧数据缺失不强制迁移、nil返回零，typed Codable值不等同原rawPreview PropertyList格式；原父VM/持久化ABI仍partial。JPEG0.5编辑保存复用既有同helper，不重复计数。最终build37的140输入摘要一致，日志18.17秒/包装19.84秒；新增源码完整11=7资源helper+4图片生成helper，SDK6，合并33记录不当新增33。当前完整体证据 [compiled-reuse-build37.json](../reports/function-migration/compiled-reuse-build37.json) 与 [objc-exception-build37.json](../reports/function-migration/objc-exception-build37.json)。未启动产品或回归测试。

0.8.0-dev.19 沿标题/图片wire/权限三条既有链集中修正：普通capture不固化标题，nil/显式empty索引与本地化Header合同分开，去重保留已有值；本地Header不按Editable额外禁用。图片原13字段Stored及PropertyList/JSON wire接入实际rawPreview，坏raw不回退typed，其他内容投影及原Config/CoreData保持partial。权限真实订阅初始快照与1秒common Timer并去重，最终机器码确认临时owner先释放再读AX，纯28字节getter保留既有复用而非因完整service缺口降级。最终build39的142输入一致，日志7.85秒/包装8.63秒；无新增源码完整，SDK新增10无撤回。现有实现与原内部ABI不等同，0新增功能回归。当前证据见 [compiled-reuse-build39.json](../reports/function-migration/compiled-reuse-build39.json)、[objc-exception-build39.json](../reports/function-migration/objc-exception-build39.json)、[accessibility-getter-build39.json](../reports/function-migration/accessibility-getter-build39.json) 及 [标题与权限集中审计](../reports/replica/local-title-permission-static-audit.json)。

原搜索建议/自动 token 化、完整 query 序列化和反解析、Indexable provider、后台 actor/schema/批量恢复、原图片 ViewModel/优选尺寸/错误传播、原复制时文件大小及完整文件布局/VM、仓库事务、混合格式恢复及 token/repository/undo/DidRestore 副作用仍有差异。独立 CLI 的 ClipboardStore.search 保持原接口，不代表完整原 SearchService。既有 NSImage 跨 MainActor 异步分析警告仍保留在 partial 范围。四个 OCR 算法方法体未改，但外围图片数据读取使整文件摘要改变，旧验证转为历史；不以重新写摘要冒称当前功能通过。没有运行新的功能、单测、原版动态、UI 或 MCP 测试，尚未一比一验收。

- 搜索输入接入原生 TextKit 2、占位标签、输入属性刷新、选区/布局/聚焦策略及动态颜色/字体访问器。明确区分颜色存储槽地址与颜色值；外层聚焦环坐标传播、附件状态和筛选界面仍有未迁移函数。
- 剪贴板恢复有序类型列表、Data/UTF-8 读写、文本及图片表示优先级、富文本解码、段落 textBlocks 清理、clear/write/changeCount，以及 0.25 秒监控计时器与停止清理。完整 poll/sync、归档类型顺序与预览调用链未因此算作完成。
- 快捷键恢复当前键盘布局文字翻译、特殊键表、修饰键及 Carbon 映射、系统/菜单冲突遍历。完整录制状态机及全局注册生命周期仍保留 partial。
- Helper 恢复运行应用 KVO、路径后备、启动状态、三秒等待、持久重试计数、冷却重查、非激活启动和 completion 分支。窗口配置解码及部分订阅时序缺口没有计为迁移完成。

允许直接复用已经满足恢复契约的函数，但必须逐地址审阅。六个薄适配器的现有源码复用审核见 `reports/function-migration/existing-source-reuse-review.json`；报告同时保留了因 nil 分支、接收者类型或动态入口缺失而拒绝复用的项。一个外层方法中的属性读取不代表该外层方法整体与原版等价。

## 纯 SDK 转发复用

873 个当前地址没有生成同名空函数，也没有伪造源码引用；映射采用独立 `sdk_implementation`，逐项指向 `reports/function-migration/sdk-import-reuse.json`。校验器要求原版完整函数体为真实 arm64 `ADRP/LDR/BR x16` 导入跳板，并核对指针槽、间接符号表和实际 `LC_DYLD_CHAINED_FIXUPS` 页链、bind ordinal、零 addend、原始符号、完整 dylib 路径、weak、load-kind 和 ABI。复刻产物必须存在唯一对应的真实导入跳板。

`scripts/macho_imports.py` 重新读取本机原版和当前 release 产物，核对原版容器/arm64 摘要、所有相关 Swift 源文件、本地化资源及 `Package.swift`、逐地址伪代码和真实导入绑定。`function_ledger.py --check` 每次运行会重新核对 SDK 报告，并分别输出 `source_functions` 与 `sdk_forwarders_reused`，不会把系统内部函数也计入已迁移数。复刻源码或二进制变化后，旧静态记录不能继续直接使用。

原版链接 SDK 26.5、复刻链接 SDK 15.2；匹配转发体不证明系统函数在所有进程兼容模式、SDK 版本和调用上下文中运行等价。因此这些项只标记 migrated，未标记 verified。另有 36 个纯寄存器同码区间因完整 Ghidra 函数体范围和逻辑入口证据不足，没有计入完成数。

## 原版直接差分

可复跑入口与 ABI 说明见 [Tests/Original/README.md](Tests/Original/README.md)，逐地址历史结果位于 `reports/function-equivalence/`。0.7.0 曾有十三个函数共 336 个用例通过；这是此前快照。现在按用户要求暂停回归，修改相关文件后会将记录调整为 migrated 并保留历史结果，最新数量以台账 summary.json 为准。验证历史包括原版加载副本代码段不变、两端真实执行、空/坏数据、十像素边界、EXIF 方向、零/负/极值尺寸上限、数组身份/别名和隐藏窗口属性。

修复了原契约测试未发现的差异：预处理尺寸上限为零时原版并不返回 nil；复刻现在同样交给 ImageIO，输出与原版逐字节比较。报告绑定当前实现、测试程序和原版二进制 SHA-256；源码变化或任一用例失败时，台账拒绝保留 verified 状态。不能将这十三个函数的有限测试结果外推为整个应用完成。
