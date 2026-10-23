# Paste 离线复刻集中审阅

2026-10-23，0.8.0-dev.25。改用已有功能和完整调用链集中检查：已有实现直接复用，只修有原版证据的差异。73个行为单元是检查清单，不是产品完成率；完整引用见[集中核对明细](fast-coverage-audit.md)。

最终build46 release编译通过，155份输入前后摘要一致，编译日志19.33秒、包装21.18秒。现有权限getter/map和新增系统动作均按当前完整机器码复核。本轮只做编译及静态源码/REA/机器码对照，没有启动产品、执行功能回归或UI/MCP测试，不能据此宣称一比一通过。安装版本仍为0.7.0。

## 已有路径直接复用

| 功能链 | 已有实际实现 | 仍需确认或修复 |
| --- | --- | --- |
| 主面板与卡片 | 横向卡片、来源Header、重命名/默认标题及共用字体/间距/居中 | 根bounds动态卡片与通用Header尺寸已修；已接高度拖动/限制/保存；原完整过渡、内容特化style及像素效果仍待核 |
| 捕获、历史、多选与恢复 | 类型及有序表示读写、去重、增删恢复、共享Undo、change token、创建/恢复事件及复制OSD | 原实体身份、完整事务/错误传播、混合格式全部分支与目标应用实际接受；事件发送不代表接受 |
| Pinboard、Stack | 本地Pinboard单owner移动、context删除、项目排序/拖排、多选、队列反转、先消费后发送、空队列关窗 | 完整原路由、权限和仓库观察时序 |
| 搜索与筛选 | 原属性文本节点/附件、归一化、建议与键盘菜单、应用名筛选、日期、Spotlight索引、闭窗10秒保留查询 | 完整query编码、整query建议分支、原实体provider/排序及所有焦点异步边界 |
| 图片、文本、颜色、文件及链接预览 | 原生缩放/滚动、棋盘背景、离线OCR/Live Text、旋转保存、文字/颜色/链接编辑、Quick Look、分享内容门槛及预览尺寸 | 五种本地metadata投影已接；完整VM/异步生命周期、链接原完整绘制/布局及编辑失败边界仍待核 |
| 快捷键与设置 | 全局快捷键、冲突检查、录制、当前布局粘贴键码、暂停/恢复监控及权限观察 | 三态模态决策与有限视觉已接；OS26完整Glass宿主、设置布局、原音色及完整helper/DI仍待核 |

## 集中检查已修正的差异

- 普通捕获不再把首行、链接标题或类型默认值写成显式标题。显式空标题与nil分开表示，去重保留现有标题；不清洗旧非空数据。索引只在nil时使用固定英文类型名；Header另按原规则对nil/empty使用本地化默认值。
- 本地Header不再按内容是否实现Editable额外禁用编辑入口。实际编辑能力继续由对应内容入口处理；完整共享权限仍单列缺口。
- 图片元数据接入原Stored的13个可选字段及PropertyList优先、JSON后备解码，图片投影实际写入/读取rawPreview并与payload配对。坏raw不回退旧typed值；非图片的通用原始wire数据保留，内容变更才丢弃旧派生值。现已接图片/文件/颜色/文本投影；原配置查找、provider与CoreData封装仍为partial，见[图片审计](image-preview-metadata-static-audit.json)。
- 权限状态采用初始快照加主RunLoop common模式1秒观察、去重发布，真实刷新Stack快捷键注册；粘贴检查走同一服务。终止取消订阅，不自动弹权限申请。最终完整机器码已核实临时owner先释放再读取AX；三态模态决策已接，完整原视觉/宿主仍未等同。

dev.20 在同页一次复用28个原本地化资源键、17种语言476值，覆盖已显示的设置标签与确认文案；只记录3个完整恢复的资源helper，不逐标签灌数。[设置文案审计](settings-localization-static-audit.json)保留原key、消费者与当前源码证据。音效默认true已修正，已存false保持；原声音资源和完整播放链仍缺。

显式权限按钮已恢复原IOHID状态分支：unknown(raw2)才deactivate、AX只读和请求PostEvent；其他状态开原系统设置URL并激活设置应用。原三态返回及成功延迟已接，完整宿主仍partial，无启动自动prompt。

文件预览已读持久paths/count和首项复制时totalFileSize，尺寸大于零才按原byteCount格式拼接。真实add生成原QL128/iconMode或图标128的PNG metadata并写同一raw wire；不去重路径、不求和、不在预览读取当前尺寸。旧归档缺raw保持未知，不重算过去值。[文件审计](file-preview-metadata-static-audit.json)同时列出完整VM/DI等未恢复部分。

dev.21 将权限询问移到writer之前。原first modal中，0/1表示仅复制、1同时关闭direct偏好；2表示进入Enable后结束当次，不先写剪贴板。Enable regular窗口关闭返回1，真实授权观察成功后1秒返回0，只有请求按钮执行IOHID动作。设置明确权限按钮显示该窗口；未证Picker gate保持不猜。完整图像、私有hosting及VM/DI仍partial，见[权限当前体](../function-migration/accessibility-modals-build41.json)。

主卡片Header的共用字体、间距、对齐和真实标题已修，文件计数用原canonical paths/缺失fallback1；未证卡片几何值未改。[卡片审计](card-header-static-audit.json)明确记录仍未像素验收。本轮把主面板/卡片单列为第73检查项，以覆盖用户明确提出的样式要求，不算“新增完成”。

颜色预览恢复原UInt64 raw投影、Scanner生成与颜色空间/alpha规则，实际add/update与显示链配对接通，坏raw不从文本回填。纯值helper新增完整迁移证据1项，其他工厂/VM/DI父仍partial，见[颜色审计](color-preview-metadata-static-audit.json)。

dev.22 集中检查补回已证卡片几何：当前232输入对应原raw2，Header48/icon76/右溢14、标签内距与内容裁剪；按系统分支恢复内容/选中圆角和选中背景四边扩4。原按可用高度变化的方形卡片、完整style与布局仍有差异，不以固定232宣称相同。

文本元数据链真实接入生成、存储与卡片：完整长度使用UTF16，卡片样本仅前500UTF16，缺失/坏raw不回填全文；完整预览、编辑和Character动态统计保持全文。[文本审计](text-preview-metadata-static-audit.json)记录原地址、当前Source及build42真实绑定。权限模态补应用图标80、成功checkmark64/green及旧OS宿主材质，OS26完整Glass仍partial，见[当前模态审阅](../function-migration/accessibility-modals-build42.json)。

dev.23 已将根bounds→toolbar60→集合可用高度→卡片边长/sizeclass接成一条真实布局链，删除固定242/232和offset11。原系统底距新8旧0，集合上8下24；默认332对应旧240、新232，Header/icon随档位变化。窗口的空焦点回退恢复；资格getter值已修但缺原执行器检查仍partial，不为新增计数放宽条件。[主窗口审阅](main-window-static-audit.json)及[卡片审阅](card-header-static-audit.json)保留高度限制、内容特化、动画与原生渲染缺口。

链接的本地生成、Stored、配对保存和canonical卡片/预览已闭合有限值链。名称保nil/empty、图像按非方主图/方icon优先级、fallback safari及独立42×42等比缩放恢复；不联网。原fullsizeformatter、provider及完整布局仍partial，见[链接审阅](link-preview-metadata-static-audit.json)。声音按真实捕获/恢复事件及实时开关播放，原Copy/Paste音色未分发、实际Pop fallback明确不同，见[声音审阅](sound-feedback-static-audit.json)。

dev.24 将窗口顶部拖动、越界阻尼、松手限制、双击恢复和隔离保存接成完整可见路径；使用副本记录并兼容用户既有高度。[高度审阅](main-window-height-static-audit.json)明确列出原生宿主/错误/actor与过渡差异，没有把10个父函数升成完整。

Pinboard审阅纠正了一项早期推断：新UUID克隆来自共享协作门槛，普通本地归板是移动单owner。删除按history/board/search区分，query非空覆盖board；没有剩余关系才物理移除，旧多板归档保持到用户显式操作。[Pinboard审阅](pinboard-ownership-static-audit.json)列出实际caller、CKShare门槛、年龄清理和独立JSON并发适配边界。

链接纯URL格式化已恢复并被真实UI消费；偏好默认与持久化、图片区、字体行数和底部间距已接。额外host摘要和重复内距已依据完整原构造树移除；原完整绘制与布局优先级仍partial，见[链接审阅](link-preview-metadata-static-audit.json)。

dev.25 三类卡片已接已保存的图片/颜色/文件metadata，bodyTop与Headerheight独立，短fullsize内容延伸到仍存在的Header背后；色卡整背景及亮度字色恢复。Privacy新增仅本地显示的链接预览控件，不展示未支持的网络下载承诺，见[卡片审阅](canonical-card-static-audit.json)。

板内项目排序、按序头插与真正的项目拖排已接，原tab重排仍复用；旧数据缺序值保持旧顺序，显式操作才写dense顺序。[项目排序审阅](pinboard-item-order-static-audit.json)保留CoreData/共享/命中与滚动差异。面板失焦/关闭完整事件链已取证，但本轮尚未实施，不把报告当功能落地。

加速方法的一个新依据是[同版本SDK复用可行性](../function-migration/official-sentry-scope-reuse-feasibility.json)：官方MIT Sentry9.24.0的85个Scope方法，与原版完整长度和非重定位指令均一致。目标绑定和实际接入仍待验证，当前完成计数为0；不把“版本相同”或遮掉重定位字节当等价通过。

## 检查结果如何使用

已有代码、逐函数恢复证据与运行验收分别记录。38项仍含差异或缺证据，不能因为接口存在就整项升为完成。原本地Sentry Scope/Breadcrumb快照、环形缓存和observer仍缺实现；CodingKey类型描述及部分编译器生成地址仍未审，不能以“系统提供”推定全部等价。

后续只沿本表的真实消费者复核已列未决：入口、输入输出、失败副作用及最终消费者各检查一次，重叠问题合并。明确属于网络同步的入口按[逐地址范围证据](../function-migration/cloud-network-scope-exclusions.json)排除，不算实现、不减81,134总分母。免费离线版本保留独立实现；全部范围内迁移完成后再统一功能回归。
