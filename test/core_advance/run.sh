#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
ADVANCE_OBJ=${ADVANCE_OBJ:-/mnt/e/nscscc/chiplab/software/examples/func/func_advance/obj}

export ELF_PATH=${ELF_PATH:-"$ADVANCE_OBJ/main.elf"}
export DISASM_PATH=${DISASM_PATH:-"$ADVANCE_OBJ/test.s"}

exec "$ROOT/test/core_top_elf_axi/run.sh" \
  --skip-startup-prefix \
  --allow-exception-pc 0x1c00f518 \
  --allow-exception-pc 0x1c00f538 \
  --allow-exception-pc 0x1c00f564 \
  --allow-exception-pc 0x1c00f580 \
  --allow-exception-pc 0x1c00f594 \
  --allow-exception-pc 0x1c00f5a8 \
  --allow-exception-pc 0x1c00f5bc \
  --allow-exception-pc 0x1c00f5d0 \
  --allow-exception-pc 0x1c00f5e4 \
  --allow-exception-pc 0x1c00f600 \
  --allow-exception-pc 0x1c00f614 \
  --allow-exception-pc 0x1c00f628 \
  --allow-exception-pc 0x1c00f640 \
  --target-tests 6 \
  --max-cycles 5000000 \
  --watchdog 50000 \
  "$@"
