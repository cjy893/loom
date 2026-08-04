# LOOM performance and timing baseline

## 2026-08-04 40 MHz baseline (current)

The rollback revision used for the isolated DCache A/B is:

```text
4103d09fcaf7ede786a28aa76faaa3111cb2c124
```

The accepted DCache direct-hit revision is:

```text
1f01183c219930db77a9b2808b9c5157f73dc1f0
```

### Validation result

- Vivado implementation and bitstream generation completed successfully.
- The complete functional and performance suites passed on the board at
  40 MHz.
- Before the DCache direct-hit change, `fireye_A0`, `my_memcmp`, and `crc32`
  had lower IPC than at 32.727 MHz, but the 40 MHz frequency gain was larger
  than each IPC loss, so all three still had higher effective throughput.
- The positive-WNS build has the same performance result as the preceding
  negative-WNS 40 MHz build.  The final timing cut therefore introduced no
  additional measurable performance loss.

After adding the DCache LOOKUP-cycle direct hit response, the complete board
performance suite produced this final distribution:

| Test | IPC ratio vs. OpenLA500 |
|------|------------------------:|
| `quick_sort` | 0.73 |
| `crc32` | 0.75 |
| `dhrystone` | 0.82 |

Every other measured test is above 0.9, and 10 tests are above 1.0.  Exact
per-test values for that remaining group were not recorded in this snapshot.

### Predictor counter BRAM isolation

An isolated Verilator A/B compared the original inferred BIM/GShare counter
arrays with the explicit synchronous BRAM wrapper.  Both sides used the same
current six-branch-tag configuration, production Cache/MMU/AXI path, and full
FPGA-loop performance images:

| Test | Old IPC | BRAM IPC | Old cycles | BRAM cycles | Window commits |
|------|--------:|---------:|-----------:|------------:|---------------:|
| `crc32` | 0.9304 | 0.9304 | 1,836,456 | 1,836,456 | 1,708,620 |
| `quick_sort` | 0.5950 | 0.5950 | 2,235,993 | 2,235,993 | 1,330,356 |
| `dhrystone` | 0.5713 | 0.5713 | 54,541 | 54,541 | 31,160 |

All three completed successfully.  Commit checkpoints, branch mispredicts,
Cache/AXI traffic, and stall counters were also identical, so the storage
change has no simulated IPC or cycle regression.  Vivado synthesis and routed
utilization remain necessary to confirm that the XPM branch maps the four
counter tables to block RAM and improves physical Slice pressure.

### Pre-direct-hit timing (rollback)

The routed timing summary for revision `4103d09` reports:

| Metric | Value |
|--------|------:|
| CPU clock | 40 MHz |
| CPU clock requirement | 25.000 ns |
| WNS / TNS | +0.118 ns / 0.000 ns |
| Setup failing endpoints | 0 |
| WHS / THS | +0.051 ns / 0.000 ns |
| Hold failing endpoints | 0 |

The worst CPU setup path is:

```text
u_cpu/icache_inst/req_paddr_q_reg[6]_rep
  -> u_cpu/ifu_inst/gen_composer[0].composer_inst/i_gshare/
     s1_counter_data_reg[1]
```

Its data path delay is 24.684 ns over 28 logic levels.  Logic contributes
4.908 ns (19.88%) and routing contributes 19.776 ns (80.12%).  The former
branch-recovery path from `mispredict_mask_q` is no longer among the reported
worst setup paths.

### DCache direct-hit acceptance

Keep this revision as the rollback point for the next IPC optimization.  The
DCache LOOKUP-cycle load/store hit response is now implemented and has passed
its unit, LSU/DMMU, production recovery, and normal/stressed functional-ELF
regressions.

An isolated Verilator A/B used revision `4103d09` as the baseline and changed
only the production DCache hit response.  The measurement-window results are:

| Test | Baseline IPC | Direct-hit IPC | IPC change | Baseline cycles | Direct-hit cycles | Cycle change |
|------|-------------:|---------------:|-----------:|----------------:|------------------:|-------------:|
| `fireye_A0` | 0.3978 | 0.4678 | +17.6% | 1,210,050 | 1,028,984 | -15.0% |
| `my_memcmp` | 0.6171 | 0.7662 | +24.2% | 2,027,977 | 1,633,168 | -19.5% |
| `stream_copy` | 0.6155 | 0.8606 | +39.8% | 126,272 | 90,320 | -28.5% |
| `crc32` | 0.6952 | 0.7207 | +3.7% | 2,457,713 | 2,370,879 | -3.5% |

The DCache `S_RESPONSE` occupancy fell from 17.38%, 24.76%, 31.68%, and
18.16% to 2.83%, 0.95%, 0.28%, and 0.00%, respectively.  This confirms that
the measured gains come from removing the fixed hit-response cycle rather than
from a changed instruction count or Cache hit rate.

The isolated change also passed routed 40 MHz timing:

| Metric | Value |
|--------|------:|
| WNS / TNS | +0.043 ns / 0.000 ns |
| Setup failing endpoints | 0 |
| WHS / THS | +0.050 ns / 0.000 ns |
| Hold failing endpoints | 0 |

The new worst setup path is from ROB `rob_val` to UNQ Issue Queue
`psrc1_busy`, with 24.920 ns data delay over 35 logic levels; routing accounts
for 80.42%.  The DCache direct-response path is not among the reported worst
paths.  Board testing subsequently confirmed the improvement: only
`quick_sort`, `crc32`, and `dhrystone` remain below 0.9, while 10 tests exceed
the reference IPC.  The DCache direct-hit experiment is accepted as the new
implementation baseline.

### Branch-tag same-cycle recycle acceptance

The branch mask allocator now recycles a correctly resolved branch tag in the
same cycle, while Rename2 preserves a newly allocated instance of that tag when
clearing resolved branch dependencies.  An isolated Verilator A/B changed only
the branch mask and Rename2 implementations:

| Test | Old IPC | Recycle IPC | IPC change | Old cycles | Recycle cycles | Cycle change |
|------|--------:|------------:|-----------:|-----------:|---------------:|-------------:|
| `crc32` full | 0.7207 | 0.7870 | +9.20% | 2,370,879 | 2,170,938 | -8.43% |
| `coremark` short | 0.6771 | 0.6800 | +0.43% | 421,652 | 419,904 | -0.41% |

The full CRC32 runs retired the same 1,708,620 instructions.  The old version
recorded 477,245 branch-mask contract misses; the revised version recorded
none.  All 38 module suites and the official functional ELF in normal and AXI
backpressure modes passed 58/58.

The routed board build passed with WNS `+0.361 ns`.  Board measurements showed
only small aggregate IPC changes: the lowest ratios remain `quick_sort` 0.73,
`crc32` 0.75, and `dhrystone` 0.82.  The large isolated Verilator CRC32 gain is
therefore not treated as a corresponding board-level gain; the change is kept
for eliminating the allocator contract miss without a measured regression.

### Branch-tag capacity and branch-direction isolation

The production four-tag configuration was profiled without changing RTL.  A
temporary parameter-only six- and eight-tag build initially deadlocked at the
same point after 5,517 commits.  Static audit found that `loom_core` passes
`MAX_BR_COUNT` to `br_mask`, but not to `rename_stage`, whose default remains
four.  A temporary eight-tag build that changed only the `rename_stage` default
to follow the package parameter completed CRC32 correctly:

| CRC32 configuration | IPC | Cycles | Branch-tag stall/cycles | Full occupancy |
|---------------------|----:|-------:|------------------------:|---------------:|
| Production 4 tags | 0.7870 | 2,170,938 | 53.08% | 85.48% at 4 |
| Temporary 8 tags with matching Rename snapshots | 0.9304 | 1,836,456 | 0.01% | 0.02% at 8 |

Both successful runs retired 1,708,620 instructions in the measured window.
The temporary eight-tag result is +18.22% IPC and -15.41% cycles.  Occupancy was
64.93% at five tags and only 1.40% at six or more, so six tags is the preferred
next A/B point after the production parameter contract and recovery tests are
fixed.  No production RTL was changed by this isolation.

The `loom_core` to `rename_stage` parameter connection was subsequently fixed.
Parameterized Rename recovery passed with 4, 6, and 8 tags, and the Core-level
capacity contract now passes with six.  A complete six-tag CRC32 run produced
exactly the same measured IPC and cycle count as eight tags (`0.9304` and
1,836,456 cycles), with 0.24% branch-tag stall cycles.  The official 58-point
functional ELF also passed in normal and deterministic AXI-backpressure modes.
The checked-in production capacity is now six.  The production package passed
the complete module regression plus the official 58-point functional ELF in
normal and deterministic AXI-backpressure modes.  Non-incremental synthesis
and implementation remain required to confirm the six-tag area and timing cost.

The same four-tag model recorded actual and predicted direction for each hot
branch:

- `crc32`: IPC 0.7870, 0.25% mispredicts.  The hot `strlen` branch at
  `0x1c000ed8` is 99.5% taken and predicts taken after two cold outcomes.  The
  dominant loss is branch-tag capacity, not direction prediction.
- `quick_sort`: IPC 0.5783, 19.40% mispredicts and 17.01% branch-tag stalls.
  The largest hotspots are `0x1c000b04` (8,233/26,185), `0x1c000cd0`
  (6,985/14,830), and `0x1c000b3c` (3,077/12,599).  Their outcomes are strongly
  data-dependent; for example `0x1c000cd0` is 50.5% taken with 6,480 direction
  transitions.  Provider/index/training attribution is required before changing
  predictor capacity.  STQ accounts for 55.87% of the smaller 6.39% dispatch
  blocked interval and is a secondary target.
- `dhrystone`: IPC 0.5683 and 10.57% mispredicts.  `0x1c001704`, `0x1c0009a4`,
  and `0x1c0016e4` are actually always taken, but predict taken only 33.3%, 0%,
  and 0%.  `0x1c0016f4` repeats an N,N,T outcome while predicting all N.  The
  `0x1c001640` JIRL is direction-correct but has 100 target/metadata misses.
  These signatures prioritize BTB/provider/meta and training-routing audit over
  adding a more complex predictor.  Freelist pressure remains a separate
  backend bottleneck (20.34% rename stall).

## 2026-08-04 pre-40 MHz baseline (historical)

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
| DCache | 64 sets, 4 ways, single outstanding |

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

### Frequency experiment outcome

The planned branch-mask timing work and 40 MHz implementation were completed
in revision `4103d09`.  The resulting current baseline is recorded above.
