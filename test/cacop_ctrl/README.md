# CACOP controller contract

This suite fixes the LA32 CACOP control boundary used by the production
controller. It is based on the completed five-stage reference
under `/mnt/e/Download/LoongArch/LoongArch` and cross-checked against
`/mnt/e/nscscc/chiplab/IP/myCPU_bakpak`.

`code[2:0]` selects the target cache: 0 is the I-Cache and 1 is the D-Cache.
`code[4:3]` selects the operation mode:

- mode 0 directly selects an index and way from the virtual address and
  invalidates without writeback;
- mode 1 directly selects an index and way; the D-Cache writes a dirty line
  back before invalidating it;
- mode 2 translates the virtual address, selects a line by physical tag hit,
  and writes a dirty D-Cache line back before invalidating it.

Unsupported cache selectors and mode 3 are architectural NOPs in the chosen
reference. Mode 0 and mode 1 bypass translation. A mode-2 translation fault
must complete exceptionally without sending a maintenance command.

The controller accepts only an already-serialized CACOP uop. It holds the
cache request stable through backpressure, waits for maintenance completion,
then returns the original ROB identity. `flush_pending` is required to cancel
a command that has not yet been accepted by a cache. Once a cache accepts a
command, the core's unique-uop rule must prevent speculative cancellation.

Validate the test harness without a production controller:

```bash
./test/cacop_ctrl/run.sh --reference
```

The production module is `cache/cacop_ctrl.sv`. Run:

```bash
./test/cacop_ctrl/run.sh
```

Cache-level mode/index-way and physical-hit behavior is covered by
`test/icache` and `test/dcache`. Core serialization, mode-2 DMMU translation,
precise translation faults, and cache-side backpressure are covered by
`test/core_cacop`.
