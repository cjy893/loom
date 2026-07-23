#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/rob"

verilator --cc --build -j 1 -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module rob_test_top \
  --exe "$TEST_DIR/test_rob.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/exu/rob.sv" \
  "$TEST_DIR/rob_test_top.sv"

"$TEST_DIR/obj_dir/Vrob_test_top"
