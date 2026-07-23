#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/regfile"

verilator --cc --build -j -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module regfile_test_top \
  --exe "$TEST_DIR/test_regfile.cpp" \
  "$ROOT/exu/regfile.sv" \
  "$TEST_DIR/regfile_test_top.sv"

"$TEST_DIR/obj_dir/Vregfile_test_top"
