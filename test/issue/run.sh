#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/issue"

verilator --cc --build -j -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module issue_test_top \
  --exe "$TEST_DIR/test_issue.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/exu/issue/issue_unit_collapsing.sv" \
  "$TEST_DIR/issue_test_top.sv"

"$TEST_DIR/obj_dir/Vissue_test_top"
