# Fetch Metadata Transport Test

This test defines the frontend-to-decode transport contract for branch
prediction metadata. By default it compiles the production
`ifu/fetcher_buffer.sv`. The reference mode validates the contract before the
production interface and storage are implemented.

Each valid instruction carries one indivisible record:

- instruction PC
- instruction bits
- FTQ index
- predicted taken bit

The test covers:

- 4-wide enqueue to 2-wide dequeue
- sparse fetch-lane compaction without metadata reassociation
- two adjacent FTQ packets appearing in one dequeue group
- output stability under backpressure
- full-queue simultaneous dequeue/enqueue and pointer wraparound
- flush priority and wrong-path metadata removal
- a deterministic randomized reference model

Run the production module with:

```sh
bash test/fetch_metadata/run.sh
```

Run the reference implementation with:

```sh
bash test/fetch_metadata/run.sh --reference
```

The production Fetch Buffer contract adds `FTQ_IDX_SZ` and transports
`enq_ftq_idx`/`deq_ftq_idx` plus
`enq_predicted_taken`/`deq_predicted_taken`. These fields must be compacted,
stalled, wrapped, and flushed as part of the same indivisible instruction
record as PC, instruction bits, and fetch exception metadata.

This test does not yet choose how the execute stage obtains the predicted
target. The v4-style design can carry `ftq_idx` with the uop and retrieve
the packet `next_pc` from the FTQ when resolving the branch.
