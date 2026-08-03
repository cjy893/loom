# Composer GShare integration contract

This suite fixes and verifies the Composer-side GShare contract. It remains
separate from `test/bpd_top` so the legacy composition contract and the new
history-dependent behavior are both checked, and both suites are included in
the aggregate BPD regression.

## Interface addition

Composer adds these parameters and one request input:

```systemverilog
parameter int GSHARE_SETS = 1024,
parameter int GSHARE_HISTORY_BITS = 10,
input logic [GLOBAL_HISTORY_LENGTH-1:0] f0_ghist
```

`f0_ghist` is already expanded for the physical predictor bank. Composer does
not interpret `global_history_t` bank-delay flags.

## Composition

- BIM remains the F2 fallback direction predictor.
- GShare overrides only conditional branches with a valid provider.
- B/BL and JIRL direction is never overridden by GShare.
- `ready` is the AND of BIM and GShare initialization readiness.
- Both predictors receive the same gated F0 request and commit update.

Metadata preserves the existing low-bit layout:

```text
F2: [GShare counters][BIM counters]
F3: [GShare counters][BIM counters][BTB hit/way]
```

For the current two-lane, two-way configuration, BTB, BIM, and GShare each use
four bits. Update metadata is shifted back to the corresponding component.

## Running

Run the executable integration specification:

```sh
bash test/composer_gshare/run.sh --reference
```

Run production Composer with:

```sh
bash test/composer_gshare/run.sh
```

Both reference and production modes pass. IFU wiring of the bank-specific
`f0_ghist` remains a separate integration step.
