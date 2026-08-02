# TLB controller tests

This suite checks the execution/commit boundary of `mmu/tlb_ctrl.sv`.
The TLB lookup and indexed-read ports are driven directly by the C++ test,
so failures identify controller behavior rather than TLB array behavior.

Covered behavior:

- reset, request backpressure, and response backpressure
- request, CSR, indexed-read, and INVTLB operand snapshots
- TLBSRCH hit, miss, q0 ownership, and stale-response cancellation
- TLBRD valid and invalid entry CSR updates
- TLBWR field mapping and `TLBIDX.NE`
- TLBFILL round-robin replacement, wrap, and flush cancellation
- ROB-indexed commit gating
- matching commit priority over a same-cycle backend flush
- configurations with 8 and 5 TLB entries

Run with:

```bash
./test/tlb_ctrl/run.sh
```

The script first runs the same checks against a test-only behavioral reference
for both configurations. It then runs the production RTL. The production runs
are expected to fail until `tlb_ctrl` is implemented; compilation must still
succeed so the failure reports a behavioral assertion rather than a testbench
or interface error.
