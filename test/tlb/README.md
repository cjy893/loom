# LA32 TLB Contract Test

This directory validates the production unified LA32 TLB. The retained
`la32_tlb_reference.sv` documents the original test oracle, while
`tlb_test_top.sv` instantiates `mmu/tlb.sv`.

The test covers:

- two independent, one-cycle lookup ports;
- 4KB even/odd page selection;
- generic large-page matching, including `PS=22`;
- ASID and global-entry matching;
- indexed write and readback;
- reset of entry existence bits;
- `INVTLB` operations 0 through 6;
- simultaneous invalidate/write priority;
- non-power-of-two entry-count parameterization.

For an entry with page size `PS`, the two subpages are selected by virtual
address bit `PS`, and matching compares the address above bit `PS`. This follows
the architectural definition of `PS` as `log2(page_bytes)`. In particular, a
`PS=22` pair spans 8MB and selects its odd 4MB page with virtual-address bit 22.

Run:

```sh
./run.sh
```
