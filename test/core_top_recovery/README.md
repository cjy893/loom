# Production core-top recovery tests

This suite instantiates the production `core_top.sv` and drives only its AXI
and interrupt ports. A test-only wrapper exposes architectural commits and
frontend recovery observations without bypassing the production IFU, IMMU,
ICache, Fetch Buffer, backend, DMMU, DCache, or AXI arbitration.

The directed programs cover:

- a cold taken conditional branch while the sequential wrong-path ICache line
  refill is outstanding;
- a precise `SYSCALL` and ERTN round trip while the post-exception ICache line
  refill is outstanding;
- a hardware interrupt and ERTN round trip after a cacheable load has started
  a DCache line refill, with speculative FTQ and GHist state present;
- exact architectural commit prefixes, wrong-path store suppression, stale
  response rejection, FTQ/GHist clearing on full flush, and AXI channel
  stability under deterministic backpressure.

Every scenario runs once with normal AXI timing and once with deterministic
backpressure.

Run:

```bash
./test/core_top_recovery/run.sh
```
