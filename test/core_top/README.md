# Core top black-box contract test

This suite defines the verification boundary for the future production
`cpu_core` top. The driver uses only module ports; it does not read internal
hierarchical state.

The contract covers:

- instruction-memory ready/valid behavior;
- data-memory requests, tagged responses, and request stability under stall;
- branch recovery and wrong-path suppression;
- precise synchronous exception reporting and handler entry;
- hardware-interrupt delivery;
- two-wide architectural commit trace outputs.

An instruction request that remains valid while stalled must keep its address
stable. The IFU may withdraw an unaccepted request when an internal redirect
cancels that wrong-path fetch; the black-box top does not expose the redirect
as a separate cancellation signal.

Run against the current verified test-only composition:

```bash
./test/core_top/run.sh
```

The reference composition is `IFU -> fetcher_buffer -> loom_core` and lives
entirely in this test directory. It is not a production RTL implementation.

After `cpu_core.sv` exists with the port contract in
`core_top_contract_test_top.sv`, run the same tests against it:

```bash
CORE_TOP_MODE=candidate \
CPU_CORE_SOURCE=/path/to/cpu_core.sv \
  ./test/core_top/run.sh
```

Candidate mode intentionally compiles only the package files, the candidate
source, and the contract wrapper. If the candidate uses other RTL modules,
add those production source files to the candidate source list when the
production top is introduced.
