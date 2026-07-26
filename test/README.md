# Verilator module tests

Each subdirectory contains a small SystemVerilog wrapper, a C++ driver, and a
standalone `run.sh`. The wrappers expose scalar controls for the packed backend
types; they do not replace logic in the design under test.

Run every suite:

```bash
./test/run_all.sh
```

Run one suite:

```bash
./test/rename/run.sh
./test/issue/run.sh
./test/rob/run.sh
./test/csr/run.sh
./test/alu/run.sh
./test/decode/run.sh
./test/dispatch/run.sh
./test/br_mask/run.sh
./test/regfile/run.sh
./test/mem/run.sh
./test/unq/run.sh
./test/lsu/run.sh
./test/fetch_buffer/run.sh
./test/ifu/run.sh
./test/ifu_fetch_buffer/run.sh
./test/core_fetch_buffer/run.sh
./test/core_ifu/run.sh
./test/core_lsu/run.sh
./test/core_program/run.sh
./test/core_exception/run.sh
./test/core_interrupt/run.sh
./test/core_interrupt_lsu/run.sh
./test/core_top/run.sh
./test/core_top_axi/run.sh
./test/branch_recovery/run.sh
./test/integration/run.sh
```

Run the real NSCSCC ELF milestone separately:

```bash
./test/core_elf/run.sh
./test/core_top_elf_axi/run.sh --allow-exceptions --target-tests 58
./test/core_top_elf_axi/run.sh --allow-exceptions --target-tests 58 --stress
```

`test/core_elf/run.sh` parses the ELF32 program headers, loads every `PT_LOAD`
segment into a shared instruction/data memory model, starts execution at
`0x1c000000`, and uses `test.s` to annotate failure traces. It is not included
in `run_all.sh` because the default ELF is stored outside this RTL directory.
See `test/core_elf/README.md` for milestone and diagnostic options.

`test/core_top_elf_axi/run.sh` uses the same ELF completion signature but
routes every instruction fetch, load, and store through the production
`core_top` AXI3 ports. It checks AXI IDs, burst attributes, independent AW/W
handshakes, request stability under backpressure, and completion of the final
store response. It is also kept out of `run_all.sh` because it depends on the
external functional-test ELF.

`test/csr/run.sh` is the standalone contract suite for the CSR file and is
included in `run_all.sh`.

`test/core_exception/run.sh` is the precise exception and ERTN integration
suite and is included in `run_all.sh`.

`test/core_interrupt/run.sh` is the precise interrupt and ERTN integration
suite and is included in `run_all.sh`.

`test/core_interrupt_lsu/run.sh` covers interrupt recovery boundaries shared
with the LSU and branch unit and is included in `run_all.sh`.

`test/core_top/run.sh` defines the black-box port contract for the future
production `cpu_core` top and is included in `run_all.sh` in reference mode.

`test/core_lsu_exception/run.sh` covers precise misaligned load/store `ALE`
exceptions and is included in `run_all.sh`.

Current coverage:

- `rename`: initial allocation, read-after-write dependency, same-bundle map
  bypass, busy tracking, and release of a committed stale mapping.
- `issue`: dispatch, ready issue, wakeup, full-queue backpressure, flush,
  misprediction kill, grant squash/retry, and resolved branch-tag reuse.
- `rob`: two-bank enqueue, out-of-order completion with in-order commit,
  pointer wrap, precise static and dynamic exceptions, synchronous-exception
  priority over interrupts, rollback, refetch, and ERTN flush.
- `alu`: integer arithmetic, comparisons, logic, shifts, immediate selection,
  ROB identity propagation, early wakeup, and branch resolution.
- `decode`: real LA32 encodings from `test.s` for integer ALU, immediate,
  load/store, branch, all seven multiply/divide variants, CSR, syscall,
  CSR/ERTN privilege checks, and illegal instructions.
- `dispatch`: IQ routing, program-order backpressure, inactive lanes, uop
  identity, and same-IQ dual-dispatch loss detection.
- `br_mask`: nested allocation, resolution, exhaustion, pipeline flush, and
  misprediction recovery.
- `regfile`: simultaneous reads and writes, combinational write bypass, the
  hardwired zero register, and write-port conflict priority.
- `mem`: address generation, store-data generation, pipeline latency, uop
  identity, XLEN wraparound, kill, single-port MEM IQ contention, conservative
  store operand waiting, and same-cycle issue/wakeup/refill behavior.
- `unq`: CSR request/response, ERTN completion without a CSR request, all seven
  LA32 multiply/divide variants, signed overflow, deterministic divide-by-zero
  results, uop identity, branch recovery, and kill.
- `lsu`: scalar and two-wide load-queue contracts plus store-queue allocation,
  split address/data arrival, ROB busy clearing, pre-commit write suppression,
  SB/SH/SW formatting, commit-order draining, backpressure, recovery, stale
  generation rejection, and initial load/store ordering contracts. Formal LSU
  coverage checks side-effect-free dispatch preview, locked shared-port
  arbitration, load-to-store priority rotation, and response routing. The
  ordering groups cover unresolved older stores, non-alias and byte-mask
  non-overlap, exact-match forwarding, waiting for late store data, store
  commit/drain behavior, ROB-index wraparound, simultaneous LDQ/STQ requests,
  and rejection of load responses arriving after a flush.
- `ifu`: reset and sequential bundle fetch, instruction-memory and backend
  backpressure stability, bundle compaction for unaligned redirect targets,
  latest-redirect priority, buffered wrong-path invalidation, and rejection of
  responses from stale requests.
- `fetch_buffer`: four-wide enqueue to two-wide dequeue conversion, sparse-lane
  compaction, partial output, backpressure stability, full-capacity handling,
  simultaneous dequeue/enqueue, circular wraparound, flush priority, and a
  deterministic software queue comparison.
- `ifu_fetch_buffer`: production IFU and Fetch Buffer integration, covering
  four-to-two draining, full-buffer backpressure, stalled output stability,
  unaligned redirects, stale instruction-memory responses, and clearing both
  buffered and IFU-held wrong-path packets.
- `core_fetch_buffer`: IFU, Fetch Buffer, and temporary-core integration,
  covering continuous two-wide acceptance, core backpressure stability,
  unique packet ownership, exclusive unique dispatch, commit ordering, and
  buffered wrong-path branch recovery. The core-facing packet remains owned by
  the Fetch Buffer until all valid lanes have entered Decode.
- `core_ifu`: production IFU connected to the temporary core, covering complete
  four-lane packet acceptance and redirect recovery with a delayed stale
  instruction-memory response. IFU redirect wiring uses the core's public
  redirect valid/PC interface.
- `core_lsu`: real LA32 load/store instructions through Decode, Rename, Issue,
  MEM, the production LSU, DMem, writeback, and ROB commit. It checks word-load
  dependencies, SB/SH/SW requests, commit-gated stores, signed and unsigned
  load formatting, stalled-request stability, store-to-load forwarding,
  wrong-path store suppression, older committed stores with delayed
  acknowledgements, and 20-operation LDQ/STQ pressure recovery.
- `core_program`: continuous real-PC instruction streams through the temporary
  core, including an ALU block copied from `test.s`, conditional branches,
  direct `b`/`bl` redirects, `jirl`, link-register writeback, frontend
  backpressure stability, and suppression of wrong-path stores.
- `core_exception`: precise `syscall`, `break`, and illegal-instruction
  exceptions through Decode, ROB, CSR state update, and EENTRY redirection. It
  also covers older commit ordering, younger commit suppression, wrong-path
  exception cancellation, handler CSR reads, and an ERTN return contract.
- `core_interrupt`: global and per-source interrupt masking, CSR pending
  propagation, precise interrupt boundaries, EENTRY/ERA/CRMD/PRMD state, source
  deassertion, ERTN return, exact-once resumed commits, and level-sensitive
  retriggering when the source remains asserted.
- `core_interrupt_lsu`: interrupt recovery with outstanding memory operations,
  covering uncommitted-store suppression, committed-store draining, rejection
  of delayed pre-interrupt load responses, and branch-mispredict priority over
  a simultaneously pending IRQ.
- `core_top`: black-box instruction/data-memory handshakes, request stability
  under deterministic backpressure, architectural commit traces, branch
  recovery, precise synchronous exception reporting, and hardware-interrupt
  handler entry. The default reference mode composes IFU, Fetch Buffer, and
  the temporary backend without exposing their internal hierarchy.
- `branch_recovery`: real taken branches through the temporary core, including
  target-PC refetch, Map Table/Free List recovery, a 24-misprediction resource
  stress case, wrong-path ROB squash, and a delayed wrong-path LSU response.
- `integration`: the existing `tb_verilator.cpp` smoke program through Decode,
  Rename, Dispatch, Issue, Execute, and ROB commit, including lane0/lane1
  serializing CSR instructions, commit-time refetch, and end-to-end result
  checks for all seven multiply/divide variants.

These are directed module tests. The passing portions include dynamic LSU
alignment exceptions, but do not yet include dynamic IFU exceptions,
full-width dispatch, or memory partial issue.

The runner continues after a failed suite so one RTL failure does not hide
results from later modules. It returns a nonzero status if any suite fails.

Current status:

- Existing LDQ and STQ directed tests pass.
- All queue-level LSU ordering groups pass. The production `lsu.sv` now
  instantiates both queues, locks stalled shared-port requests, rotates
  load/store preference after each handshake, and passes its directed
  integration test.
- The `lsu_ordering/slot_fair` regression verifies that a younger blocked load
  in a low physical slot cannot starve an older runnable load in a higher slot.
  The LDQ request query uses a rotating cursor, including after blocked
  store-ordering queries.
- The production `loom_core.sv` uses the production LSU request/response
  path. The branch recovery suite verifies that an old wrong-path memory
  response cannot write back, wake a consumer, or complete a reused ROB entry.
- The `core_lsu` suite passes word loads, all byte/half/word load extensions,
  all store masks, DMem backpressure, store-to-load forwarding, branch recovery,
  and queue-full recovery without dropped or duplicated memory operations.
- `dispatch` now packs each IQ independently and preserves program order.
- `dispatch` covers per-slot Issue Queue backpressure for same-IQ dual dispatch.
- `dispatch` verifies that static exceptions enter the ROB path and bypass IQs.
- `core_exception` passes precise synchronous exception handling, wrong-path
  cancellation, CSR state updates, and the complete exception/ERTN round trip.
- `core_interrupt` passes masking, delayed hardware interrupt delivery, precise
  ROB-boundary rollback, CSR state updates, and the complete interrupt/ERTN
  round trip. Held-high interrupt input also retriggers after ERTN.
- `core_interrupt_lsu` passes the interrupt boundaries for killed and committed
  LSU entries, delayed responses, and simultaneous branch recovery.
