#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/fetch_metadata"
MDIR="$TEST_DIR/obj_dir"

verilator --cc --build -j 1 --output-split 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH \
  -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module fetch_metadata_test_top \
  --exe "$TEST_DIR/test_fetch_metadata.cpp" \
  "$TEST_DIR/fetch_metadata_buffer_reference.sv" \
  "$TEST_DIR/fetch_metadata_test_top.sv"

"$MDIR/Vfetch_metadata_test_top"
