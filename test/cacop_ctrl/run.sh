#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/cacop_ctrl"
PRODUCTION_SOURCE="$ROOT/cache/cacop_ctrl.sv"
DUT_SOURCE=${CACOP_CTRL_SOURCE:-"$PRODUCTION_SOURCE"}
VERILATOR=${VERILATOR:-verilator}
VERILATOR_KIT_ROOT=${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}
DEFAULT_MDIR="$TEST_DIR/obj_dir"

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCE="$TEST_DIR/cacop_ctrl_reference.sv"
    DEFAULT_MDIR="$TEST_DIR/obj_dir_reference"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

MDIR=${CACOP_CTRL_OBJ_DIR:-"$DEFAULT_MDIR"}

if [[ ! -f "$DUT_SOURCE" ]]; then
  printf 'ERROR: CACOP controller source is missing: %s\n' "$DUT_SOURCE" >&2
  printf 'Run %s --reference to validate the test contract.\n' "$0" >&2
  exit 1
fi

"$VERILATOR" --cc -Wno-fatal \
  -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
  --Mdir "$MDIR" \
  --top-module cacop_ctrl_test_top \
  --exe "$TEST_DIR/test_cacop_ctrl.cpp" \
  "$DUT_SOURCE" \
  "$TEST_DIR/cacop_ctrl_test_top.sv"

make -C "$MDIR" -f Vcacop_ctrl_test_top.mk -j 1 \
  VERILATOR_ROOT="$VERILATOR_KIT_ROOT"

"$MDIR/Vcacop_ctrl_test_top"
