#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/unq"

verilator --cc --build -j -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module unq_test_top \
  --exe "$TEST_DIR/test_unq.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/exu/exe/div/srt4_qselect.sv" \
  "$ROOT/exu/exe/div/srt4_preprocess.sv" \
  "$ROOT/exu/exe/div/srt4_otfc.sv" \
  "$ROOT/exu/exe/div/srt4_core.sv" \
  "$ROOT/exu/exe/div/divider.sv" \
  "$ROOT/exu/exe/unq.sv" \
  "$TEST_DIR/unq_test_top.sv"

"$TEST_DIR/obj_dir/Vunq_test_top"
