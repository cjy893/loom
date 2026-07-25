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
./test/branch_recovery/run.sh
./test/integration/run.sh
```

Current coverage:

- `rename`: initial allocation, read-after-write dependency, same-bundle map
  bypass, busy tracking, and release of a committed stale mapping.
- `issue`: dispatch, ready issue, wakeup, full-queue backpressure, flush,
  misprediction kill, grant squash/retry, and resolved branch-tag reuse.
- `rob`: two-bank enqueue, out-of-order completion with in-order commit,
  pointer wrap, precise static exceptions, rollback, refetch, and ERTN flush.
- `alu`: integer arithmetic, comparisons, logic, shifts, immediate selection,
  ROB identity propagation, early wakeup, and branch resolution.
- `decode`: real LA32 encodings from `test.s` for integer ALU, immediate,
  load/store, branch, all seven multiply/divide variants, CSR, syscall, and
  illegal instructions.
- `dispatch`: IQ routing, program-order backpressure, inactive lanes, uop
  identity, and same-IQ dual-dispatch loss detection.
- `br_mask`: nested allocation, resolution, exhaustion, pipeline flush, and
  misprediction recovery.
- `regfile`: simultaneous reads and writes, combinational write bypass, the
  hardwired zero register, and write-port conflict priority.
- `mem`: address generation, store-data generation, pipeline latency, uop
  identity, XLEN wraparound, kill, single-port MEM IQ contention, conservative
  store operand waiting, and same-cycle issue/wakeup/refill behavior.
- `unq`: CSR request/response, all seven LA32 multiply/divide variants,
  signed overflow, deterministic divide-by-zero results, uop identity, branch
  recovery, and kill.
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
- `branch_recovery`: real taken branches through the temporary core, including
  target-PC refetch, Map Table/Free List recovery, a 24-misprediction resource
  stress case, wrong-path ROB squash, and a delayed wrong-path LSU response.
- `integration`: the existing `tb_verilator.cpp` smoke program through Decode,
  Rename, Dispatch, Issue, Execute, and ROB commit, including lane0/lane1
  serializing CSR instructions, commit-time refetch, and end-to-end result
  checks for all seven multiply/divide variants.

These are directed module tests. They do not yet cover full-width dispatch,
memory partial issue, exceptions, or CSR behavior.

The runner continues after a failed suite so one RTL failure does not hide
results from later modules. It returns a nonzero status if any suite fails.

Current status:

- Existing LDQ and STQ directed tests pass.
- All queue-level LSU ordering groups pass. The production `lsu.sv` now
  instantiates both queues, locks stalled shared-port requests, rotates
  load/store preference after each handshake, and passes its directed
  integration test.
- The temporary `boom_core.sv` now uses the production LSU request/response
  path. The branch recovery suite verifies that an old wrong-path memory
  response cannot write back, wake a consumer, or complete a reused ROB entry.
- The `core_lsu` suite passes word loads, all byte/half/word load extensions,
  all store masks, DMem backpressure, store-to-load forwarding, branch recovery,
  and queue-full recovery without dropped or duplicated memory operations.
- `dispatch` now packs each IQ independently and preserves program order.
- `dispatch` covers per-slot Issue Queue backpressure for same-IQ dual dispatch.
- `dispatch` verifies that static exceptions enter the ROB path and bypass IQs.
