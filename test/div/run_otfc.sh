#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/div"

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME \
  --Mdir "$TEST_DIR/obj_dir_otfc" \
  --top-module srt4_otfc_test_top \
  --exe "$TEST_DIR/test_srt4_otfc.cpp" \
  "$ROOT/exu/exe/div/srt4_otfc.sv" \
  "$TEST_DIR/srt4_otfc_test_top.sv"

"$TEST_DIR/obj_dir_otfc/Vsrt4_otfc_test_top"
