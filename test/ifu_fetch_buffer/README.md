# IFU and Fetch Buffer integration tests

This suite connects the production `ifu.sv` four-lane output directly to the
production `fetcher_buffer.sv`, configured with eight entries and a two-lane
backend output.

Coverage:

- Four-wide IFU packets are emitted to the backend in two-wide FIFO order.
- The IFU continues fetching while the backend is stalled until the buffer is
  full and backpressure reaches the held IFU packet.
- Backend stalls preserve the oldest output packet.
- Draining a full buffer resumes IFU packet acceptance without loss or
  duplication.
- A redirect clears already-buffered wrong-path instructions.
- A response from an instruction-memory request accepted before a redirect is
  discarded and never enters the buffer.
- An unaligned redirect compacts the selected instruction-memory lanes before
  they enter the buffer.
- A redirect clears both a full buffer and an additional packet held by the
  IFU under buffer backpressure.

Run with:

```sh
./test/ifu_fetch_buffer/run.sh
```
