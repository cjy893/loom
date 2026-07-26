#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/fetch_buffer"
FETCHER_BUFFER_SOURCE=${FETCHER_BUFFER_SOURCE:-"$ROOT/ifu/fetcher_buffer.sv"}

if [[ ! -f "$FETCHER_BUFFER_SOURCE" ]]; then
  printf 'ERROR: fetch buffer implementation is missing: %s\n' \
    "$FETCHER_BUFFER_SOURCE" >&2
  exit 1
fi

verilator --cc --build -j 1 --output-split 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module fetcher_buffer_test_top \
  --exe "$TEST_DIR/test_fetcher_buffer.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$FETCHER_BUFFER_SOURCE" \
  "$TEST_DIR/fetcher_buffer_test_top.sv"

"$TEST_DIR/obj_dir/Vfetcher_buffer_test_top"
