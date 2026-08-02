# loom_core TLB management integration

This Verilator suite sends real LA32 TLB-management instructions through
Decode, Rename, Dispatch, the UNQ issue path, ROB, `tlb_ctrl`, `tlb`, and the
CSR file.

Coverage:

- `TLBWR` snapshots TLB CSRs and writes exactly at ROB commit.
- `TLBRD` restores an indexed entry into all five TLB CSRs.
- `TLBSRCH` reports both hit and miss results through CSR.TLBIDX.
- `TLBFILL` enables entries and advances the replacement index.
- `INVTLB` receives forwarded ASID/address operands and invalidates at commit.
- A wrong-path `INVTLB` neither commits nor changes TLB state.
- Every management request receives one execution response, allowing the ROB
  entry to complete without a deadlock.

Run:

```bash
./test/core_tlb/run.sh
```
