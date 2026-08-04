# Core Fetch Buffer integration tests

This suite connects the production IFU and Fetch Buffer to the temporary
`loom_core` through a two-wide frontend boundary.

Coverage:

- The Fetch Buffer is prefilled while the core-facing interface is gated.
- Independent two-wide packets should enter Decode on consecutive cycles once
  the gate opens.
- Buffer output remains stable whenever the core applies backpressure.
- Commit PC and instruction order are preserved through the complete backend.
- A packet containing a unique divide remains at the Fetch Buffer while
  the core handles its lanes separately and cannot advance before the unique
  instruction reaches Dispatch.
- Unique dispatch occurs alone and only while the ROB is empty.
- A taken branch clears prefetched wrong-path packets and re-fetches the target
  bundle without committing wrong-path instructions.

`loom_core` consumes this two-wide interface directly and retains only a
per-lane completion mask while a packet is partially accepted. Consecutive
acceptance and unique-packet ownership are therefore required passing checks.

Run with:

```sh
./test/core_fetch_buffer/run.sh
```
