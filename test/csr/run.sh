#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/csr"

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  -Wno-UNDRIVEN \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module csr_file_test_top \
  --exe "$TEST_DIR/test_csr_file.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/csr/csr_file.sv" \
  "$TEST_DIR/csr_file_test_top.sv"

"$TEST_DIR/obj_dir/Vcsr_file_test_top"
