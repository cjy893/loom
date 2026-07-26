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
