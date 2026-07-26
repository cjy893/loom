#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/core_lsu"

verilator --cc --build -j 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module core_lsu_test_top \
  --exe "$TEST_DIR/test_core_lsu.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/exu/decode.sv" \
  "$ROOT/exu/br_mask.sv" \
  "$ROOT/exu/rename/rename_maptable.sv" \
  "$ROOT/exu/rename/rename_freelist.sv" \
  "$ROOT/exu/rename/rename_busytable.sv" \
  "$ROOT/exu/rename/rename_stage.sv" \
  "$ROOT/exu/dispatch.sv" \
  "$ROOT/exu/issue/issue_slot.sv" \
  "$ROOT/exu/issue/issue_unit_collapsing.sv" \
  "$ROOT/exu/regfile.sv" \
  "$ROOT/exu/exe/alu.sv" \
  "$ROOT/exu/exe/mem.sv" \
  "$ROOT/exu/exe/unq.sv" \
  "$ROOT/exu/rob.sv" \
  "$ROOT/csr/csr_file.sv" \
  "$ROOT/lsu/load_queue.sv" \
  "$ROOT/lsu/store_queue.sv" \
  "$ROOT/lsu/lsu.sv" \
  "$ROOT/exu/loom_core.sv" \
  "$TEST_DIR/core_lsu_test_top.sv"

(
  cd "$TEST_DIR"
  ./obj_dir/Vcore_lsu_test_top
)
