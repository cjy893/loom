# LOOM (LA32 Out-of-Order Processor) — 功能缺口记录

## 已完成模块

| 模块 | 文件 | 状态 |
|------|------|------|
| 参数定义 | `common/params_pkg.sv` | 完成 |
| 常量编码 | `common/consts_pkg.sv` | 完成 |
| 类型定义 | `common/types_pkg.sv` | 完成 |
| 译码器 | `exu/decode.sv` | 指令分类完成，CACHE/TLB 子指令细节待补 |
| ROB | `exu/rob.sv` | 基本提交、静态异常和 flush 完成，动态异常待补 |
| Map Table | `exu/rename/rename_maptable.sv` | 完成 |
| Free List | `exu/rename/rename_freelist.sv` | 完成 |
| Busy Table | `exu/rename/rename_busytable.sv` | 完成 |
| Rename Stage | `exu/rename/rename_stage.sv` | 完成 |
| Dispatch | `exu/dispatch.sv` | 完成（双路独立打包和逐入口反压） |
| Issue Slot | `exu/issue/issue_slot.sv` | 基本完成，优化项见下 |
| IFU | `ifu/ifu.sv` | 单 outstanding 基础版本，完整前端功能待补 |
| Fetch Buffer | `ifu/fetcher_buffer.sv` | 4 取指到 2 译码宽度转换完成 |
| 乱序内核 | `exu/loom_core.sv` | Fetch Buffer 直连 Decode 边界已验证，由 `core_top.sv` 负责 SoC 接口 |

---

## 前端缺口

| 项目 | 当前状态 | 剩余工作 |
|------|---------|---------|
| 取指并发 | IFU 只允许一个未完成请求 | 接入 I-Cache 后支持所需的并发和 replay |
| 分支预测 | 当前依靠执行后重定向 | 实现预测器、FTQ 和预测目标校验 |
| 地址转换 | 当前直接使用物理测试地址 | 实现 ITLB、取指异常和权限检查 |
| 重定向接口 | `loom_core` 通过公开端口输出分支/ROB 重定向，并接收异常和 ERTN 目标 | 接入正式 CSR 后提供真实异常入口和 ERA 返回地址 |
| 核心输入 | `loom_core` 保留逐 lane 完成掩码 | 上游必须在 `valid && ready` 前保持包内容稳定 |

---

## ROB 缺口

### 1. 异常处理输出

| 端口 | 说明 | 需要做什么 |
|------|------|-----------|
| `com_xcpt` | 已生成静态译码异常的 PC、cause 和 flush 类型 | 后续接入 CSR 文件 |
| `flush` | 已覆盖异常、flush_on_commit 和 ERTN 类型 | 异常入口和 ERTN 目标仍需真实前端/CSR 提供 |
| `flush_frontend` | 已连接到临时顶层并阻止继续分发 | 后续接入真实前端 |

### 2. LSU/CSR 异常输入未使用

| 端口 | 说明 | 需要做什么 |
|------|------|-----------|
| `lxcpt` | LSU 发来的 load/store 异常 | 在 always_ff 中标记 `rob_exception[bank][row] <= 1'b1`，记录最老的异常 uop |
| `csr_replay` | CSR 指令需要重放 | 同上，CSR 读-修改-写冲突时需要 flush 并重试 |

### 3. 异常跟踪机制

- 需要寄存器 `r_xcpt_val`, `r_xcpt_uop`, `r_xcpt_badvaddr` 存储最老的未决异常
- 异常只能从 head 抛出（最老的在最前面）
- mini-exception（mem ordering/CSR replay）触发 flush 但不写 CSR
- 异常和 flush_on_commit 不能同时发生（同一周期只抛一个）

### 4. 小缺口

| 项目 | 说明 |
|------|------|
| `next_rob_state` | 声明了没用，死代码 |
| commit 时的 `debug_wdata` | trace/debug 用的写回数据存储器未实现 |
| `com_load_is_at_rob_head` | 端口未声明——LSU 需要知道 head 是否是 load（某些 load 只能在 head 时发射） |
| `rob_uop` 存储优化 | 当前存储完整 `uop_t`（~700bit），后续可以压缩为只存提交需要的字段 |

---

## Decode 缺口

### 1. CACHE/TLB 子指令未细分

当前 `INSTR_CACHE` 只处理了 ERTN 和 CACOP，以下子指令的 uop 字段未填充：

| 指令 | 编码 | 需要设什么 |
|------|------|-----------|
| TLBSRCH | `32'h0648_2800` | `fu_code[FC_CSR]=1`, TLB 查找操作 |
| TLBRD | `32'h0648_2c00` | `fu_code[FC_CSR]=1`, TLB 读 |
| TLBWR | `32'h0648_3000` | `fu_code[FC_CSR]=1`, TLB 写 |
| TLBFILL | `32'h0648_3400` | `fu_code[FC_CSR]=1`, TLB 填充 |
| INVTLB | `inst[31:15]==17'b00000110010010011` | `fu_code[FC_CSR]=1`, 无效化 TLB 条目 |
| IDLE | `32'h0648_8000` | `is_unique=1`, 等中断 |
| DBAR | `inst[31:15]==17'b00111000011100100` | `is_dbar=1`, 数据屏障 |
| IBAR | `inst[31:15]==17'b00111000011100101` | `is_ibar=1`, 指令屏障 |

### 2. 特权级检查

- CSR 和 ERTN 已检查 `status_prv`，非 PLV0 执行时产生 `ECODE_IPE`
- 尚未实现的 CACHE/TLB 特权指令当前按 `ECODE_INE` 处理
- 实现 CACHE/TLB/IDLE 时仍需按各指令权限补充 `ECODE_IPE` 检查

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
| `OP1_PC` 未连接 | ALU 内部 `OP1_PC` 分支 op1='0，`pcaddu12i` 等指令的 PC 值需由顶层填入 `src1_data` | `loom_core.sv` 连线时处理 |
| 立即数扩展在顶层 | 当前 `imm_data` 由顶层扩展好喂入（`IMM_I12`、`IMM_I16_S2`、`IMM_U20_S12` 等），未在 ALU 内部扩展 | `loom_core.sv` 连线时处理 |
| B/BL/JIRL 强制 mispredict | 无条件转移始终 `mispredict=1`，因为没有分支预测器验证目标地址。前端+FTQ 写完后改为比较预测目标和实际目标 | 前端+FTQ 写完后改 |
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
| DIV 组合除法器 | 当前 `$signed(a) / $signed(b)` 综合出巨大的组合除法器，面积和时序均不可接受 | 替换为迭代除法器 |
| MUL/DIV 串行化 | 七种 LA32 乘除法语义已完成，但当前仍标记为 `is_unique`，会等待 ROB 清空后串行执行 | 完成长延迟并行执行和回滚验证后解除 |
| DIV 拍数固定 | 当前固定 5 拍，实际应随操作数宽度动态变化 | 迭代除法器自带变长 |
| 无 fast wakeup | 多周期操作不拉快速 bypass，MUL/DIV 结果多等一拍 | 性能优化 |
| `pipe_uop` 在 `kill` 时未刷新 | 多周期执行中发生 flush，`pipe_uop` 不会清。`res_valid` 已被 `state` 归零挡住 | 无害，可优化 |

## 后端恢复边界

| 项目 | 当前状态 | 剩余工作 |
|------|---------|------|
| LSU 晚到响应 | `loom_core` 已改用正式 LSU，LDQ 会用有效位和 generation 拒绝错误路径的迟到响应 | 后续接入 cache replay 时继续保持同一 tag/generation 契约 |

## LSU load/store 顺序

| 项目 | 当前问题 | 影响 |
|------|---------|------|
| 正式 LSU 集成 | 已实例化 LDQ/STQ 并连接查询、阻塞、转发、commit 和恢复接口 | 基础集成完成，仍缺动态访存异常和 cache replay |
| 共享内存端口 | 已实现锁定式轮询仲裁，握手后在 load/store 间翻转优先级 | `test_lsu_formal.cpp` 已覆盖反压稳定性和后到请求不抢占 |
| 迟到响应恢复 | 正式 LSU 按响应类型路由 tag，LDQ 按 generation 和 flush 拒绝迟到响应 | 正式 LSU 和 `branch_recovery` 集成测试均已通过 |

对应定向测试位于 `test/lsu/test_lsu_ordering.cpp` 和
`test/lsu/test_lsu_formal.cpp`。当前队列级的阻塞、转发、ROB 回绕、
store 提交、双队列并发反压、flush 迟到响应，以及正式 LSU 仲裁和响应
分流测试均已通过。

---

## 待写模块（按依赖顺序）

```
[  ] rob.sv            — 补异常输出
[✓] rename/           — 寄存器重命名 (maptable + freelist + busytable + stage)
[✓] dispatch.sv       — 分发到 Issue Queue
[✓] issue_slot.sv     — 单槽位 (优化项见上)
[  ] issue_unit.sv    — 发射队列 (唤醒 + 选择)
[✓] branch_mask.sv     — 分支标签分配 + br_mask 生成
[  ] alu_exe_unit.sv / mem_exe_unit.sv / unq_exe_unit.sv — 执行单元
[  ] regfile_banked.sv — 物理寄存器文件
[  ] frontend.sv + ftq.sv + fetch_buffer.sv + bpd/* — 前端 + 分支预测
[✓] lsu.sv / [  ] dcache.sv — 访存单元 / 数据缓存
[x] exu/loom_core.sv — 乱序内核连线
```

---

*最后更新: 2026-07-25*
