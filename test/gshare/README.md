# GShare contract test

This directory fixes the interface and observable behavior of the next
direction-predictor component without adding it to production RTL.

## Interface

```systemverilog
module gshare #(
    parameter int NUM_SETS = 1024,
    parameter int BANK_WIDTH = 2,
    parameter int HISTORY_BITS = 10
)(
    input  logic clk,
    input  logic rst_n,
    input  logic f0_valid,
    input  logic [31:0] f0_pc,
    input  logic [GLOBAL_HISTORY_LENGTH-1:0] f0_ghist,
    output logic [BANK_WIDTH-1:0] f2_taken,
    output logic [BANK_WIDTH-1:0] f2_provider_valid,
    output logic [BPD_MAX_META_LENGTH-1:0] f2_meta,
    output logic ready,
    input  logic update_valid,
    input  bpd_bank_update_t update
);
```

The component is a per-physical-bank, two-cycle F0-to-F2 direction predictor.
The table index is the fetch-row PC index XOR the low `HISTORY_BITS` of the
prediction-time global history. Bank-internal lane address bits are not part of
the PC index.

Each lane has a 2-bit saturating counter initialized to weakly taken. The low
`BANK_WIDTH * 2` bits of `f2_meta` contain the prediction-time counters in lane
order. `f2_provider_valid` is separate from the counters: a cold GShare entry
does not override BIM, even though its initialized direction is taken. The
provider bitmap is a small separate table; training ORs in the updated lane so
training one lane never clears a previously trained sibling lane.

Only committed conditional-branch lanes in `update.br_mask` train the table.
Mispredict/repair updates and BTB repair updates are ignored. B/BL and JIRL do
not train GShare. Back-to-back updates to one index must use a two-entry write
bypass so stale prediction metadata does not lose training.

## Running

Run the executable specification independently:

```sh
bash test/gshare/run.sh --reference
```

Run the same checks against production `ifu/bpd/gshare.sv`:

```sh
bash test/gshare/run.sh
```

The production module passes this suite and the standalone test is part of the
aggregate branch predictor regression. Composer integration remains a separate
red test until production Composer implements the new contract.
