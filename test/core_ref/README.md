# core_ref — LA32 参考解释器自检

`test/common/la32_ref.{h,cpp}` 是 LA32（LoongArch32）指令集参考解释器，
供 differential testing 使用；本目录是独立自检驱动，不依赖 Verilator。

## 用法

```sh
bash test/core_ref/run.sh                 # 构建 + 跑 NSCSCC 功能测试 ELF
bash test/core_ref/run.sh <elf> --trace   # 逐条指令 trace
bash test/core_ref/run.sh <elf> --max-steps 5000000
```

也可以直接调用二进制：`./test/core_ref/core_ref --elf FILE [--trace]
[--disasm FILE] [--max-steps N] [--selftest-only]`。

## 自证原理

NSCSCC 功能测试（58 项，n1..n58）逐项自检指令语义：每项测试内部用
`bne/beq ... inst_error` 比对实际结果与期望结果，任意一条指令、CSR、
异常或中断语义出错都会走错分支，最终写出的 NUM 就不是全过标志。
解释器独立执行同一个 ELF，只有每一项都对，才会向 CONFREG NUM
（0xbfaff050）写入 0x3a00003a（58/58）。驱动检测到该写即 PASS 并
exit 0；NUM 报告某项失败、pc 跳出映像、或看门狗到期则 FAIL 并
dump 最近 20 条指令（配合 `--disasm test.s` 可定位到 n1..n58 标签）。

跑 ELF 前驱动先做一组编码级抽查（div/mod 除零与溢出、mulh 高低位、
移位掩码、符号扩展 load），数值敏感语义出错时立刻可见。

## 语义来源

- CSR/异常/定时器/中断：`csr/csr_file.sv`（逐条镜像，包括写掩码、
  复位值、异常进入/ERTN、TVAL 倒计时、TICLR、ESTAT.IS 软中断、
  `CRMD.IE & ECFG.LIE & ESTAT.IS` 中断判定）。
- 解码空间与 INE 判定：`exu/decode.sv`。
- CONFREG 外设（NUM/SWITCH/SW_INTER/SIMU_FLAG/TIMER）：
  `test/core_elf/test_core_elf.cpp`。
- ELF 加载：复用 `test/core_elf/elf_image.{h,cpp}`。

已知刻意简化：定时器按"每条指令减 1"倒计时（功能测试只等中断、不校验
周期）；稳定计数器用已执行指令数（rdcnt 测试只要求自洽单调）；
`dbar/ibar` 按 LoongArch 语义实现为 nop（测试不执行它们，RTL 目前对其
报 INE，做 lockstep 比对时需注意这一处差异）；`ll.w/sc.w` 为
always-succeed 简化模型（测试不使用）。
