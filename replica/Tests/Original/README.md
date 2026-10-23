# 原版机器码差分测试

在原生 arm64 macOS 上执行：

```sh
python3 replica/scripts/test-original-functions.py
```

测试需要本机安装与 `reports/target-manifest.json` SHA-256 完全相同的 Paste 6.6.6。也可用 `--original` 指定对应原始二进制或 arm64 薄切片。版本不符时拒绝调用绝对地址。无需原厂账号、订阅或联网。

脚本只在 Git 忽略的 `.local/original-function-tests/` 中创建副本，把 Mach-O 文件类型由 `MH_EXECUTE` 改为 `MH_BUNDLE` 并重新临时签名，从而允许 `dlopen`。不调用原版应用的入口函数。签名前后校验 `__TEXT,__text` 的地址、大小、文件位置与 SHA-256 完全一致；安装的原版不作修改。加载器仍可能运行映像初始化代码，因此运行进程受 `sandbox-exec` 限制：禁止网络、禁止访问当前用户的 Application Support、Containers 和 Group Containers。

只使用合成图片、独立对象数组和由合成图片生成的 Vision 观察，不读取用户剪贴板或原版历史，不显示原版界面，不自动授予系统权限。原版机器码与临时签名文件不会进入仓库。

## 已恢复的调用方式

Stack 表格的 `0x100082b90` / `0x100083a20` / `0x100085230` / `0x100085670` 使用真实原版控制器、NSTableView 与 NSScrollView，对照惰性约束缓存、行数、拒绝选择和动画前后高度。原版 snippets 合成数组的元素只是 NSObject 替身，仅供这几个只读数组 count 的入口使用，绝不送入会访问原版 Snippet 成员的函数。复刻以相同数量的 ClipboardItem 对照源级行为，不宣称两种元素的内存布局相同。动画在 duration 0 的上下文中运行，比较立即值及后续事件循环提交值；不外推为完整动画曲线验收。

- `0x100011138`：实际原版 Stack 窗口控制器的 `windowDidLoad`，通过 `x20` 传入真实控制器实例；与复刻控制器比较有窗口和无窗口路径的层级、集合行为、背景移动、保存名及隐藏状态。只创建隐藏窗口，不展示或操作用户窗口。
- `0x1000114fc` 及 `0x1000114ec`/`0x1000114f4`：在主执行器执行窗口布尔策略与两个选择器跳转入口。
- `0x10008468c`：原地反转 ObjC 对象数组，Swift 上下文寄存器 `x20` 指向数组变量；测试空/单项/奇偶长度、共享与独占存储、重复值、对象身份与别名保持。
- `0x1002d4ba0`：Swift thin ABI `(Int, Data) -> Data?`。比较结果字节及 SHA-256，包含空/坏数据、十像素边界、横竖图、零/负数/极值尺寸上限、JPEG EXIF 方向。
- `0x1002d576c`：观察数组返回词数组。原版词结构为 String + Float + CGRect?，size 57、stride 64；测试重复词、标点、英文数字、中文、空数组与无候选观察，逐字段比较。
- `0x1002d4738`：Swift throwing ABI `(Data, Int) throws -> [Word]`；空输入的原版错误为 `PasteRecognition.OCRError.invalidImageData`，NSError domain 为 `PasteRecognition.OCRError`，code 0，userInfo 为空。
- `0x1002d4830`：优化后的间接结果在 `x8`，错误槽通过 `x3` 传入，`x21` 返回错误标志。桥接只支持这个已恢复入口。识别流程使用原始合成图数据独立执行两次，比较词数组或 NSError 域、代码和用户信息是否为空。复刻文档额外保存的行文本不是原版返回值比较内容。

这不是任意 Swift 函数的自动 ABI 转换工具；新地址必须逐项恢复参数、所有权和错误约定后再加入。函数完成状态只代表报告中列出的契约与用例，不能当作覆盖所有输入的数学证明，更不能推算其余 81,000 多个地址已完成。

成功后在 `reports/function-equivalence/` 输出逐地址 JSON。报告绑定原版二进制、未改动代码段、测试程序、复刻对象文件及源码摘要，并保留两端实际结果。源码变更后，台账会拒绝使用过期差分证据。
