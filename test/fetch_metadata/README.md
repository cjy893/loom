# Fetch Metadata Transport Test

This test defines the frontend-to-decode transport contract for branch
prediction metadata. It is intentionally independent of the current
production `ifu/fetcher_buffer.sv`, whose interface still transports only
`pc` and `inst`.

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

Run with:

```sh
bash test/fetch_metadata/run.sh
```

This test does not yet choose how the execute stage obtains the predicted
target. The v4-style design can carry `ftq_idx` with the uop and retrieve
the packet `next_pc` from the FTQ when resolving the branch.
