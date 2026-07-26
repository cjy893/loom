# Core interrupt tests

This suite fixes the integration contract between CSR interrupt reporting,
the precise commit boundary, frontend redirection, and ERTN.

Run it with:

```sh
./test/core_interrupt/run.sh
```

Coverage:

- global interrupt masking through `CRMD.IE`;
- per-source masking through `ECFG.LIE`;
- hardware interrupt pending-bit propagation;
- empty-ROB ERA selection from the oldest not-yet-renamed frontend PC;
- delayed IRQ assertion after body commits, while younger uops remain in ROB;
- precise EENTRY redirection and `ECODE_INT`;
- ERA at the first uncommitted instruction boundary;
- older commit preservation and younger commit suppression;
- CRMD/PRMD state changes without overwriting BADI;
- source deassertion followed by ERTN and exact-once resumed commits;
- held-high interrupt retriggering after ERTN restores `CRMD.IE`.

The suite is included in `test/run_all.sh`.
