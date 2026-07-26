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
- serializing multiply/divide operations in fetch lanes 2 and 3;
- a lane-2 branch with a same-packet wrong-path store;
- a lane-0 branch whose wrong-path suffix must remain buffered until redirect;
- LSU backpressure while a fetch packet remains pending.

The serializing and buffered-suffix cases also check that a unique instruction
cannot enter Dispatch while an older instruction is still in Rename or the
ROB. These checks are required to pass.

Run:

```bash
./test/core_ifu/run.sh
```
