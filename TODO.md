# LOOM LA32 乱序核开发与验证待办

本文档记录当前后端原型到完整 LA32 乱序内核的工作顺序。详细功能缺口见
[`MISSING.md`](MISSING.md)，已有 Verilator 单元测试说明见
[`test/README.md`](test/README.md)。

## 状态说明

- `[x]`：已经实现，并通过当前测试。
- `[ ]`：尚未完成。
- 每个阶段必须满足“阶段完成条件”后，才能作为下一阶段的稳定基线。
- 测试通过只说明已覆盖行为正确，不代表模块或内核不存在其他问题。

## 文件修改权限

- 测试用文件、测试顶层、测试脚本和开发文档可以根据测试任务直接新增或修改。
- `common/`、`exu/` 等实际内核 RTL，只有用户明确要求修改或实现时才能改动。
- 如果用户只要求分析、解释、检查或给出实现，实际内核文件保持不变，只提供实现方案、代码片段或建议补丁。
- 如果无法确定一个文件是否属于实际内核，按实际内核文件处理，修改前等待用户明确授权。
- 测试发现 RTL 问题时，先用失败测试和日志说明问题；没有明确授权时不得直接修复内核 RTL。

## 固定工作流程

以后每一项功能都按以下顺序完成：

1. 明确接口、时序和异常情况下的预期行为。
2. 先在对应 `test/<module>/` 中增加能够暴露问题的定向测试。
3. 运行测试，确认新测试在功能未实现时能够失败。
4. 获得用户明确授权后，才修改实际内核 RTL，并以最小范围完成当前功能。
5. 运行模块测试和 `./test/run_all.sh`，避免回归。
6. 将该功能加入 `loom_core` 集成测试，检查跨模块握手和反压。
7. 更新本待办和 `MISSING.md`，记录仍未覆盖的边界情况。

## 阶段 0：固定当前基线

- [x] 为 Rename 建立独立 Verilator 测试。
- [x] 为 Issue Queue 建立独立 Verilator 测试。
- [x] 为 ROB 建立独立 Verilator 测试。
- [x] 为 ALU 建立独立 Verilator 测试。
- [x] 建立统一回归入口 `./test/run_all.sh`。
- [x] 当前四组模块测试全部通过。
- [x] 将顶层 `tb_verilator.cpp` 纳入统一回归脚本。
- [ ] 清理或分类 Verilator 的宽度、常量比较和不完整 case 警告。
- [ ] 记录一次干净构建的命令、日志和通过结果。

### 阶段完成条件

- 干净环境中可以一条命令完成全部模块测试和当前顶层冒烟测试。
- 测试失败时脚本返回非零退出码。
- 不允许出现未登记的新 Verilator 警告。

## 阶段 1：补齐尚未独立测试的现有模块

### Decode

- [x] 新建 `test/decode/`。
- [x] 覆盖一组 LA32 算术、逻辑和立即数指令。
- [x] 覆盖立即数字段和扩展类型选择。
- [x] 覆盖分支、跳转、load/store、CSR、syscall 和非法指令分类。
- [x] 从
  `/mnt/e/nscscc/chiplab/software/examples/nscscc_func/obj/test.s`
  抽取真实机器码，核对译码结果。
- [ ] 扩展到全部已支持的移位、比较、乘除法和特权指令。
- [x] 使用 `test.s` 中的真实机器码覆盖全部七种乘除法译码及功能选择码。

### Dispatch

- [x] 新建 `test/dispatch/`。
- [x] 覆盖 ALU、MEM、UNQ 三类 uop 的路由。
- [x] 覆盖目标 Issue Queue 反压。
- [x] 检查同周期多条相同类型 uop，当前测试能够检测丢失。
- [x] 为后续多端口 dispatch 固定不丢指令的接口预期。

### Branch Mask

- [x] 新建 `test/br_mask/`。
- [x] 覆盖分支标签分配和释放。
- [x] 覆盖同周期多分支分配。
- [x] 覆盖误预测和全流水线 flush。
- [x] 覆盖标签耗尽时的阻塞。
- [ ] 增加正确预测和同周期 resolve/allocate 的组合测试。

### Regfile、MEM、UNQ 和 LSU

- [x] 新建 `test/regfile/`，覆盖多读、多写和同周期旁路行为。
- [x] 新建 `test/mem/`，覆盖地址生成、store data、流水延迟和 kill。
- [x] 新建 `test/unq/`，覆盖完整乘除法语义、CSR 请求和 kill。
- [x] 新建 `test/lsu/`，固定 Load Queue 请求身份、恢复和迟到响应契约。
- [x] 明确并测试除零、溢出、高位乘法、取余和无符号乘除法语义。

### 阶段完成条件

- 当前所有已实现模块都有独立、自检式测试。
- 测试既包含正常路径，也包含反压、flush、kill 和边界输入。
- 真实 `test.s` 机器码和手写最小用例的译码结果一致。

## 阶段 2：加强现有模块的边界验证

### Rename

- [x] 覆盖物理寄存器耗尽和连续误预测后的恢复。
- [ ] 覆盖同周期多写同一逻辑寄存器。
- [ ] 覆盖 commit、rename 和 wakeup 同周期发生。
- [x] 覆盖分支误预测后的 Map Table 和 Free List 恢复。
- [ ] 增加随机指令流和软件参考模型对拍。

### Issue Queue

- [x] 覆盖正确解析标签被复用后，旧 uop 不得被年轻分支误杀。
- [ ] 覆盖 dispatch、wakeup、issue、squash 和 flush 同周期组合。
- [ ] 覆盖多个操作数由不同端口同时唤醒。
- [x] 覆盖多个槽位竞争同一 MEM issue 端口。
- [x] 覆盖 MEM 发射、wakeup 和空槽补位同周期发生。
- [x] 覆盖当前未启用部分发射时，store 等待地址和数据操作数全部 ready。
- [ ] 覆盖 MEM uop 的部分发射语义。
- [ ] 覆盖不同 `NUM_ENTRIES`、`ISSUE_WIDTH` 和 `DISPATCH_WIDTH` 参数。
- [ ] 增加队列内容和软件参考队列逐周期对拍。

### ROB

- [ ] 覆盖 ROB 满、空以及满到提交的边界转换。
- [ ] 覆盖入队、写回和提交同周期发生。
- [ ] 覆盖多 bank 指针回绕和不连续 valid。
- [ ] 覆盖 branch kill、rollback 和 flush。
- [x] 覆盖异常只能在 ROB 头部精确抛出。
- [x] 覆盖异常、refetch 和 ERTN 的提交刷新类型与单周期脉冲。

### ALU

- [ ] 覆盖所有操作码的边界值和随机值。
- [ ] 覆盖分支 taken/not-taken、目标地址和误预测判断。
- [ ] 覆盖 `OP1_PC`、`pcaddu12i` 和链接地址。
- [ ] 覆盖 kill/flush 后不得产生无效写回或 wakeup。

### 阶段完成条件

- 随机测试可以重复运行固定 seed，并在失败时输出 seed 和最小上下文。
- 各模块关键状态转换都有断言或参考模型检查。
- 当前参数和至少一种缩小参数配置均能通过。

## 阶段 3：验证当前后端集成

- [x] 将 `loom_core.sv` 明确为乱序内核，外层由 `core_top.sv` 连接 SoC。
- [x] 给输入指令同时提供真实 PC，不能只按数组下标隐式递增。
- [x] 修正并验证 Decode -> Rename -> Dispatch -> Issue -> Execute -> ROB 的握手。
- [x] 检查 ROB index 在所有 uop 副本中保持一致，并由提交日志输出对应 index。
- [x] 检查前端反压时指令保持稳定，不重复接收或丢失。
- [x] 检查提交顺序、物理寄存器写回和架构寄存器结果。
- [x] 在临时顶层中验证 `is_unique` 等待 ROB 为空且不与其他 lane 同拍分发。
- [x] 加入数据相关链、独立指令交错和长延迟指令。
- [x] 加入 LDQ/STQ 满载反压和恢复压力测试。
- [x] 加入分支误预测后的 Rename、ROB 和 ALU 年轻指令清除测试。
- [x] 阻止错误路径 LSU 响应在恢复后写回、唤醒或完成 ROB 项。
- [x] 阻止错误路径 store 产生 DMem 副作用，并保留已提交的旧 store。
- [x] 修正 `ld.bu` 和 `ld.h` 的 `mem_signed` 译码并通过 `test/core_lsu/`。

### 当前前端边界

- [x] 分别验证 IFU、Fetch Buffer 以及两者的反压和重定向连接。
- [x] 验证 Fetch Buffer 的 4 取指到 2 译码宽度转换。
- [x] 删除 `loom_core` 内部的重复指令包缓存，只保留逐 lane 完成掩码。
- [x] 验证正常双发包连续进入 Decode，`is_unique` 包不会提前离开 Fetch Buffer。
- [x] 用正式重定向端口替代测试顶层对 `loom_core` 内部信号的层次化引用。
- [x] 建立单 outstanding IMMU 控制契约，覆盖 ITLB、取指异常、反压和 flush。
- [x] 直映射 IMMU 与 ICache lookup hit 支持直接响应；接受当前 fetch packet 时同拍发起
  下一 PC 的翻译和 BPD 请求，消除单 outstanding 前端的固定包间气泡。
- [x] 单 outstanding IFU 使用 frontend epoch 丢弃迟到预测，并用请求 stale 状态
  拒绝重定向前的翻译/取指响应。
- [ ] 实现多 outstanding ICache/IMMU 时，为请求增加 tag/FTQ index
  以及 frontend epoch；迟到翻译响应必须按 epoch 丢弃，不能只依赖单请求状态机。
- [x] 完成 BPD/FTQ 的单 outstanding 生产接入并固定当前正确性接口。
- [ ] 多 outstanding 前端完成后，再冻结包含请求身份和 replay 的性能接口。

### 分支预测器实现 (BPD)

- [x] 实现 UBTB (µBTB) — 16-entry 全相联 flop, F1 target 预测, 测试 `test/ubtb/`
- [x] 实现 BIM (Bimodal) — 2048×8 双峰预测器, F2 方向预测 + meta, 测试 `test/bim/`
- [x] 实现 BTB — 32-set×2-way, F3 target 修正 + meta + hit_way, 测试 `test/btb/`
- [x] 实现 RAS — 32-entry return address stack, `test/ras/`
- [x] 实现 fetch-wide 双 bank GHist — 64-bit history、延迟 bank 更新和 ras_idx，
  定向场景及 1000 周期随机参考模型通过 `test/ghist/`
- [x] 实现 Composer — UBTB→BIM→BTB 串联 + meta 逐级打包, 测试 `test/bpd_top/`
- [x] 实现 LA32 F3 predecode，产出 branch/call/ret/return_addr，测试 `test/f3_predecode/`
- [x] 实现 `bpd_update_router`，将提交训练按 bank 路由到两个 Composer
- [x] 验证双 Composer 的 bank 选择、lane 旋转和 meta 对齐，测试 `test/bpd_banked/`
- [x] Fetch Buffer 支持随指令传输 `ftq_idx` 和 `predicted_taken`，测试 `test/fetch_metadata/`
- [x] 实现 Fetch Target Queue，覆盖 commit、mispredict、repair、回绕及非 2 次幂深度，测试 `test/ftq/`
- [x] UBTB+BIM 集成测试通过, `test/bpd_integration/run.sh`
- [x] UBTB+BIM+BTB 集成测试通过, `test/bpd_integration/run_ubtb_bim_btb.sh`
- [x] GHist+RAS+UBTB+BIM+BTB 全链路集成测试通过, `test/bpd_integration/run_bpd_full.sh`
- [x] 分支预测聚合回归入口完成，`test/bpd_regression/run.sh`

#### 生产接入顺序

- [x] 新增 `test/core_fetch_metadata/`，reference 和生产模式均通过稀疏 lane、flush、
  随机反压以及 FTQ/taken/pc_lob 提交检查。
- [x] 固定 Fetch Buffer 到 `loom_core` 的生产接口：fetch packet 同步携带 FTQ index 和
  逐 lane predicted-taken/predicted-npc；`core_top` 已使用 IFU 的真实预测元数据。
- [x] IFU 将预测 next PC 保存在对应 FTQ 项，并用同一 FTQ index 提供注册执行查询。
- [x] 扩展 GHist 为 fetch-wide、双 bank 更新语义，覆盖同包多分支、物理 bank 1 起始、
  cache-line 尾部、延迟 history 标志和 restore 优先级。
- [x] FTQ 误预测恢复复用 GHist 的 fetch-wide 双 bank 更新函数；测试覆盖 `start_bank`
  槽位换算、跨 bank 历史、cache-line 尾部、CALL/RET 槽位匹配和 branch rewind repair。
- [x] 扩展 FTQ 执行查询契约：注册查询结果并返回预测 `next_pc`，误预测修正后查询
  返回实际后继 PC；16-entry 和非 2 次幂 5-entry 测试通过。
- [x] 区分分支误预测 rewind 与异常、中断、ERTN 的 FTQ/历史全前端清空语义；
  `test/core_ifu/` 和 `test/core_top_recovery/` 已覆盖两类恢复。
- [x] 在 `ifu.sv` 内实例化两个 Composer、`bpd_update_router`、F3 predecode、RAS、GHist 和 FTQ；
  Composer 仅管理 UBTB/BIM/BTB，RAS/GHist/FTQ 直接归 IFU 控制。
- [x] 第一版使用已对齐的 F3 预测驱动 `next_pc`，暂不启用 F1/F2 早重定向；
  core redirect 优先于预测，frontend epoch 拒绝迟到预测，单 outstanding 请求用 stale 状态拒绝迟到响应。
- [x] 明确非 bank 对齐重定向后的逐 lane valid 语义；保留稀疏 bank-relative valid，
  由 Fetch Buffer 做压缩，禁止把 lane 元数据与指令错位。
- [x] 使 Fetch Buffer 入队和 FTQ 分配原子化：任一侧反压时两侧都不得推进。
- [x] 在 `core_top.sv` 接通 Fetch Buffer 的 FTQ/predicted-taken/predicted-npc 端口，并连接
  IFU 与核心之间的 brupdate、commit FTQ index、branch redirect FTQ index 和全 flush 信号。
- [x] 在 `loom_core.sv` 将前端元数据写入 `uop.ftq_idx`、`uop.taken`，并由指令 PC 生成
  `uop.pc_lob`；提交训练使用同一条指令对应的 FTQ/BPD meta。
- [x] 删除 ALU 对 B/BL/JIRL 的强制误预测：条件分支校验方向，B/BL 校验 F3 直接目标，
  JIRL 用注册的 FTQ 查询结果比较预测 next PC 与实际目标。
- [x] 增加 IFU+BPD+FTQ、核心反馈闭环、随机反压/重定向和异常/中断全 flush 回归。
- [x] 增加生产 `core_top` 在 ICache/DCache refill 在途时的分支、异常和中断恢复回归，
  正常与确定性 AXI 背压模式均通过 `test/core_top_recovery/`。
- [x] 生产 `core_top` 官方功能 ELF 在正常与 AXI 背压模式下均通过 58/58 测试点。
- [x] 在 `core_top_elf_axi` 增加周期、IPC、误预测、Cache miss 和主要阻塞原因统计，
  再运行 CoreMark 与 `fireye_A0` 建立性能基线。
- [x] 根据性能数据决定是否实现 F1/F2 早重定向和带 tag/epoch 的多 outstanding IFU/IMMU：
  当前先保留已对齐 F3；多 outstanding 前端、LSU/数据侧并发和预测准确度优化拆分为后续阶段。

#### 2026-08-02 性能基线与本轮结果

| 用例 | 优化前 IPC | 优化后 IPC | 变化 | 当前主要限制 |
|------|-----------:|-----------:|-----:|--------------|
| `stream_copy` | 0.2233 | 0.3125 | +40.0% | LDQ/数据侧反压，DCache hit 仍有串行延迟 |
| `crc32` | 0.2886 | 0.4890 | +69.4% | Fetch Buffer 空 66.25%，单 outstanding 前端 |
| `coremark` | 0.3575 | 0.4079 | +14.1% | 分支误预测率 11.14% |
| `fireye_A0` | 0.3824 | 0.3752 | -1.9% | LDQ 几乎常满、DCache refill 占用高 |

- [x] CoreMark、`fireye_A0`、`stream_copy`、`crc32` 正常模式均完成并返回正确 LED/NUM。
- [x] 四个性能用例在确定性 AXI 背压模式下均完成，无死锁、协议或数据错误。
- [x] 综合检查 IMMU/ICache 直接响应及 IFU 同拍下一请求，WNS 与优化前保持不变。
- [x] DMMU bypass 已支持 CHECK 当拍直接响应；单元、LSU-DMMU、CACOP、精确异常、
  core_top 恢复以及官方功能 ELF 正常/AXI 背压回归通过。
- [x] DMMU CHECK 直接响应性能回归完成：`stream_copy` 0.3264（+4.4%）、
  `crc32` 0.4966（+1.6%）、`coremark` 0.4336（+6.3%）、
  `fireye_A0` 0.3852（+2.7%）；四项均正确结束，DMMU `response` 状态占比为 0%。
- [x] 扩展性能回归到逐分支 PC/CFI/方向统计，记录代表性用例：
  `bitcount` 0.7666、`crc32` 0.4966、`fireye_C0` 0.2647、`my_memcmp` 0.4820。
- [x] IFU 命中路径已支持翻译响应直接交接 ICache，并可当拍消费 epoch 匹配的
  live F3 预测结果；ICache/后端背压时分别回退到请求寄存器和预测结果寄存器。
  Verilator 回归后 `S_MEM_REQ` 占比为 0%，IPC：`bitcount` 0.8860（+15.6%）、
  `crc32` 0.6397（+28.8%）、`fireye_C0` 0.2662（+0.6%）、
  `my_memcmp` 0.5567（+15.5%）。综合后 WNS 仍为 +0.978 ns，与优化前一致。
- [x] 为 IMMU direct bypass 和 ICache lookup hit 增加响应/下一请求同拍周转红测试；
  当前 IMMU 225 项检查仅该契约失败 1 项，ICache 32B/64B 配置也分别仅失败 1 项。
- [x] IMMU direct response 和 ICache lookup hit 已可在响应握手周期接收下一请求；
  响应反压、TLB wait、miss/refill 和维护期间继续禁止覆盖在途请求。IMMU 231 项、
  ICache 32B/64B 配置 2158/2406 项检查、core_top 恢复，以及官方 58 项功能 ELF
  正常/AXI 背压回归均通过。
- [x] IFU 在 ICache hit 响应与 Composer F2 对齐时直接组包，并在该 packet 被接收的
  同一周期启动下一次翻译；F2 已消费请求产生的迟到 F3 用单项 drop 状态丢弃，JIRL
  缺少早期目标、FTQ/后端反压或时序未对齐时仍回退到原有 F3/寄存路径。完整回归后
  IPC：`bitcount` 0.9077（+2.4%）、`crc32` 0.6799（+6.3%）、`fireye_C0`
  0.2672（+0.4%）、`my_memcmp` 0.6169（+10.8%）；综合 WNS 为 +0.987 ns，
  与修改前 +0.978 ns 基本一致。
- [x] 将 GShare 接入 Composer 和 IFU 的真实逐 bank GHist；逻辑第一/第二 bank 历史
  会随物理 bank 轮换，packet 接收同拍的下一 BPD 请求使用更新后历史，branch rewind
  后的首个请求直接使用 FTQ 恢复快照。`test/ifu/` 和 `test/core_ifu/` 回归通过。
  `bitcount` 的 `0x1c00077c` 分支 taken 恰为 50%，2000 次执行误预测 1990 次，
  v4 默认配置则在 BIM/BTB 之后继续组合 TAGE 和 loop predictor。该局部分支仍值得
  修复，但 `bitcount` 总体 IPC 已约为参考核的 0.8，不再视为主要整体性能瓶颈。
- [x] 固定第一版 GShare 的 F0-to-F2、逐 lane provider、prediction-time meta、
  fetch-row PC XOR history 索引及提交训练契约；`test/gshare/run.sh --reference`
  覆盖冷启动、历史分流、N/T 交替、连续旧 meta、读写碰撞和非提交更新过滤。
- [x] 生产 `ifu/bpd/gshare.sv` 已按上述契约实现，和 reference 仅注释不同；
  `test/gshare/run.sh` 默认生产模式通过并加入分支预测聚合回归，现已接入 Composer/IFU。
- [x] 增加 `test/composer_gshare/` 接入测试；reference 和生产模式均覆盖 BIM 冷回退、
  GShare provider 覆盖、条件/无条件分支选择、bank history 流水对齐，以及
  `BTB | BIM | GShare` metadata 拼接和反向切片，现已加入分支预测聚合回归。
- [x] 增加 BIM `bank1/lane1` 的 N,T 交替方向与旧 metadata 连续提交测试；确认计数器
  合法地在 `2'b10`/`2'b01` 间振荡、write-bypass 未丢训练且无 bank/lane 串扰。
  同一序列下 BIM 16 次全部误预测，1 位历史参考模型仅有 3 次冷启动误预测。
- [ ] 针对 `fireye_C0` 的数据相关条件分支增加预测回归；当前误预测率 19.31%，
  热点均为条件分支，未发现 B/BL 或 JIRL 目标误预测。
- [x] 为 DCache load/store hit 增加 LOOKUP 当拍直接响应红测试；当前 RTL 仍有2个
  时序断言失败，其余功能契约通过。
- [ ] DCache hit 直接响应作为数据侧第二优先级保留；它对 `my_memcmp` 明确有益，
  但 `my_memcmp` 总体 IPC 已约为参考核的 0.8。当前优先分析相对参考核仅约三分之一
  的 `crc32` 和 `fireye_C0`，避免把局部停顿直接等同于主要整体性能缺口。

### 真实指令用例

- [x] 从 `test.s` 选取只包含当前已支持指令的连续基本块。
- [x] 每条输入保存地址、机器码和预期反汇编，便于失败定位。
- [x] 不把 `test.s` 中的 `...` 当作连续程序内容。
- [x] 在尚未实现 cache、动态访存异常和完整 CSR 前，跳过依赖这些功能的基本块。
- [x] 对每段指令给出预期提交数和最终架构寄存器值。

### 阶段完成条件

- 当前支持的真实 LA32 基本块能够连续执行并正确退出。
- 每条接受的指令只提交一次，错误路径指令不得提交。
- 测试能够区分死锁、丢指令、重复执行和结果错误。

## 阶段 4：优先补齐影响正确性的功能

- [x] 将 Dispatch 扩展为真正的多端口，支持同周期多条同类型 uop。
- [x] 完成完整的分支恢复，包括 Rename 状态和所有年轻 uop 的清除。
- [x] 完成 ROB 异常跟踪、精确异常、flush 和重定向输出。
- [x] 完成 LSU 的 load/store 执行、访存响应和异常返回。
- [x] 建立 LSU 非对齐访存 ALE、BADV/BADI 和无副作用的红阶段集成测试。
- [x] 增加 LDQ/STQ 顺序、非重叠访问和 store-to-load forwarding 定向测试。
- [x] 连接 LDQ/STQ，处理未解析旧 store、同地址等待和数据转发。
- [x] 完成 CSR 执行、ERTN 和 CSR/ERTN 特权级检查。
- [x] 完成硬件中断屏蔽、ROB 精确边界、回滚、EENTRY 跳转和 ERTN 返回。
- [x] 覆盖中断与 LSU 未提交/已提交项、迟到 load 响应及分支误预测的恢复边界。
- [ ] 完成 CSR replay，并接入 ROB 的 mini-exception/refetch 路径。
- [x] 完成寄存器文件旁路和多写端口冲突规则。
- [x] 完成 UNQ 的全部 LA32 乘除法操作。
- [x] 将组合除法器替换为可暂停、可 kill 的迭代除法器。

### Issue Queue 实现顺序

- [ ] 先保证当前简单压缩策略在所有已支持时序下功能正确。
- [ ] 启用投机唤醒前，实现 `speculative_child` 和 `rebusy`。
- [ ] 多种 FU 共享队列前，实现 issue port 与 `fu_code` 匹配。
- [ ] 性能和时序评估确认需要后，再实现完整 collapsing/移位网络。
- [ ] 完整 collapsing 实现必须复用阶段 2 的参考模型和随机测试。

### 阶段完成条件

- 后端能够正确处理整数、访存、分支、CSR 和异常指令。
- 任意 flush/kill 后，不存在错误提交、错误释放物理寄存器或幽灵写回。
- 完整 collapsing queue 的引入不得改变架构执行结果。

## 阶段 5：完整程序运行基础设施

- [x] 使用 `main.elf` 建立生产 `core_top` 的 AXI 指令/数据存储器模型。
- [x] ELF loader 按 `PT_LOAD` 程序段装载，并处理入口地址和地址空洞。
- [x] 建立数据存储器模型及 NSCSCC 功能测试的 CONFREG/NUM 完成判定。
- [x] 生产前端 PC、取指、分支重定向、异常恢复和取指反压已接通。
- [x] 输出提交 PC、机器码、逻辑目的寄存器和 ROB index，并核对 ELF 指令映像。
- [ ] 接入 LA32 参考模型或顺序解释器进行 differential testing。
- [x] 超时和错误日志保留近期提交 PC、机器码、逻辑目的寄存器和 ROB index。
- [ ] 失败日志进一步加入完整 uop、Rename 映射和关键队列状态。
- [x] 支持最大周期数、无提交 watchdog、确定性 AXI 背压和可选事务 trace。
- [ ] 增加可配置随机 seed 和 VCD 开关。

### 阶段完成条件

- 不依赖反汇编文本补洞，可以从 ELF 入口执行真实程序。
- RTL 和参考模型逐提交对拍。
- 超时、异常退出和结果错误均能被自动检测，并返回非零状态。

## 阶段 6：运行 NSCSCC 功能测试

- [x] 官方功能 ELF 在正常 AXI 模式下通过全部 58 个测试点。
- [x] 官方功能 ELF 在确定性随机背压模式下通过全部 58 个测试点。
- [x] 覆盖生产 Cache/AXI 事务在途时的分支、异常和中断恢复。
- [x] 已发现的前端、分支预测、异常和访存恢复问题均有对应模块级或核心级回归。
- [ ] 后续失败继续缩减为最小用例并永久加入 `test/`。
- [x] 增加 IPC、误预测、Cache miss 和主要阻塞原因统计，并运行 CoreMark、`fireye_A0`、
  `stream_copy` 与 `crc32`；结果记录在分支预测性能阶段。

## 每次提交前检查

```text
[ ] 新行为有对应测试
[ ] 单项测试通过
[ ] ./test/run_all.sh 通过
[x] loom_core 集成测试通过
[ ] 没有新增未登记的 Verilator 警告
[ ] MISSING.md 和 TODO.md 状态一致
[ ] 日志能够定位失败指令、PC 和 ROB index
```
