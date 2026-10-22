# Paste Replica

独立 Swift 原生实现。主面板参考 Paste 6.6.6；静态函数、MCP 参数及部分行为由 REA/Ghidra 证据核对。应用不载入原版私有历史数据库。

## 构建运行

```sh
bash replica/scripts/build-app.sh
open 'replica/dist/Paste Replica.app'
```

正常运行时在菜单栏显示剪贴板图标，点击打开历史。默认全局快捷键是 ⇧⌘V，Stack 是 ⇧⌘C；若原版占用，菜单栏提示状态，点击图标仍可使用。直接粘贴会还原目标应用，并且只在系统辅助功能权限可用时发送粘贴按键；权限不足时保留已拷贝内容并显示说明。

数据默认保存在 `~/Library/Application Support/PasteReplica/clipboard.json`，数据目录权限 0700，文件 0600，原子写入与跨进程锁保护。图片、RTF、HTML、文件 URL 等保留原始 representation。暂停、排除来源与机密/临时类型过滤作用于新采集；存储为本地明文，目录权限不代表加密。

## 隔离演示

```sh
open -n 'replica/dist/Paste Replica.app' --args \
  --data-dir /tmp/paste-replica-demo \
  --fixture --no-monitor --no-global-hotkey \
  --pasteboard-name com.pastereplica.demo --show-panel
```

这组参数使用合成演示内容和具名私有剪贴板，不监听系统剪贴板，也不发送系统粘贴按键。`--show-settings` 可直接打开设置。卡片、预览、Stack 和 MCP 配置按钮的拷贝使用注入的剪贴板；原生文本编辑器的系统剪切/复制/粘贴仍使用系统剪贴板，隔离测试不调用这些命令。

## MCP

将构建后的可执行路径用于 MCP 客户端；应用设置中的“MCP 与 AI 工具”页面可复制当前路径的配置。

```json
{
  "mcpServers": {
    "paste-replica": {
      "command": "/绝对路径/Paste Replica.app/Contents/MacOS/paste-replica-mcp",
      "args": ["--data-dir", "/绝对路径/独立数据目录"]
    }
  }
}
```

支持 `search`、`read_item`、`create_item`、`update_item`、`delete_item`、`list_pinboards`、`create_pinboard`、`rename_pinboard`、`delete_pinboard`、`add_item_to_pinboard`、`remove_item_from_pinboard`。工具的 id 字段按已恢复的原版 schema 命名；`create_item(list_id)` 建立仅分组项目且不修改系统剪贴板，删除需要先查看确认预览。`replica_restore_item` 和 `replica_copy_item` 是明确命名的扩展。传输使用本地 stdio JSON-RPC，不依赖原版的本地 HTTP/token 桥接服务。

## 验证与差异

完整本地验证入口：`bash replica/scripts/validate.sh`。报告默认写入被 Git 忽略的 `.local/replica-validation/`。

```sh
swift run --package-path replica paste-replica-core-tests
python3 replica/scripts/test-mcp.py
bash replica/scripts/test-hotkey.sh
python3 replica/scripts/test-app-monitor.py
python3 scripts/verify.py
```

本机只有 Command Line Tools，缺少 XCTest；核心测试使用独立原生可执行 runner，仍执行真实持久化、AppKit 具名剪贴板和多个操作系统进程。详细覆盖见 [TESTING.md](TESTING.md)。

当前没有实现原厂 iCloud/账号/订阅服务、原版私有归档格式兼容，也未验证所有原版菜单、拖放目标和系统权限组合。因此不能标记为全功能或逐像素一比一通过。原生 UI 观察优先尝试了 REA，但宿主未取得辅助功能权限；原版底部 layer 24 面板也超出该工具当前 layer 0 限制，实际对照使用可用的桌面自动化接口。原版私有历史、账号及凭据均不作为公开测试输入。
