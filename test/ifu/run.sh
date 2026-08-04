#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/ifu"
IFU_SOURCE=${IFU_SOURCE:-"$ROOT/ifu/ifu.sv"}

if [[ ! -f "$IFU_SOURCE" ]]; then
  printf 'ERROR: IFU implementation is missing: %s\n' "$IFU_SOURCE" >&2
  exit 1
fi

verilator --cc --build -j 1 --output-split 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module ifu_test_top \
  --exe "$TEST_DIR/test_ifu.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/ifu/bpd/ubtb.sv" \
  "$ROOT/ifu/bpd/bim.sv" \
  "$ROOT/ifu/bpd/gshare.sv" \
  "$ROOT/ifu/bpd/btb.sv" \
  "$ROOT/ifu/bpd/composer.sv" \
  "$ROOT/ifu/bpd/bpd_update_router.sv" \
  "$ROOT/ifu/bpd/f3_predecode.sv" \
  "$ROOT/ifu/bpd/ghist.sv" \
  "$ROOT/ifu/bpd/ras.sv" \
  "$ROOT/ifu/fetch_target_queue.sv" \
  "$IFU_SOURCE" \
  "$TEST_DIR/ifu_test_top.sv"

(
  cd "$TEST_DIR"
  ./obj_dir/Vifu_test_top
)
