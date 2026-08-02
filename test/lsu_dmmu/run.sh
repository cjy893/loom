#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/lsu_dmmu"
MDIR="$TEST_DIR/obj_dir"

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wall -Wno-DECLFILENAME -Wno-IMPORTSTAR -Wno-UNDRIVEN \
  -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM -Wno-WIDTH -Wno-EOFNEWLINE \
  --Mdir "$MDIR" \
  --top-module lsu_dmmu_test_top \
  --exe "$TEST_DIR/test_lsu_dmmu.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/mmu/addr_trans.sv" \
  "$ROOT/mmu/dmmu.sv" \
  "$ROOT/lsu/load_queue.sv" \
  "$ROOT/lsu/store_queue.sv" \
  "$ROOT/lsu/lsu.sv" \
  "$TEST_DIR/lsu_dmmu_test_top.sv"

"$MDIR/Vlsu_dmmu_test_top"
