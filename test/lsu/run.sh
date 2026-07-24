#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/lsu"
LSU_RTL="$ROOT/lsu/lsu.sv"
rtl_args=()

if [[ -f "$LSU_RTL" ]] &&
   rg -q '^[[:space:]]*module[[:space:]]+lsu([[:space:]]|#|\()' "$LSU_RTL"; then
  rtl_args=(-DLSU_RTL_PRESENT "$ROOT/lsu/load_queue.sv" "$LSU_RTL")
fi

verilator --cc --build -j -Wno-fatal --output-split 100 \
  --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module lsu_test_top \
  --exe "$TEST_DIR/test_lsu.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "${rtl_args[@]}" \
  "$TEST_DIR/lsu_test_top.sv"

"$TEST_DIR/obj_dir/Vlsu_test_top"
