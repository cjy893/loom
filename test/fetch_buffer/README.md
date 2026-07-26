# Fetch Buffer tests

This suite fixes the initial contract for `ifu/fetcher_buffer.sv`:

- `FETCH_WIDTH=4` packet input and `CORE_WIDTH=2` packet output.
- `NUM_ENTRIES=8` instruction entries in the directed test configuration.
- Valid input lanes are compacted in lane order before being stored.
- `enq_ready` accepts the complete set of currently valid input lanes or
  rejects all of them.
- A scalar `deq_ready` consumes every asserted output lane atomically.
- Space released by a same-cycle dequeue is visible to `enq_ready`.
- Output valid bits and payload remain stable while dequeue is stalled.
- `flush` has priority over enqueue and dequeue, masks output immediately,
  and leaves the queue empty after the active edge.

Directed tests cover four-to-two width conversion, sparse-lane compaction,
partial final output, backpressure, full capacity, simultaneous dequeue and
enqueue, circular wraparound, and flush priority. A deterministic 1,200-cycle
software queue comparison combines enqueue holes, stalls, full conditions,
simultaneous transfers, and flushes.

The normal command tests the production implementation:

```sh
./test/fetch_buffer/run.sh
```

The testbench can also be checked independently against the test-only
behavioral reference with:

```sh
FETCHER_BUFFER_SOURCE=./test/fetch_buffer/fetcher_buffer_reference.sv \
  ./test/fetch_buffer/run.sh
```
