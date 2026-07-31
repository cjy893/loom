#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/btb"

DUT_SOURCES=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$ROOT/ifu/bpd/btb.sv"
)
MDIR="$TEST_DIR/obj_dir"

verilator --cc --build -j 1 -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module btb_test_top \
  --exe "$TEST_DIR/test_btb.cpp" \
  "${DUT_SOURCES[@]}" \
  "$TEST_DIR/btb_test_top.sv"

"$MDIR/Vbtb_test_top"
