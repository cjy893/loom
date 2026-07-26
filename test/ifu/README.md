# Minimal IFU contract tests

These tests define the first correctness-oriented IFU interface. They are not
part of `test/run_all.sh` until `ifu/ifu.sv` exists and passes the suite.
`ifu_reference.sv` contains the test-verified behavioral reference and is not
compiled by the normal test command.

The instruction-memory side uses one outstanding request:

- `imem_req_valid`, `imem_req_ready`, and `imem_req_addr` request one aligned
  `FETCH_WIDTH * 4` byte bundle.
- Once asserted, a request and its address remain stable until accepted.
- `imem_resp_valid`, `imem_resp_ready`, and `imem_resp_insts` return the words
  for the accepted request in increasing address order.
- A redirect does not allow a newer request to pass an older outstanding
  request. The old response is accepted and discarded before fetching the
  redirect target.

The backend side uses a scalar packet handshake:

- `fetch_valid`, `fetch_pc`, and `fetch_insts` form one packet.
- `fetch_ready` accepts every valid lane in that packet.
- Valid lanes are contiguous from lane zero.
- A redirect into the middle of a memory bundle compacts the remaining words
  into lanes starting at zero.
- A packet remains stable under backend backpressure unless a redirect flushes
  it.

Redirects have priority over sequential fetch. If several redirects arrive
while an older request is being drained, the most recent target wins.

Run the suite after adding the implementation:

```bash
./test/ifu/run.sh
```
