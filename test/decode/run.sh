#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/decode"
VERILATOR=${VERILATOR:-verilator}
VERILATOR_KIT_ROOT=${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}
MDIR=${DECODE_OBJ_DIR:-"$TEST_DIR/obj_dir"}

"$VERILATOR" --cc -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module decode_test_top \
  --exe "$TEST_DIR/test_decode.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/exu/decode.sv" \
  "$TEST_DIR/decode_test_top.sv"

make -C "$MDIR" -f Vdecode_test_top.mk -j 1 \
  VERILATOR_ROOT="$VERILATOR_KIT_ROOT"

"$MDIR/Vdecode_test_top"
