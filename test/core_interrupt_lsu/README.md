# Interrupt, LSU, and recovery integration test

This suite drives real LA32 instructions through `loom_core` and checks the
boundary between precise interrupts, branch recovery, and the production LSU.

Covered contracts:

- an uncommitted younger store is removed by an interrupt and never reaches
  DMem;
- a committed store remains owned by the STQ across an interrupt flush and
  drains exactly once;
- a delayed load response from before the interrupt cannot write back or
  commit;
- a pending interrupt is blocked by the branch `b1` kill phase, then the
  registered `b2` redirect is observed before interrupt entry.

Run:

```bash
./test/core_interrupt_lsu/run.sh
```
