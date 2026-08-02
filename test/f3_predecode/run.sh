#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/f3_predecode"
PRODUCTION_SOURCE="$ROOT/ifu/bpd/f3_predecode.sv"
DUT_SOURCE=${F3_PREDECODE_SOURCE:-"$PRODUCTION_SOURCE"}

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCE="$TEST_DIR/f3_predecode_reference.sv"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

if [[ ! -f "$DUT_SOURCE" ]]; then
  printf 'ERROR: F3 predecode source is missing: %s\n' "$DUT_SOURCE" >&2
  printf 'Run %s --reference to validate the test harness.\n' "$0" >&2
  exit 1
fi

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module f3_predecode_test_top \
  --exe "$TEST_DIR/test_f3_predecode.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$DUT_SOURCE" \
  "$TEST_DIR/f3_predecode_test_top.sv"

"$TEST_DIR/obj_dir/Vf3_predecode_test_top"
