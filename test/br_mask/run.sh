#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/br_mask"

verilator --cc --build -j -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module br_mask_test_top \
  --exe "$TEST_DIR/test_br_mask.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/exu/br_mask.sv" \
  "$TEST_DIR/br_mask_test_top.sv"

"$TEST_DIR/obj_dir/Vbr_mask_test_top"
