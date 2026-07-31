#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/dmmu"
PRODUCTION_SOURCE="$ROOT/mmu/dmmu.sv"
DUT_SOURCE=${DMMU_SOURCE:-"$PRODUCTION_SOURCE"}
MDIR="$TEST_DIR/obj_dir"

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCE="$TEST_DIR/dmmu_reference.sv"
    MDIR="$TEST_DIR/obj_dir_reference"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

if [[ ! -s "$DUT_SOURCE" ]]; then
  printf 'ERROR: DMMU source is missing or empty: %s\n' "$DUT_SOURCE" >&2
  printf 'Run %s --reference to validate the test harness.\n' "$0" >&2
  exit 1
fi

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wall -Wno-DECLFILENAME -Wno-IMPORTSTAR -Wno-UNDRIVEN \
  -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
  --Mdir "$MDIR" \
  --top-module dmmu_test_top \
  --exe "$TEST_DIR/test_dmmu.cpp" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/mmu/addr_trans.sv" \
  "$DUT_SOURCE" \
  "$TEST_DIR/dmmu_test_top.sv"

"$MDIR/Vdmmu_test_top"
