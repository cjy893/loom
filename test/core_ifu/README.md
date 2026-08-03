# IFU and temporary core integration tests

This suite connects the production `ifu.sv` directly to the temporary
`loom_core.sv`. It is part of `test/run_all.sh`.

The integration contract is:

- IFU fetch packets use four lanes; the temporary core decodes two per cycle.
- The IFU retains a packet until every valid lane has entered Decode; the core
  stores only a completion mask for lanes already accepted.
- Instruction PC and machine code must remain paired while the packet drains.
- A branch redirect invalidates the IFU packet and clears the core completion
  mask for its younger lanes through the core's public redirect interface.
- A memory response for a pre-redirect instruction request must not enter the
  core.

The directed programs cover:

- a twelve-instruction sequential stream;
- a direct branch to the last lane of a fetch bundle while the wrong-path
  response is delayed;
- a non-serializing multiply and a serializing divide in fetch lanes 2 and 3;
- an independent multiply dispatching while an older delayed load remains in
  the ROB, including result and younger-dependency checks;
- a lane-2 branch with a same-packet wrong-path store;
- a lane-0 branch whose wrong-path suffix must remain buffered until redirect;
- LSU backpressure while a fetch packet remains pending;
- repeated indirect JIRL execution, including first-use recovery, predictor
  training, registered FTQ target validation, and suppression of later
  correctly predicted redirects;
- direct BL and RAS-predicted JIRL return without backend redirects;
- speculative RAS pollution by a wrong-path BL followed by conditional-branch
  rewind and a correctly predicted return from the repaired stack;
- the same wrong-path RAS recovery under deterministic randomized instruction
  request readiness, response latency, packet-boundary fetch backpressure, FTQ
  saturation, and redirects overlapping outstanding instruction requests;
- a precise `SYSCALL` and ERTN round trip with CSR refetches, multiple
  speculative FTQ entries, wrong-path BL/RAS state, and an outstanding
  instruction request; every full flush must clear FTQ and GHist/RAS state,
  and flushed entries must neither commit nor train the predictor;
- a hardware-interrupt and ERTN round trip triggered only after a delayed load
  has issued while multiple FTQ entries, nonzero GHist/RAS state, and an
  instruction request are outstanding; the test checks exact commits, handler
  entry/return, frontend-state clearing, stale-response rejection, and absence
  of predictor training from interrupt-flushed entries;
- one conditional branch driven through `T,T,N,N,N,N`, covering cold target
  allocation, stable taken prediction, counter transition, and stable
  not-taken prediction;
- one non-return JIRL changing from target A to target B, covering stale-target
  detection, redirect, commit retraining, and the subsequent target-B hit.

The serializing and buffered-suffix cases also check that a unique instruction
cannot enter Dispatch while an older instruction is still in Rename or the
ROB. These checks are required to pass.

Run:

```bash
./test/core_ifu/run.sh
```
