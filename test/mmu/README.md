# LA32 MMU Contract Test

This directory validates the production LA32 address translator. It takes the
selected TLB entry as an input, so address-mode and permission failures can be
tested independently from the TLB array. `la32_mmu_reference.sv` is retained as
the original test oracle.

The test covers:

- direct-address mode with `DATF` and `DATM`;
- DMW0/DMW1 segment translation, PLV enables, MAT, and priority;
- TLB address composition for 4KB and 4MB pages;
- cacheability for MAT values SUC, CC, and WUC;
- `TLBR`, `PIF`, `PIL`, `PIS`, `PPI`, and `PME`;
- exception priority: miss, invalid, privilege, then dirty;
- BADV capture, request-valid masking, and waiting for a valid TLB response.

Only `DA/PG=10` and `DA/PG=01` are architectural operating modes. The reference
keeps deterministic outputs for the invalid `00` and `11` combinations, but the
test intentionally does not assign them architectural meaning.

Alignment exceptions, ADEF/ADEM, CSR state updates, replacement policy, and
cache refill behavior are outside this unit contract and belong to separate
tests.

Run:

```sh
./run.sh
```
