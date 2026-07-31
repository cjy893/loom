# F3 predecode contract

This suite defines the single-lane LA32 frontend predecode contract used by
the F3 fetch stage.

It covers all six conditional-branch opcodes, `B`, `BL`, and `JIRL`, including
positive and negative direct targets. `BL` and `JIRL rd=r1` are calls;
`JIRL rd=r0,rj=r1` is a return. Since LA32 instructions are fixed at 32 bits,
the return address is always `pc + 4`.

`JIRL` does not produce a direct target. Its target must come from the branch
predictor or the backend redirect path.

The default run requires `ifu/bpd/f3_predecode.sv`. Use `run.sh --reference` to
validate the harness against the test-only reference implementation. Set
`F3_PREDECODE_SOURCE` to test another implementation explicitly.
