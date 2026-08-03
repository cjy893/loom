# LOOM (LA32 Out-of-Order Processor) — 功能缺口记录

## 已完成模块

| 模块 | 文件 | 状态 |
|------|------|------|
| 参数定义 | `common/params_pkg.sv` | 完成 |
| 常量编码 | `common/consts_pkg.sv` | 完成 |
| 类型定义 | `common/types_pkg.sv` | 完成 |
| 译码器 | `exu/decode.sv` | 基础、扩展、CSR、TLB、CACOP、IDLE、DBAR/IBAR 译码已实现并纳入测试 |
| ROB | `exu/rob.sv` | 提交、动态异常、精确异常/中断、ERTN、refetch 和恢复路径已实现 |
| Map Table | `exu/rename/rename_maptable.sv` | 完成 |
| Free List | `exu/rename/rename_freelist.sv` | 完成 |
| Busy Table | `exu/rename/rename_busytable.sv` | 完成 |
| Rename Stage | `exu/rename/rename_stage.sv` | 完成 |
| Dispatch | `exu/dispatch.sv` | 完成（双路独立打包和逐入口反压） |
| Issue Slot | `exu/issue/issue_slot.sv` | 基本完成，优化项见下 |
| IFU | `ifu/ifu.sv` | 单 outstanding IMMU+ICache、同拍下一请求、双 Composer F3 预测、RAS/GHist、FTQ 和恢复闭环已生产接入 |
| Fetch Buffer | `ifu/fetcher_buffer.sv` | 4 取指到 2 译码宽度转换及 FTQ/taken 元数据到 uop/提交的传输已测试 |
| 地址转换 | `mmu/`、TLB 相关模块 | IMMU/DMMU、地址转换和 TLB 基础路径已实现并测试；DMMU 直映射/DMW bypass 支持 CHECK 当拍响应和反压锁存 |
| Cache | ICache/DCache 相关模块 | ICache lookup hit 直接响应、8 KiB 4-way DCache、AXI 路径和 CACOP 基础功能已实现并测试 |
| 分支预测组件 | `ifu/bpd/` | UBTB、BIM、BTB、Composer、RAS、GHist、F3 predecode、update router 已通过独立/集成测试 |
| FTQ | `ifu/fetch_target_queue.sv` | 已接入生产 IFU、核心 commit/brupdate、注册执行查询和架构全 flush；参数化与闭环测试通过 |
| 乱序内核 | `exu/loom_core.sv` | Fetch Buffer 直连 Decode 边界已验证，由 `core_top.sv` 负责 SoC 接口 |
| SRT-4 除法器 | `exu/exe/div/`（`srt4_core` + `divider` 符号包装层） | 完成，接入 `unq.sv`，`test/div` 契约测试通过 |

---

## 前端状态与剩余缺口

| 项目 | 当前状态 | 剩余工作 |
|------|---------|---------|
| 取指并发 | IFU+IMMU+ICache 当前只允许一个未完成请求；直映射/命中可直接响应，接受 fetch packet 时可同拍发起下一翻译/BPD | 后续增加 tag/FTQ index/frontend epoch、多 outstanding 和 replay |
| 分支预测 | 双 Composer、F3 predecode、update router、RAS、GHist 和 FTQ 已在生产 IFU 实例化并驱动 next PC | 基线显示先优化多 outstanding、数据侧并发和预测准确度，F1/F2 早重定向暂缓 |
| 预测元数据 | 真实 FTQ index、predicted-taken 和 predicted-npc 已经 IFU→Fetch Buffer→`loom_core`→uop 传递 | 多 outstanding 时扩展请求身份，不改变逐 lane 元数据契约 |
| GHist/RAS | fetch-wide 双 bank 更新、branch rewind repair 及异常/中断/ERTN 全清空已接入并测试 | F1/F2 早重定向时重新验证投机更新时间点 |
| FTQ 闭环 | 与 Fetch Buffer 原子分配，已接 commit、brupdate、branch rewind、BPD 训练和架构全 flush | 多 outstanding 时把请求 tag/epoch 与 FTQ 身份绑定 |
| 目标校验 | 条件分支比较方向，B/BL 使用 F3 直接目标，JIRL 使用注册 FTQ next-PC 查询 | 后续性能优化不得改变执行级校验契约 |
| 地址转换 | IMMU/ITLB 基础路径已接入 | 多 outstanding 时补请求身份、epoch 和迟到响应丢弃 |
| 重定向接口 | branch rewind 与异常/中断/ERTN 全前端清空语义已区分并通过 Cache/AXI 在途恢复测试 | 多 outstanding 时扩展 epoch 比较和 replay |
| 核心输入 | `loom_core` 保留逐 lane 完成掩码，包稳定性和部分接收已测试 | 继续维持 `valid && ready` 前包内容稳定的契约 |

### 已实现的分支预测生产接入边界

- BPD/FTQ 归 `ifu.sv` 管理；`core_top.sv` 只连接 IFU、Fetch Buffer、`loom_core` 和 SoC 接口。
- 两个 Composer 分别服务两个取指 bank；Composer 只包含 UBTB/BIM/BTB，RAS、GHist、F3 predecode 和 FTQ 直接归 IFU 控制。
- 当前生产版本采用 F3 已对齐预测，不启用 F1/F2 早重定向；指令、lane、FTQ index、taken、predicted-npc 和 meta 保持一一对应。
- 非 bank 对齐重定向需保留正确的逐 lane valid/元数据关系。Fetch Buffer 可以压缩稀疏 lane，但入队前不得错误平移 meta。
- Fetch Buffer 接受 fetch packet 与 FTQ 分配必须是同一事务；任何一侧未 ready 时两侧状态都不能推进。
- core redirect 必须高于预测 next PC。branch mispredict 从对应 FTQ 项恢复，异常、中断和 ERTN 使用全前端清空语义。
- ALU 发起的 FTQ 查询结果必须寄存并与执行级 uop 对齐；JIRL 还需要 FTQ 提供预测 next PC 才能验证目标。
- `test/core_ifu/` 已覆盖预测训练、RAS/GHist repair、随机反压和全前端 flush；
  `test/core_top_recovery/` 已覆盖生产 Cache/AXI 在途事务恢复。
- 官方功能 ELF 在正常和确定性 AXI 背压模式下均通过 58/58 测试点。
- 性能统计已覆盖 CoreMark、`fireye_A0`、`stream_copy` 和 `crc32`。本轮 IMMU/ICache
  直接响应与 IFU 同拍下一请求组合使 `stream_copy`、`crc32` IPC 分别提升约 40.0%、69.4%；
  后续分别跟踪 tagged 多 outstanding 前端、LSU/数据侧并发和预测准确度，F1/F2 暂不优先。

---

## ROB 缺口

### 1. 已实现（2026-07-27 审计确认）

- 异常按项存储：`rob_exception` / `rob_exc_cause` / `rob_exc_badvaddr` 随 uop 入队记录静态异常，动态 ALE 经 `lxcpt` 写入对应项（带分支 kill、S_ROLLBACK 屏蔽和 rob_idx 回绕别名检查）——替代了原计划的 `r_xcpt_val/r_xcpt_uop/r_xcpt_badvaddr` 单寄存器方案
- 异常只在 head 抛出，同周期只抛一个且年长 commit 优先
- `com_xcpt`/`flush` 已接 CSR（FT_XCPT/FT_ERTN/FT_REFETCH），重定向目标由 `loom_core` 选择（异常入口/ERTN/pc+4），`flush_frontend` 已接正式前端

### 2. 仍未实现：mini-exception / CSR replay

- `csr_replay` 是死端口（两个 core 均 tie '0）；CSR 目前靠 `is_unique` 全串行化 + `flush_on_commit` refetch 规避 RMW 冲突，功能正确但有性能代价
- 仅当解除 CSR 串行化后才需要：冲突检测源（csr_file 有未提交写与读同地址）→ ROB mini-exception（标记后**不写 CSR**、到 head 触发 flush）→ 从自身 PC refetch（现有 FT_REFETCH 是 pc+4，需新增类型区分）

### 4. 小缺口

| 项目 | 说明 |
|------|------|
| `next_rob_state` | 声明了没用，死代码 |
| commit 时的 `debug_wdata` | trace/debug 用的写回数据存储器未实现 |
| `com_load_is_at_rob_head` | 端口未声明——LSU 需要知道 head 是否是 load（某些 load 只能在 head 时发射） |
| `rob_uop` 存储优化 | 当前存储完整 `uop_t`（~700bit），后续可以压缩为只存提交需要的字段 |

---

## Decode 剩余缺口

### 已完成

- TLBSRCH、TLBRD、TLBWR、TLBFILL、INVTLB 已细分为对应 `tlb_cmd`，并带 PLV 检查。
- CACOP 已区分支持范围、地址源和权限行为；ERTN、IDLE、DBAR、IBAR 已产生对应 uop 标记。
- 上述译码已由 `test/decode/` 覆盖，并有核心级 TLB、CACOP 和 advance 指令测试。

### 仍需补充

- 将全部已支持基础/扩展/特权指令纳入穷举编码与非法编码边界测试，避免只覆盖代表性机器码。
- 对照最终采用的 LA32 架构版本复核 CACOP hint、INVTLB op 和屏障 hint 的保留编码行为。
- 后续新增指令时继续维持“Decode 分类、UNQ/LSU 执行、ROB 精确提交”三层测试。

---

## uop_t 缺口

| 字段 | 说明 |
|------|------|
| `iw_p1_speculative_child` / `iw_p2_speculative_child` | Issue Queue squash 逻辑需要，当前 decode 未填 |
| `iw_p1_bypass` / `iw_p2_bypass` / `iw_p3_bypass` | bypass 网络提示，当前 decode 未填 |
| `ppred` | 谓词预测（SFB 优化），当前未使用 |
| `fcn_dw` | 双字操作标记，LA32 下始终为 0 |
| `imm_rename` | 立即数重命名，当前未使用 |

---

## Issue Slot 优化项

以下功能不影响基本乱序执行正确性，属于性能/优化项：

| 项目 | 说明 | 何时需要 |
|------|------|---------|
| `bypass_hint` | 唤醒时标记操作数可从 bypass 网络获取，省去 regfile 读端口 | 性能优化时补（结果功能正确，只是多读一次 regfile） |
| `speculative_child` + `rebusy` | 投机唤醒后若生产者被 branch flush，消费者需重新标记 busy | **启用投机唤醒前必须补**，否则被误唤醒的消费者可能读到错误数据 |
| `pred_wakeup_port` | SFB 谓词化优化的唤醒端口 | SFB 启用时补 |
| `squash_grant` | 发射后因资源冲突被 squash，防止重复发射 | Issue Unit 写完后补 |

## Issue Unit 优化项

| 项目 | 说明 | 何时需要 |
|------|------|---------|
| 移位压缩网络 | 当前用简单填坑式 compaction（找到一个空位放一个），BOOM 用的是双向移位网络——快槽一次移多位、慢槽一次移一位，dispatch 吞吐更高 | 性能优化时补 |
| `fu_types` 端口匹配 | 当前同 IQ 内所有槽位对任意 issue 端口兼容，未按 FU 类型区分。有多个不同 FU 共享 IQ 时需要区分 | 执行单元写完后补 |
| dispatch→slot 流水寄存器 | 当前 dispatch 组合逻辑直连 slot 输入，时序路径较长（compaction + slot CAM）。加寄存器切一拍可改善频率 | 时序收敛时补 |

## ALU 执行单元简化项

| 项目 | 说明 | 何时需要 |
|------|------|---------|
| `OP1_PC` | ALU 已直接选择 `exe_uop.pc`，不再依赖顶层伪造 `src1_data` | 完成 |
| 立即数扩展在核心集成层 | `loom_core.sv` 已按 `imm_sel` 扩展 `imm_packed` 后送入执行单元，这是当前确定的模块边界 | 完成 |
| 分支预测目标校验 | 条件分支、B/BL 和 JIRL 已使用 taken/F3 目标/注册 FTQ next-PC 判断误预测 | 完成；后续保持执行级校验契约 |
| `br_mask` 更新未做 | `res.uop.br_mask` 未用 `GetNewBrMask(brupdate)` 清已解析分支位。不影响功能（提交或 flush 时会清），但多占用 br_tag 槽位 | 后续优化 |
| `squash_iss` / `child_rebusy` / `pred_wakeup` | 省略。跟 issue_slot 优化项对应，等 issue_slot 补齐后同步加 | issue_slot 优化项完成后补 |

## 立即数扩展规范

`decode` 对每条指令只生成 `imm_sel`（扩展类型）和 `imm_packed`（原始未扩展的立即数）。实际 32 位立即数的扩展在 `loom_core.sv` 内完成后再喂给执行单元。规则如下：

| `imm_sel` | 意义 | 原始位宽 | 扩展方式 |
|-----------|------|---------|---------|
| `IMM_I12` | I 型 12 位 | `imm_packed[11:0]` | `{{20{imm[11]}}, imm[11:0]}` |
| `IS_S` | S 型 12 位 | `imm_packed[11:0]` | `{{20{imm[11]}}, imm[11:0]}` |
| `IMM_I16_S2` | B 型 16 位 | `imm_packed[15:0]` | `{{16{imm[15]}}, imm[15:0]}` |
| `IMM_U20_S12` | U 型 20 位 | `imm_packed[19:0]` | `{imm[19:0], 12'b0}` |
| `IMM_I26_S2` | J 型 26 位 | `imm_packed[25:0]` | `{{6{imm[25]}}, imm[25:0]}` |
| `IMM_U5` | 5 位移位量 | `imm_packed[4:0]` | `{27'b0, imm[4:0]}` |
| `IMM_NONE` | 无立即数 | — | `32'b0` |
| `IMM_U14` | CSR 地址 | `imm_packed[13:0]` | `{18'b0, imm[13:0]}` |

另外 `I20` 类指令的 20 位立即数移位同理：`imm_data = {i20, 12'b0}`，`imm_sel = IMM_U20_S12`。

### 验证：跟备份代码的对应关系

| 备份信号 | 备份计算 | 我们的等价逻辑 |
|---------|---------|--------------|
| `i12_extend` | `SignExt ? sign : zero` | IMM_I12 + 顶层 sign-ext |
| `i20_sllD` | `{i20, 12'b0}` | IMM_U20_S12 + `imm_packed[19:0] = i20` |
| `offs_26_extend` | `{6{bit25}, offs_26}` | IMM_I26_S2 + `imm_packed[25:0] = offs_26` |
| `offs_16_extend` | `{16{bit15}, offs_16}` | IMM_I16_S2 + `imm_packed[15:0] = offs_16` |

---

---

## 顶层连线注意事项

`loom_core.sv` 必须处理的接口对接：

### 1. `br_tag` / `br_mask` 灌入 uop

`br_mask` 模块和 `decode` 是独立的。decode 出的 uop 里 `br_tag`=0, `br_mask`=0。需要在 decode 之后、rename 之前用 `br_mask` 的输出填入：

```systemverilog
// loom_core.sv 中
dec_uops[w].br_tag  = br_mask_inst.br_tag[w];
dec_uops[w].br_mask = br_mask_inst.br_mask[w];
```

### 2. flush/kill 信号统一命名

| 模块 | 当前端口名 |
|------|-----------|
| ROB | `flush` |
| rename_stage | `kill` |
| issue_slot | `kill` |
| br_mask | `flush_pipeline` |

顶层连线时统一接到 ROB 的 flush 输出（或 `rob.io.flush.valid`）。

### 3. Dispatch 到 Issue Queue 的打包已完成

`dispatch.sv` 现在按 IQ 独立压缩输出，保持程序顺序，并根据各 IQ 的
逐入口 `ready` 向量执行前缀派发。`test/dispatch/` 覆盖不同 IQ、同 IQ
双派发以及仅一个入口可用时的反压行为。

## UNQ 执行单元简化项

| 项目 | 说明 | 何时需要 |
|------|------|---------|
| ~~DIV 组合除法器~~ | 已替换为 `exu/exe/div/` 的 SRT-4 迭代除法器（无符号内核 + 符号包装层），可 kill、经 `test/div` 契约验证 | 完成 |
| MUL/DIV 串行化 | 七种 LA32 乘除法语义已完成，但当前仍标记为 `is_unique`，会等待 ROB 清空后串行执行 | 完成长延迟并行执行和回滚验证后解除 |
| ~~DIV 拍数固定~~ | SRT-4 迭代除法器延迟随操作数变化（约 2–21 拍） | 完成 |
| 无 fast wakeup | 多周期操作不拉快速 bypass，MUL/DIV 结果多等一拍 | 性能优化 |
| `pipe_uop` 在 `kill` 时未刷新 | 多周期执行中发生 flush，`pipe_uop` 不会清。`res_valid` 已被 `state` 归零挡住 | 无害，可优化 |

## 后端恢复边界

| 项目 | 当前状态 | 剩余工作 |
|------|---------|------|
| LSU 晚到响应 | `loom_core` 已改用正式 LSU，LDQ 会用有效位和 generation 拒绝错误路径的迟到响应 | 后续接入 cache replay 时继续保持同一 tag/generation 契约 |

## LSU load/store 顺序

| 项目 | 当前问题 | 影响 |
|------|---------|------|
| 正式 LSU 集成 | 已实例化 LDQ/STQ 并连接查询、阻塞、转发、commit 和恢复接口 | 基础集成完成，ALE 动态异常已接 ROB `lxcpt`；仍缺 TLB 类访存异常和 cache replay |
| 共享内存端口 | 已实现锁定式轮询仲裁，握手后在 load/store 间翻转优先级 | `test_lsu_formal.cpp` 已覆盖反压稳定性和后到请求不抢占 |
| 迟到响应恢复 | 正式 LSU 按响应类型路由 tag，LDQ 按 generation 和 flush 拒绝迟到响应 | 正式 LSU 和 `branch_recovery` 集成测试均已通过 |

对应定向测试位于 `test/lsu/test_lsu_ordering.cpp` 和
`test/lsu/test_lsu_formal.cpp`。当前队列级的阻塞、转发、ROB 回绕、
store 提交、双队列并发反压、flush 迟到响应，以及正式 LSU 仲裁和响应
分流测试均已通过。

---

## 主要模块状态（按依赖顺序）

```
[✓] rob.sv            — 提交、异常/中断、ERTN、refetch 和恢复；CSR replay 仍待补
[✓] rename/           — 寄存器重命名 (maptable + freelist + busytable + stage)
[✓] dispatch.sv       — 分发到 Issue Queue
[✓] issue_slot.sv     — 单槽位 (优化项见上)
[✓] issue_unit_collapsing.sv — 当前发射、唤醒和基础压缩策略；性能优化项见上
[✓] branch_mask.sv     — 分支标签分配 + br_mask 生成
[✓] alu.sv / mem.sv / unq.sv — 执行单元；分支方向和 B/BL/JIRL 目标校验已接 FTQ
[✓] regfile.sv       — 物理寄存器文件及旁路
[✓] ifu.sv + fetcher_buffer.sv + bpd/* + fetch_target_queue.sv
    — F3 预测、元数据、训练、branch rewind 和架构全 flush 生产闭环完成；多 outstanding 待补
[✓] lsu.sv / dcache.sv / icache.sv — 访存与缓存基础路径
[✓] mmu/* + TLB      — 地址转换基础路径；多 outstanding 身份/epoch 待补
[✓] exu/loom_core.sv — 乱序内核连线及前端 FTQ/taken/pc_lob 元数据传输
```

---

*最后更新: 2026-08-02*
