#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
RUNNER="$ROOT/test/core_top_elf_axi/run.sh"
PERF_OBJ_ROOT=${PERF_OBJ_ROOT:-/mnt/e/nscscc/chiplab/software/examples/nscscc_perf/obj}
PERF_MAX_CYCLES=${PERF_MAX_CYCLES:-200000000}
PERF_WATCHDOG=${PERF_WATCHDOG:-1000000}
PERF_SIMU_FLAG=${PERF_SIMU_FLAG:-0}

if [[ $# -eq 0 ]]; then
  benchmarks=(stream_copy crc32 coremark fireye_A0)
else
  benchmarks=("$@")
fi

extra_args=()
if [[ ${PERF_AXI_STRESS:-0} == 1 ]]; then
  extra_args+=(--stress)
fi

skip_build=0
for benchmark in "${benchmarks[@]}"; do
  elf="$PERF_OBJ_ROOT/$benchmark/main.elf"
  disasm="$PERF_OBJ_ROOT/$benchmark/test.s"

  if [[ ! -f "$elf" ]]; then
    printf 'Performance ELF not found: %s\n' "$elf" >&2
    exit 2
  fi

  printf '\n=== core_top performance: %s ===\n' "$benchmark"
  ELF_PATH="$elf" \
  DISASM_PATH="$disasm" \
  CORE_TOP_ELF_AXI_SKIP_BUILD="$skip_build" \
    "$RUNNER" \
      --perf \
      --simu-flag "$PERF_SIMU_FLAG" \
      --max-cycles "$PERF_MAX_CYCLES" \
      --watchdog "$PERF_WATCHDOG" \
      "${extra_args[@]}"

  skip_build=1
done
