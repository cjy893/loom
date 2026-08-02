# Fetch-wide GHist test

`run.sh` builds the production `ifu/bpd/ghist.sv`. `run.sh --reference`
builds the test-only reference model so the testbench can be checked independently.

The suite covers both logical banks, multiple branches in one fetch packet,
first-bank taken suppression, deferred history flags, cache-line-tail packets,
RAS wrapping, restore priority, and a deterministic 1000-cycle differential run.
