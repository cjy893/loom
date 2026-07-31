# BPD update router contract

This suite defines the BOOM-v4-style split from one fetch-wide
`bpd_update_t` into the two physical predictor-bank updates.

The full update uses logical fetch order. Logical lanes `[1:0]` belong to the
bank selected by `pc`; logical lanes `[3:2]` belong to the next bank. When a
fetch starts in physical bank 1, the second logical half wraps to physical
bank 0. Metadata and local history remain indexed by physical bank.

The second bank is suppressed when the resolved CFI is in the first bank or
when the first bank is the final bank of an I-cache line. The CFI index is
converted from a fetch-wide index to a bank-local index.

The default run requires `ifu/bpd/bpd_update_router.sv`. Use
`run.sh --reference` to validate the harness against the test-only reference
implementation. Set `BPD_UPDATE_ROUTER_SOURCE` to test another implementation
explicitly.
