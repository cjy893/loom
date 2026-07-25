#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/ifu"
IFU_SOURCE=${IFU_SOURCE:-"$ROOT/ifu/ifu.sv"}

if [[ ! -f "$IFU_SOURCE" ]]; then
  printf 'ERROR: IFU implementation is missing: %s\n' "$IFU_SOURCE" >&2
  exit 1
fi

verilator --cc --build -j 1 --output-split 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module ifu_test_top \
  --exe "$TEST_DIR/test_ifu.cpp" \
  "$IFU_SOURCE" \
  "$TEST_DIR/ifu_test_top.sv"

(
  cd "$TEST_DIR"
  ./obj_dir/Vifu_test_top
)
