#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/div"

DUT_SOURCES=(
  "$ROOT/exu/exe/div/srt4_qselect.sv"
  "$ROOT/exu/exe/div/srt4_preprocess.sv"
  "$ROOT/exu/exe/div/srt4_otfc.sv"
  "$ROOT/exu/exe/div/srt4_core.sv"
  "$ROOT/exu/exe/div/divider.sv"
)
DEFINES=()
MDIR="$TEST_DIR/obj_dir"

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCES=("$TEST_DIR/divider_reference.sv")
    DEFINES=(-DDIVIDER_USE_REFERENCE)
    MDIR="$TEST_DIR/obj_dir_reference"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

verilator --cc --build -j 1 -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  "${DEFINES[@]}" \
  --Mdir "$MDIR" \
  --top-module divider_test_top \
  --exe "$TEST_DIR/test_divider.cpp" \
  "${DUT_SOURCES[@]}" \
  "$TEST_DIR/divider_test_top.sv"

"$MDIR/Vdivider_test_top"
