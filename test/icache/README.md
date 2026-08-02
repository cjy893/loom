# Blocking I-Cache contract

This suite defines the first production I-Cache boundary. The cache is a
single-outstanding, physically indexed and physically tagged instruction
cache placed after the IMMU.

The test configuration uses four sets, two ways, both 32- and 64-byte lines,
a 32-bit memory beat, and four 32-bit instructions per IFU response.

The IFU-side request carries an aligned physical address and the IMMU's
`cacheable` result. Cacheable misses request an entire line from the lower
memory interface. Uncacheable requests fetch one IFU bundle and never allocate
a cache line. `mem_req_len` is the number of beats minus one.

The suite covers:

- cold miss, full-line refill, and both fetch bundles in a line;
- hit behavior without a lower-memory request;
- request and response backpressure with payload stability;
- uncached bypass without allocation;
- CACOP mode-0/1 virtual index/way invalidation;
- CACOP mode-2 physical tag-hit and whole-cache invalidation;
- two-way same-set capacity and replacement;
- deterministic randomized memory gaps and backpressure.

Maintenance is serialized with fetch traffic and is accepted only while the
blocking cache is idle. Only valid metadata is required to reset. Tag and data payload arrays must not
be architecturally observed while invalid and do not need reset controls.

The production module is expected at `cache/icache.sv`. Until it exists, run
the test-only executable specification with:

```bash
./test/icache/run.sh --reference
```

After the production module is implemented, run:

```bash
./test/icache/run.sh
```
