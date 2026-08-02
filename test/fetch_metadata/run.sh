#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/fetch_metadata"
PRODUCTION_SOURCE="$ROOT/ifu/fetcher_buffer.sv"
DUT_SOURCE=${FETCH_METADATA_SOURCE:-"$PRODUCTION_SOURCE"}
MDIR="$TEST_DIR/obj_dir"

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCE="$TEST_DIR/fetch_metadata_buffer_reference.sv"
    MDIR="$TEST_DIR/obj_dir_reference"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

if [[ ! -f "$DUT_SOURCE" ]]; then
  printf 'ERROR: Fetch Buffer source is missing: %s\n' "$DUT_SOURCE" >&2
  printf 'Run %s --reference to validate the test contract.\n' "$0" >&2
  exit 1
fi

verilator --cc --build -j 1 --output-split 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH \
  -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module fetch_metadata_test_top \
  --exe "$TEST_DIR/test_fetch_metadata.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$DUT_SOURCE" \
  "$TEST_DIR/fetch_metadata_test_top.sv"

"$MDIR/Vfetch_metadata_test_top"
