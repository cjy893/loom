# LOOM performance and timing baseline

## 2026-08-04 baseline

This baseline is the reference point before the next frequency-oriented
optimization.  The RTL revision is:

```text
6f8543d4145885534210746decd3dfc514213ba0
```

The tracked worktree was clean when the revision was captured.  The IPC ratios
below are board measurements reported by the user.  A ratio is LOOM IPC divided
by the reference OpenLA500 IPC for the same test; absolute IPC values were not
recorded in this snapshot.

### Performance

| Test | IPC ratio |
|------|----------:|
| `quick_sort` | 0.71 |
| `dhrystone` | 0.74 |
| `crc32` | 0.75 |
| `bubble_sort` | 0.78 |

All other measured tests have an IPC ratio of at least 0.8, and many exceed
1.0.  These four tests are therefore the only current low-ratio group; this
statement does not by itself identify their limiting mechanism.

### Core configuration

| Parameter | Value |
|-----------|------:|
| CPU clock | 32.727 MHz |
| Fetch width | 4 |
| Decode/retire width | 2 / 2 |
| ALU/MEM issue width | 3 / 2 |
| ROB entries | 64 |
| Integer physical registers | 56 |
| ALU/MEM/UNQ IQ entries | 16 / 16 / 12 |
| LDQ/STQ entries | 16 / 16 |
| Fetch Buffer entries at `core_top` | 16 |
| ICache | 64 sets, 4 ways, 64-byte blocks |
| DCache | 64 sets, 4 ways, 2 MSHRs |

The MEM Issue Queue uses registered age-matrix oldest-ready selection and
partial AGEN/DGEN issue.  The Freelist uses grouped first-one selection rather
than the previous physical-register-wide linear priority chain.

### Implemented timing

Vivado implementation completed successfully and generated the bitstream.  The
routed timing summary reports:

| Metric | Value |
|--------|------:|
| CPU clock requirement | 30.556 ns |
| WNS / TNS | +0.827 ns / 0.000 ns |
| Setup failing endpoints | 0 |
| WHS / THS | +0.052 ns / 0.000 ns |
| Hold failing endpoints | 0 |

The worst setup path is:

```text
u_cpu/core_inst/alu_brinfo_valid_q_reg[0]
  -> u_cpu/ifu_inst/gen_composer[1].composer_inst/i_gshare/
     s1_provider_data_reg[0]
```

Its data path delay is 29.480 ns over 40 logic levels.  Logic contributes
6.175 ns (20.95%) and routing contributes 23.305 ns (79.05%).  The former
Freelist-to-ALU-IQ path is no longer the worst path.

### Whole-SoC utilization

These values are from `soc_top_utilization_placed.rpt`, so they include official
SoC infrastructure and are not core-only utilization:

| Resource | Used | Available | Utilization |
|----------|-----:|----------:|------------:|
| Slice LUTs | 109999 | 133800 | 82.21% |
| LUT as logic | 107454 | 133800 | 80.31% |
| Slice registers | 69630 | 269200 | 25.87% |
| Block RAM tiles | 8.5 | 365 | 2.33% |

### Next comparison

The next timing experiment should first preserve cycle behavior by registering
predecoded branch resolve/mispredict masks at the existing branch-result
boundary and providing local copies to the major consumers.  Compare against
this baseline after both synthesis and implementation.  Any change that adds a
predictor stage must also rerun the complete IPC suite because it can exchange
clock frequency for prediction latency.
