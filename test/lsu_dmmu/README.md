# LSU-DMMU integration contract

This suite connects the production `lsu` and `dmmu` at the address-generation
boundary.

Translation must happen before a virtual address is marked ready in the LDQ or
STQ:

```text
MEM AGEN (virtual address)
        |
        v
      LDQ/STQ
        |
        v
 LSU translation arbiter
        |
        v
      DMMU
        |
        +-- success --> LDQ/STQ physical address --> DCache
        |
        +-- fault ----> precise ROB exception, no DCache request
```

This ordering is required for stores. The production STQ emits its memory
request only after commit, so placing DMMU after `lsu.dmem_req` would discover
`PIS`, `PPI`, or `PME` after the faulting store had already retired.

MEM AGEN has no ready input. The already allocated LDQ/STQ entry is the
lossless request buffer while the single-outstanding DMMU is busy.

The current LSQ tag is six bits: a four-bit queue slot plus a two-bit
generation. The access type distinguishes LDQ and STQ tags.

Coverage includes:

- direct-address load translation followed by physical DCache access and
  load writeback;
- consecutive one-cycle load and store AGEN pulses while an older request
  waits for the TLB; their virtual addresses, access types, and tags must be
  buffered while load/store translation arbitration may choose either pending
  request first;
- store translation before commit, with no DCache side effect until commit;
- store data, mask, size, and tag preservation across translation;
- mapped load translation with a delayed TLB response;
- pre-commit `PIL`, `PIS`, `PPI`, and `PME` reporting;
- no DCache request for a translation fault;
- DCache request stability under backpressure;
- translation flush and rejection of a late TLB response;
- controller recovery after a flushed translation.

The busy-DMMU AGEN case verifies the production LSU buffering directly.

Run:

```sh
./test/lsu_dmmu/run.sh
```

This is a connection contract. It must pass before equivalent wiring is added
to `loom_core`.
