#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/ghist"

DUT_SOURCES=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$ROOT/ifu/bpd/ghist.sv"
)
MDIR="$TEST_DIR/obj_dir"

verilator --cc --build -j 1 -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module ghist_test_top \
  --exe "$TEST_DIR/test_ghist.cpp" \
  "${DUT_SOURCES[@]}" \
  "$TEST_DIR/ghist_test_top.sv"

"$MDIR/Vghist_test_top"
