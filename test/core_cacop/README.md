# Core CACOP integration

This test feeds architectural CACOP instructions through `loom_core` and
checks the boundary between UNQ, DMMU, `cacop_ctrl`, and both caches.

It covers:

- mode 0 and mode 1 bypassing translation;
- signed `rj + si12` virtual-address calculation;
- stable maintenance payloads while cache ready is backpressured;
- D-Cache mode-1 clean-and-invalidate selection;
- mode-2 translation through DMMU;
- an empty-TLB mode-2 request raising a precise exception without issuing a
  cache command;
- successful CACOP completion through the ROB.

Run with:

```bash
./test/core_cacop/run.sh
```
