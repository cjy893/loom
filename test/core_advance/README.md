# Advanced instruction ELF test

This test runs the six self-checking programs from
`software/examples/func/func_advance/obj/main.elf` through `core_top`, including
the production ICache, DCache, and AXI bridge.

The image covers:

- `preld` together with DMW, TLB invalidation, CACOP, and timer reads;
- `dbar` and `ibar` ordering instructions;
- PGDL, PGDH, and derived PGD CSR behavior;
- user-mode IPE behavior for CSR, CACOP, TLB, ERTN, and IDLE operations;
- architectural masks and read/write behavior of the implemented CSR set.

The ELF reports each result through the NSCSCC `NUM` register. A successful
run ends with test number 6 and passed count 6.

```sh
./test/core_advance/run.sh
./test/core_advance/run.sh --trace
./test/core_advance/run.sh --stress
```

The cache-bearing top-level harness is required because the PRELD test compares
the latency of ordinary and prefetched loads. `--skip-startup-prefix` only
disables the four-PC startup signature used by the basic functional-test ELF.
Commit instructions are still checked against the loaded ELF, and the program's
`NUM` result remains the pass/fail authority.

Only the instruction PCs whose IPE behavior is explicitly checked by test 5
are allowed to raise exceptions. An unsupported instruction in any other test
therefore fails immediately instead of entering the program's terminal loop.
