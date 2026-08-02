# Core Fetch Metadata Test

This test fixes the production contract for carrying branch-prediction
metadata from the Fetch Buffer into `loom_core` and retaining it in the uop
through commit.

Each valid instruction must keep the following fields associated:

- PC and instruction bits
- FTQ index
- predicted-taken bit
- `pc_lob`, derived from the instruction PC

The suite covers sparse fetch lanes, adjacent FTQ packets crossing a two-wide
core packet, core backpressure, buffer flush recovery, circular-buffer reuse,
and deterministic randomized traffic.

Validate the test harness before the production core interface is added:

```bash
./test/core_fetch_metadata/run.sh --reference
```

Run the production contract with:

```bash
./test/core_fetch_metadata/run.sh
```

The production test intentionally requires these `loom_core` inputs:

```systemverilog
input logic [FETCH_WIDTH-1:0][FTQ_ADDR_SZ-1:0] fe_ftq_idx;
input logic [FETCH_WIDTH-1:0]                  fe_predicted_taken;
```

Until those ports are implemented and assigned into the selected decode uop,
the production command must fail. The intended assignments are
`uop.ftq_idx = fe_ftq_idx[source_lane]`,
`uop.taken = fe_predicted_taken[source_lane]`, and
`uop.pc_lob = pc[$clog2(ICACHE_BLOCK_BYTES)-1:0]`.
