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
./test/integration/run.sh
```

Current coverage:

- `rename`: initial allocation, read-after-write dependency, same-bundle map
  bypass, busy tracking, and release of a committed stale mapping.
- `issue`: dispatch, ready issue, wakeup, full-queue backpressure, flush,
  misprediction kill, and grant squash/retry.
- `rob`: two-bank enqueue, out-of-order completion with in-order commit, and
  pointer wrap.
- `alu`: integer arithmetic, comparisons, logic, shifts, immediate selection,
  ROB identity propagation, early wakeup, and branch resolution.
- `decode`: real LA32 encodings from `test.s` for integer ALU, immediate,
  load/store, branch, CSR, syscall, and illegal instructions.
- `dispatch`: IQ routing, program-order backpressure, inactive lanes, uop
  identity, and same-IQ dual-dispatch loss detection.
- `br_mask`: nested allocation, resolution, exhaustion, pipeline flush, and
  misprediction recovery.
- `regfile`: simultaneous reads and writes, combinational write bypass, the
  hardwired zero register, and write-port conflict priority.
- `mem`: address generation, store-data generation, pipeline latency, uop
  identity, XLEN wraparound, and kill.
- `unq`: CSR request/response, signed multiply/divide latency and data, uop
  identity, and kill.
- `integration`: the existing `tb_verilator.cpp` smoke program through Decode,
  Rename, Dispatch, Issue, Execute, and ROB commit.

These are directed module tests. They do not yet cover full-width dispatch,
memory partial issue, exceptions, CSR behavior, or complete branch recovery.

The runner continues after a failed suite so one RTL failure does not hide
results from later modules. It returns a nonzero status if any suite fails.

Current known red tests:

- `decode`: the real `b` encoding `0x50fff800` is decoded as `B_JR`/`is_jalr`
  instead of `B_J`/`is_jal`; `syscall 0x11` reports cause 9 instead of 11.
- `dispatch`: two same-IQ uops are both marked in `dis_fire`, while the single
  scalar IQ output can carry only one of them.
