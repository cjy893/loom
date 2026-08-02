# Branch-prediction regression

This aggregate suite runs every standalone and integration contract needed
before connecting branch prediction to the production frontend:

- UBTB, BIM, BTB, RAS, GHist, and Composer;
- fetch-wide update routing and the banked Composer contract;
- F3 LA32 control-flow predecode;
- Fetch Buffer FTQ-index and predicted-taken transport;
- 16-entry and non-power-of-two 5-entry FTQ configurations, including
  overlapping commit walks and same-cycle commit/mispredict handling;
- UBTB+BIM, UBTB+BIM+BTB, and the complete GHist+RAS predictor chain.

The runner continues after an individual failure and reports every failing
subtest at the end.

```bash
./test/bpd_regression/run.sh
```
