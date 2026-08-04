#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/bpd_integration"

DUT_SOURCES=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$ROOT/ifu/bpd/ghist.sv"
  "$ROOT/ifu/bpd/ras.sv"
  "$ROOT/ifu/bpd/ubtb.sv"
  "$ROOT/ifu/bpd/bpd_sdp_bram.sv"
  "$ROOT/ifu/bpd/bim.sv"
  "$ROOT/ifu/bpd/btb.sv"
)
MDIR="$TEST_DIR/obj_dir_full"

verilator --cc --build -j 1 -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module bpd_full_test_top \
  --exe "$TEST_DIR/test_bpd_full.cpp" \
  "${DUT_SOURCES[@]}" \
  "$TEST_DIR/bpd_full_test_top.sv"

"$MDIR/Vbpd_full_test_top"
