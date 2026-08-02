# TLB and Address Translation Integration Test

This suite connects the production dual-port TLB to the production LA32
address translator through a test-only one-cycle request-context register.
It verifies the timing and semantic boundary without changing the IFU or LSU.

Coverage includes:

- one-cycle request, ASID, access-type, and CSR-context alignment;
- direct-address and DMW bypass of an underlying TLB miss;
- 4KB even/odd mappings and ASID/global matching;
- 4MB even/odd mappings;
- integrated PIF/PIL/PIS/PPI/PME/TLBR behavior;
- INVTLB effects visible through address translation;
- consecutive requests without a pipeline bubble;
- response stability against combinational input changes.

Run:

```sh
./run.sh
```
