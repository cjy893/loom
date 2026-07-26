# Core exception tests

This suite checks the complete backend path from a decoded exception through
the ROB and CSR file to frontend redirection.

Run it with:

```sh
./test/core_exception/run.sh
```

Coverage:

- precise `syscall`, `break`, and illegal-instruction exceptions;
- older-instruction commit ordering and younger-instruction commit suppression;
- EENTRY redirection and ERA, ESTAT, BADI, CRMD, and PRMD state;
- cancellation of an exception on a mispredicted branch path;
- handler update of ERA followed by ERTN and privilege restoration.

The suite is kept separate from `test/run_all.sh` while any of these
end-to-end contracts are still in the red phase.
