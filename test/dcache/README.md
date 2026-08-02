# Blocking D-Cache contract

This suite defines the first production D-Cache boundary. The cache is a
single-outstanding, physically indexed and physically tagged, two-way
write-back/write-allocate cache placed after the DMMU and LSU queues.

The LSU request contains a physical address, the DMMU `cacheable` result, a
load/store discriminator, aligned store data and byte mask, and the LDQ/STQ
generation tag. Loads return the raw aligned 32-bit word; subword extraction
and sign extension remain LSU responsibilities. Store responses are
acknowledgements and preserve the request tag.

The lower-memory side separates read address/data, write address/data, and
write response handshakes so it can be connected to the existing AXI bridge.
Burst lengths are encoded as beats minus one. Dirty evictions write an entire
line with all byte lanes enabled. Uncached accesses use one-beat transactions
and never allocate.

Maintenance operations use these encodings:

- `0`: invalidate, discarding a matching line without writeback;
- `1`: clean, writing back dirty data and retaining the line;
- `2`: clean and invalidate.

For CACOP mode 0/1, `maint_vaddr` directly selects the set and way. Mode 2
uses `maint_paddr` for a physical tag-hit lookup. `maint_all` selects the
whole cache. Maintenance is serialized with CPU requests and completes with
a one-cycle `maint_done` pulse.

The suite covers cold refill and hit, partial store merging, store-miss
write-allocate, dirty victim writeback, clean/invalidate operations, uncached
load/store bypass, request/response stability, tag preservation, and
deterministic lower-memory backpressure.

Validate the executable test specification before the production module
exists with:

```bash
./test/dcache/run.sh --reference
```

After implementing `cache/dcache.sv`, use:

```bash
./test/dcache/run.sh
```
