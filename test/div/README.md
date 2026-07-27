# Divider contract tests

This suite defines the standalone contract for the LA32 integer divider. It is
kept out of `test/run_all.sh` until the SRT implementation passes the suite.

Run it directly:

```bash
./test/div/run_qselect.sh
./test/div/run_preprocess.sh
./test/div/run_otfc.sh
./test/div/run.sh
```

Validate the C++ driver against the test-only behavioral reference:

```bash
./test/div/run.sh --reference
```

The public divider accepts one request at a time:

- A request is accepted on `req_valid && req_ready`.
- `req_signed` selects signed or unsigned arithmetic.
- `req_remainder` selects the remainder instead of the quotient.
- A response is consumed on `resp_valid && resp_ready`.
- A stalled response and `resp_data` remain stable.
- `kill` discards an active calculation or an unconsumed response.

The arithmetic reference model is implemented independently in C++. The
test-only `divider_reference.sv` is used to validate the driver and is never
compiled by the production test command. Directed and deterministic random
tests cover signed and unsigned quotient and remainder operations, divide by
zero, signed overflow, request backpressure, response backpressure, and
cancellation.

`run_qselect.sh` exhaustively checks all 128 signed partial-remainder indices
for each of the eight normalized divisor indices. It also checks that all
1,024 invalid divisor-index combinations select a zero quotient digit.

`run_preprocess.sh` checks all 32 possible leading-one positions, divisor-zero
outputs, radix-4 iteration and recovery counts, dividend alignment parity, and
4,096 deterministic random dividend/divisor pairs.

`run_otfc.sh` checks every quotient digit, the `Q-1` invariant, explicit
stalls, clear priority, invalid-digit handling, directed sequences, and 512
deterministic random digit sequences.

The deterministic divide-by-zero contract is:

```text
quotient  = 0xffffffff
remainder = dividend
```

The implementation may use variable latency, but every accepted request must
produce a response within 64 cycles unless it is killed.
