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
./test/div/run.sh
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
./test/lsu_dmmu/run.sh
./test/bpd_regression/run.sh
./test/icache/run.sh
./test/dcache/run.sh
./test/cacop_ctrl/run.sh
./test/fetch_buffer/run.sh
./test/fetch_metadata/run.sh
./test/ifu/run.sh
./test/ifu_fetch_buffer/run.sh
./test/core_fetch_buffer/run.sh
./test/core_fetch_metadata/run.sh
./test/core_ifu/run.sh
./test/core_lsu/run.sh
./test/core_tlb/run.sh
./test/core_program/run.sh
./test/core_exception/run.sh
./test/core_interrupt/run.sh
./test/core_interrupt_lsu/run.sh
./test/core_top/run.sh
./test/core_top_axi/run.sh
./test/core_top_recovery/run.sh
./test/branch_recovery/run.sh
./test/integration/run.sh
```

`test/rename/run.sh` compiles the production Rename modules separately with
`MAX_BR_COUNT=4`, `6`, and `8`. Each configuration checks same-cycle tag reuse
and nested recovery through the highest two legal MapTable/Freelist snapshots.
The Core ELF test also accepts `--check-branch-tag-contract`, which compares the
global branch-tag capacity with the capacity actually elaborated in Rename.

Run all production branch-prediction modules, FTQ configurations, metadata
transport checks, and predictor integration tests with:

```bash
./test/bpd_regression/run.sh
```

The banked organization contract still uses a test-only wrapper; the other
tests in the aggregate run their production modules. Reference variants remain
available for validating selected test harnesses:

```bash
./test/f3_predecode/run.sh --reference
./test/bpd_update_router/run.sh --reference
./test/bpd_banked/run.sh
```

The blocking cache contracts can be validated before their production modules
exist:

```bash
./test/icache/run.sh --reference
./test/dcache/run.sh --reference
./test/cacop_ctrl/run.sh --reference
```

LA32 TLB and translation contracts can be validated independently:

```bash
./test/tlb/run.sh
./test/mmu/run.sh
./test/mmu_integration/run.sh
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

`test/div/run.sh` defines the standalone signed/unsigned quotient and remainder
contract for the SRT divider and is included in `run_all.sh`.

`test/core_exception/run.sh` is the precise exception and ERTN integration
suite and is included in `run_all.sh`.

`test/core_interrupt/run.sh` is the precise interrupt and ERTN integration
suite and is included in `run_all.sh`.

`test/core_interrupt_lsu/run.sh` covers interrupt recovery boundaries shared
with the LSU and branch unit and is included in `run_all.sh`.

`test/core_top/run.sh` defines the black-box port contract for the future
production `cpu_core` top and is included in `run_all.sh` in reference mode.

`test/core_lsu_exception/run.sh` covers precise misaligned load/store `ALE`
exceptions plus end-to-end load/store `TLBR`, `PIL`, `PIS`, `PPI`, and `PME`
delivery through DMMU, LSU, ROB, and CSR state. It is included in `run_all.sh`.

Current coverage:

- `divider`: signed and unsigned quotient and remainder operations, directed
  edge cases, deterministic divide-by-zero results, signed overflow, request
  and response backpressure, response stability, kill, and deterministic
  randomized arithmetic comparison.
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
  TLB management commands, all legal and representative illegal `INVTLB`
  operations, all supported and unsupported `CACOP` codes, mode-dependent
  privilege checks, and illegal instructions.
- `cacop_ctrl`: all six I/D-Cache and mode combinations, direct-index
  translation bypass, mode-2 translation faults, cache request and response
  backpressure, ROB identity, unsupported-code NOPs, and pre-accept flush
  recovery. Until the production controller exists, run its reference mode.
- `f3_predecode`: frontend classification of all LA32 conditional branches,
  `B`, `BL`, and `JIRL`, direct-target formation, call/return recognition,
  and fixed-width return addresses.
- `bpd_update_router`: v4-style fetch-wide update splitting across two
  physical predictor banks, including start-bank rotation, local CFI indices,
  metadata/history routing, first-bank CFI truncation, and cache-line ends.
- `bpd_banked`: two physical Composer banks connected in logical fetch order,
  including bank-aligned requests, bank-1 wrap, physical metadata identity,
  BIM training, first-bank CFI truncation, and cache-line ends.
- `tlb`: production unified dual-port LA32 TLB coverage for 4KB and 4MB
  pages, even/odd selection, ASID/global matching, indexed read/write,
  parameterization, and all `INVTLB` operations.
- `mmu`: production LA32 address-translation coverage for direct mode, DMW0/DMW1,
  TLB physical-address composition, MAT/cacheability, BADV, and paging
  exception priority.
- `mmu_integration`: production TLB and address-translator integration,
  including one-cycle request/response context alignment, direct/DMW bypass,
  mapped 4KB/4MB requests, paging exceptions, INVTLB, and continuous traffic.
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
  and rejection of load responses arriving after a flush. These queue-focused
  harnesses use a registered identity translator so every address still passes
  through the translation handshake; `lsu_dmmu` covers real DMMU translation,
  TLB stalls, translation exceptions, and flush recovery.
- `ifu`: reset and sequential bundle fetch, translation, instruction-memory,
  and backend backpressure stability, translated physical addresses and memory
  attributes, `ADEF`/`PIF`/`TLBR`, latest-redirect priority, buffered
  wrong-path invalidation, and rejection of stale memory responses.
- `fetch_buffer`: four-wide enqueue to two-wide dequeue conversion, sparse-lane
  compaction, exception-metadata identity, partial output, backpressure
  stability, full-capacity handling, simultaneous dequeue/enqueue, circular
  wraparound, flush priority, and a deterministic software queue comparison.
- `fetch_metadata`: test-only v4-style frontend transport contract for keeping
  each instruction's FTQ index and predicted-taken bit associated with its PC
  and instruction across sparse-lane compaction, adjacent FTQ packets,
  backpressure, pointer wraparound, flush, and randomized traffic.
- `ftq`: complete entry storage and query identity, full-queue backpressure,
  power-of-two and non-power-of-two wraparound, ordered commit training,
  redirect invalidation, mispredict correction, wrong-path repair walks,
  commit-endpoint extension while a walk is active, and simultaneous older
  commit with a younger mispredict redirect.
- `ifu_fetch_buffer`: production IFU and Fetch Buffer integration, covering
  four-to-two draining, full-buffer backpressure, stalled output stability,
  unaligned redirects, stale instruction-memory responses, and clearing both
  buffered and IFU-held wrong-path packets.
- `core_fetch_buffer`: IFU, Fetch Buffer, and temporary-core integration,
  covering continuous two-wide acceptance, core backpressure stability,
  unique packet ownership, exclusive unique dispatch, commit ordering, and
  buffered wrong-path branch recovery. The core-facing packet remains owned by
  the Fetch Buffer until all valid lanes have entered Decode.
- `core_fetch_metadata`: Fetch Buffer-to-core prediction metadata integration,
  covering sparse-lane FTQ/taken identity, adjacent FTQ packet boundaries,
  core backpressure, flush recovery, `pc_lob` derivation, and deterministic
  randomized traffic. Use `--reference` until the production `loom_core`
  metadata inputs are implemented.
- `core_ifu`: production IFU connected to the temporary core, covering complete
  four-lane packet acceptance, predictor/FTQ recovery, randomized frontend
  backpressure, precise exception and hardware-interrupt ERTN round trips, and
  stale instruction/data responses across full frontend flushes.
- `core_lsu`: real LA32 load/store instructions through Decode, Rename, Issue,
  MEM, the production LSU, DMem, writeback, and ROB commit. It checks word-load
  dependencies, SB/SH/SW requests, commit-gated stores, signed and unsigned
  load formatting, stalled-request stability, store-to-load forwarding,
  wrong-path store suppression, older committed stores with delayed
  acknowledgements, and 20-operation LDQ/STQ pressure recovery.
- `core_tlb`: real LA32 `TLBWR`, `TLBRD`, `TLBSRCH`, `TLBFILL`, and `INVTLB`
  instructions through Decode, Rename, UNQ, ROB commit, CSR state, and the
  unified TLB. It checks command/response completion, CSR snapshot/readback,
  fill-index advancement, forwarded invalidation operands, commit-only side
  effects, wrong-path invalidation suppression, integrated IMMU translation,
  and same-cycle IMMU/`TLBSRCH` q0 arbitration with refetch cancellation.
- `core_program`: continuous real-PC instruction streams through the temporary
  core, including an ALU block copied from `test.s`, conditional branches,
  direct `b`/`bl` redirects, `jirl`, link-register writeback, frontend
  backpressure stability, and suppression of wrong-path stores.
- `core_exception`: precise `syscall`, `break`, and illegal-instruction
  exceptions through Decode, ROB, CSR state update, and EENTRY redirection. It
  also injects frontend ADEF, PIF, PPI, and TLBR metadata into both decode
  lanes, checking ROB BADV propagation, ERA/BADV/TLBEHI state, EENTRY versus
  TLBRENTRY selection, older commit ordering, younger commit suppression,
  wrong-path exception cancellation, handler CSR reads, and ERTN return.
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
- `core_top_recovery`: production `core_top` recovery through real IMMU,
  ICache, Fetch Buffer, backend, DMMU, DCache, and AXI arbitration. It covers
  branch redirect and exception/interrupt ERTN recovery while selected ICache
  or DCache refills are outstanding, with normal and stressed AXI timing.
- `branch_recovery`: real taken branches through the temporary core, including
  target-PC refetch, Map Table/Free List recovery, a 24-misprediction resource
  stress case, wrong-path ROB squash, and a delayed wrong-path LSU response.
- `integration`: the existing `tb_verilator.cpp` smoke program through Decode,
  Rename, Dispatch, Issue, Execute, and ROB commit, including lane0/lane1
  serializing CSR instructions, commit-time refetch, and end-to-end result
  checks for all seven multiply/divide variants.

These are directed module tests. The passing portions include dynamic LSU
alignment exceptions and frontend exception metadata through the backend, but
do not yet include a complete IFU+IMMU-to-Fetch-Buffer-to-core exception path,
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
- `core_exception` passes precise synchronous and injected frontend exception
  handling, wrong-path cancellation, CSR state updates, handler selection, and
  the complete exception/ERTN round trip.
- `core_interrupt` passes masking, delayed hardware interrupt delivery, precise
  ROB-boundary rollback, CSR state updates, and the complete interrupt/ERTN
  round trip. Held-high interrupt input also retriggers after ERTN.
- `core_interrupt_lsu` passes the interrupt boundaries for killed and committed
  LSU entries, delayed responses, and simultaneous branch recovery.
