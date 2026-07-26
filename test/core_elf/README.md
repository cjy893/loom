# Real ELF core test

This suite loads the `PT_LOAD` segments from the NSCSCC functional-test ELF,
starts the production IFU at the ELF entry, and connects instruction and data
requests to a shared byte-addressed memory model.

The default milestone is the first NSCSCC instruction test. The run passes
when the program writes `0x01000001` to the simulated `NUM` register at
`0xbfaff050`. An exception, an out-of-image instruction fetch, a failed
functional-test status, or the no-commit watchdog fails the run.

The small CONFREG model matches the functional testbench's simulation flag,
timer, and `8'hff` switch setting. In particular, `SW_INTER` returns
`0x0000aaaa`, so the inter-test delay completes quickly.

Run the default image:

```bash
./test/core_elf/run.sh
```

Useful diagnostic modes:

```bash
./test/core_elf/run.sh --trace
./test/core_elf/run.sh --stress
./test/core_elf/run.sh --allow-exceptions --target-tests 47
./test/core_elf/run.sh --target-commits 500
./test/core_elf/run.sh --target-tests 2 --max-cycles 2000000
```

`--allow-exceptions` is required for exception and interrupt tests. It lets the
core enter the architectural handler and keeps the final `NUM` result as the
pass/fail authority. Without it, any exception remains an immediate failure,
which is useful for the earlier instruction and memory tests.

Use another image or disassembly:

```bash
ELF_PATH=/path/to/main.elf DISASM_PATH=/path/to/test.s \
  ./test/core_elf/run.sh
```

This suite is intentionally not part of `test/run_all.sh`: its default input
lives outside this RTL directory, and later NSCSCC tests require architectural
features that are still under development.

Current verified boundary:

- All 58 tests complete with `NUM=0x3a00003a`, both normally and with
  deterministic instruction/data-memory backpressure.
- The ADEF regression verifies that a misaligned fetch target does not issue an
  instruction-memory request, emits one synthetic exception entry, and holds
  the frontend until the architectural exception redirect.
- The former test-45 no-commit watchdog was caused by fixed-low-slot LDQ query
  selection. The `slot_fair` regression now covers the rotating-query fix.
