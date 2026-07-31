# Banked BPD contract

This suite defines the two-bank predictor connection for the current
`FETCH_WIDTH=4`, `NBANKS=2`, `BANK_WIDTH=2` configuration.

Each Composer receives an 8-byte-aligned bank PC. Prediction outputs are
returned in logical fetch order: the bank selected by the request PC first,
followed by the next bank. A request in the final bank of a 64-byte I-cache
line does not issue the wrapped second bank.

Prediction metadata remains indexed by physical bank. FTQ updates are split
by the production `bpd_update_router` and returned to the Composer that
produced each metadata slice.

The tests cover all four logical lanes, a physical-bank-1 start and wrap,
non-8-byte-aligned requests, back-to-back bank rotation, physical metadata
identity, BIM direction training, first-bank CFI truncation, and the
I-cache-line boundary.

This is a test-only connection. In the v4-style organization, the equivalent
bank selection and prediction reordering logic belongs directly in the IFU;
there is no required production `bpd_banked` module.
