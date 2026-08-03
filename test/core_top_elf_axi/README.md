# core_top ELF AXI regression

This regression loads the NSCSCC functional-test ELF into an AXI3 memory
model and runs it through the real `core_top` module.

Normal timing:

```bash
./test/core_top_elf_axi/run.sh \
  --allow-exceptions --target-tests 58 \
  --max-cycles 5000000 --watchdog 50000
```

Deterministic AXI backpressure:

```bash
./test/core_top_elf_axi/run.sh \
  --allow-exceptions --target-tests 58 \
  --max-cycles 5000000 --watchdog 50000 --stress
```

Disable single-GPR debug commit serialization:

```bash
SINGLE_DEBUG_COMMIT=0 ./test/core_top_elf_axi/run.sh \
  --allow-exceptions --target-tests 58 \
  --max-cycles 5000000 --watchdog 50000
```

Set `ELF_PATH` and `DISASM_PATH` to use different inputs.

## Performance profiling

Run the four comparison benchmarks with the production `core_top`, real
Cache/MMU path, and an AXI memory model:

```bash
./test/core_top_elf_axi/run_perf.sh
```

Run only the two memory-sensitive benchmarks:

```bash
./test/core_top_elf_axi/run_perf.sh stream_copy crc32
```

The default `PERF_SIMU_FLAG=0` uses the FPGA loop counts. Set it to `1` for a
short smoke run. `PERF_AXI_STRESS=1` enables deterministic AXI backpressure.

The profiler toggles its measurement window whenever the committed PC is
`0x1c000438`, the `rdtimel.w` in `get_cpu_clock_count()` in the current
`nscscc_perf` images. Override it with `--window-pc` when using another build.
The report includes window IPC, IFU/Cache/MMU state occupancy, I/D Cache hit
rates, LSU query blocking, dispatch stalls, branch misprediction rate, and AXI
traffic. Correct completion still requires the benchmark PASS LED value and a
completed `SOC_NUM` write.
