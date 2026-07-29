# Real ELF core test

This suite loads the `PT_LOAD` segments from the NSCSCC functional-test ELF,
starts the production IFU at the ELF entry, and connects instruction and data
requests to a shared byte-addressed memory model.

The default milestone is the first NSCSCC instruction test. The run passes
when the program writes `0x01000001` to the simulated `NUM` register at
`0xbfaff050`. An exception, an out-of-image instruction fetch, a failed
functional-test status, or the no-commit watchdog fails the run.

The small CONFREG model matches the functional testbench's simulation flag,
timer, and `8'hff` switch setting. In particular, `SW_INTER` returns
`0x0000aaaa`, so the inter-test delay completes quickly.

Run the default image:

```bash
./test/core_elf/run.sh
```

Useful diagnostic modes:

```bash
./test/core_elf/run.sh --trace
./test/core_elf/run.sh --stress
./test/core_elf/run.sh --allow-exceptions --target-tests 47
./test/core_elf/run.sh --target-commits 500
./test/core_elf/run.sh --target-tests 2 --max-cycles 2000000
```

`--allow-exceptions` is required for exception and interrupt tests. It lets the
core enter the architectural handler and keeps the final `NUM` result as the
pass/fail authority. Without it, any exception remains an immediate failure,
which is useful for the earlier instruction and memory tests.

Use another image or disassembly:

```bash
ELF_PATH=/path/to/main.elf DISASM_PATH=/path/to/test.s \
  ./test/core_elf/run.sh
```

## Differential lockstep (`--differential`)

`--differential` runs the LA32 reference interpreter
(`test/common/la32_ref.{h,cpp}`, the same model that passes the suite
standalone in `test/core_ref`) in lockstep with the RTL. Every RTL commit is
compared against one reference step:

- **PC sync** — `commit_pc` must equal the reference pc before the step.
- **GPR writeback** — `commit_ldst != 0` requires the same `rd` and the same
  data (via the test top's `commit_wdata`, packed from
  `commit.debug_wdata`). Results flagged `data_unstable` by the reference
  (`rdcntvl/rdcntvh`, `csrrd` of `TVAL`/counter CSRs, loads from the TIMER
  MMIO register) compare `rd` only, because each model ticks its counters
  from a different source. `rdcntid` (returns TID) is compared exactly.
- **Store stream** — every `dmem_req` store must match the reference store
  log in program order (address, byte count, data; RTL lane-packed data is
  shifted down before the compare). CONFREG writes take part, so the `NUM`
  writes are checked too. Both streams must be empty at the end of the run.
- **Exceptions** — deterministic exceptions (SYS/BRK/INE/ALE/ADEF/IPE) must
  fire at the same pc with the same ecode and instruction word; ALE also
  compares BADV (ADEF's BADV is checked indirectly through the handler's
  `csrrd BADV` writeback compare). Interrupts (cause `INT`) must fire at the
  same boundary pc; if the reference cannot take the interrupt on its own
  (its timer ticks per instruction, the RTL's per cycle), the harness calls
  `force_timer_irq()` and counts it under `forced_irq`. Software interrupts
  (n51, via a CSR write to `ESTAT.IS`) are architecturally mirrored and
  synchronize exactly.
- **ERTN** is covered by PC sync on the following commit.

A mismatch prints both sides (RTL pc/inst/ldst/wdata/rob_idx vs reference
expected pc/rd/wdata), the pending store queues, and the recent-commit ring
buffer, then exits 1.

`--diff-selftest-corrupt N` proves the checker fires: at the Nth comparison
it steps the reference one extra instruction, guaranteeing a PC-desync
FAIL with exit 1.

```bash
./test/core_elf/run.sh --allow-exceptions --target-tests 58 \
    --max-cycles 5000000 --differential
./test/core_elf/run.sh --allow-exceptions --target-tests 58 \
    --max-cycles 5000000 --differential --stress
./test/core_elf/run.sh --allow-exceptions --differential \
    --diff-selftest-corrupt 1000   # must FAIL
```

Both the normal and the `--stress` runs pass 58/58 with zero desyncs
(`DIFF-PASS` line); the timer-interrupt tests synchronize through a small
number of forced boundaries (see `forced_irq`).


This suite is intentionally not part of `test/run_all.sh`: its default input
lives outside this RTL directory, and later NSCSCC tests require architectural
features that are still under development.

Current verified boundary:

- All 58 tests complete with `NUM=0x3a00003a`, both normally and with
  deterministic instruction/data-memory backpressure.
- The ADEF regression verifies that a misaligned fetch target does not issue an
  instruction-memory request, emits one synthetic exception entry, and holds
  the frontend until the architectural exception redirect.
- The former test-45 no-commit watchdog was caused by fixed-low-slot LDQ query
  selection. The `slot_fair` regression now covers the rotating-query fix.
