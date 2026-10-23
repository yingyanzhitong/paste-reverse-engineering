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

人工审核与映射写入 `replica/function-map.json`；分页清单由脚本生成。更新后先执行契约测试，再重新生成并校验。不能通过生成同名空函数、默认返回值或批量排除来增加完成数。

## 状态含义

| 状态 | 含义 |
| --- | --- |
| pending | 未完成逐地址审核和映射；即使所属功能已有实现，也不能自动算作该函数完成 |
| partial | 已定位实现，但仍有原版分支、错误类型、参数来源或测试缺口 |
| implemented | 根据已恢复契约存在实际执行的实现；仍不等于原版与复刻逐函数等价通过 |
| verified | 有绑定该地址的原版机器码/复刻输入及逐用例比较结果，并绑定原版与当前源码摘要；只代表已列明契约及场景，一般功能测试不能使用此状态 |
| excluded_by_scope | 经逐地址审核确认属于用户排除的范围，并记录具体理由；不计入已实现 |

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

## 原版直接差分

可复跑入口与 ABI 说明见 [Tests/Original/README.md](Tests/Original/README.md)，逐地址结果位于 `reports/function-equivalence/`。当前十三个函数共 336 个用例通过，仍有 81,121 个地址 pending。验证包括原版加载副本代码段不变、两端真实执行、空/坏数据、十像素边界、EXIF 方向、零/负/极值尺寸上限、数组身份/别名和隐藏窗口属性。

修复了原契约测试未发现的差异：预处理尺寸上限为零时原版并不返回 nil；复刻现在同样交给 ImageIO，输出与原版逐字节比较。报告绑定当前实现、测试程序和原版二进制 SHA-256；源码变化或任一用例失败时，台账拒绝保留 verified 状态。不能将这十三个函数的有限测试结果外推为整个应用完成。
