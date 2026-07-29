#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/div"

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME \
  --Mdir "$TEST_DIR/obj_dir_qselect" \
  --top-module srt4_qselect_test_top \
  --exe "$TEST_DIR/test_srt4_qselect.cpp" \
  "$ROOT/exu/exe/div/srt4_qselect.sv" \
  "$TEST_DIR/srt4_qselect_test_top.sv"

"$TEST_DIR/obj_dir_qselect/Vsrt4_qselect_test_top"
