#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/dcache"
PRODUCTION_SOURCE="$ROOT/cache/dcache.sv"
DUT_SOURCE=${DCACHE_SOURCE:-"$PRODUCTION_SOURCE"}
VERILATOR=${VERILATOR:-verilator}
VERILATOR_KIT_ROOT=${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}
MDIR="$TEST_DIR/obj_dir"

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCE="$TEST_DIR/dcache_reference.sv"
    MDIR="$TEST_DIR/obj_dir_reference"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

if [[ ! -f "$DUT_SOURCE" ]]; then
  printf 'ERROR: D-Cache source is missing: %s\n' "$DUT_SOURCE" >&2
  printf 'Run %s --reference to validate the test contract.\n' "$0" >&2
  exit 1
fi

"$VERILATOR" --cc -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
  --Mdir "$MDIR" \
  --top-module dcache_test_top \
  --exe "$TEST_DIR/test_dcache.cpp" \
  "$DUT_SOURCE" \
  "$TEST_DIR/dcache_test_top.sv"

make -C "$MDIR" -f Vdcache_test_top.mk -j 1 \
  VERILATOR_ROOT="$VERILATOR_KIT_ROOT"

"$MDIR/Vdcache_test_top"
