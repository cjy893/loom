# CSR file tests

This suite defines the standalone contract for `csr/csr_file.sv`.

Run it with:

```bash
./test/csr/run.sh
```

The suite covers:

- reset state and configured core ID;
- held request/response behavior under response backpressure;
- commit-gated CSR side effects and ROB-index matching;
- cancellation of an uncommitted CSR transaction;
- CSRRD, CSRWR, and CSRXCHG old-value and write-mask semantics;
- architectural read/write masks for CRMD, EUEN, ECFG, ESTAT, EENTRY,
  ASID, DMW0, and DMW1;
- precise exception updates to CRMD, PRMD, ESTAT, ERA, and BADV;
- ordinary exception and TLB-refill redirect targets;
- ERTN restoration of privilege, interrupt-enable, and paging state;
- stable-counter progress;
- software, hardware, IPI, and timer interrupt reporting;
- TICLR clearing of a latched timer interrupt.

The tests use CSR behavior from `../myCPU_bakpak/csregfile.v` as the semantic
reference while enforcing commit-time side effects required by the out-of-order
core.

`csr_file_reference.sv` contains a test-side reference implementation of this
contract. It is not compiled by `run.sh` and does not replace the production
module.

This suite is included in `test/run_all.sh` now that `csr/csr_file.sv` has an
implementation.
