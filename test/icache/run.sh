#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/icache"
PRODUCTION_SOURCE="$ROOT/cache/icache.sv"
DUT_SOURCE=${ICACHE_SOURCE:-"$PRODUCTION_SOURCE"}
VERILATOR=${VERILATOR:-verilator}
VERILATOR_KIT_ROOT=${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}
BASE_MDIR="$TEST_DIR/obj_dir"

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCE="$TEST_DIR/icache_reference.sv"
    BASE_MDIR="$TEST_DIR/obj_dir_reference"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

if [[ ! -f "$DUT_SOURCE" ]]; then
  printf 'ERROR: I-Cache source is missing: %s\n' "$DUT_SOURCE" >&2
  printf 'Run %s --reference to validate the test contract.\n' "$0" >&2
  exit 1
fi

for line_bytes in 32 64; do
  mdir="${BASE_MDIR}_${line_bytes}b"
  printf 'Testing I-Cache with LINE_BYTES=%d\n' "$line_bytes"

  "$VERILATOR" --cc -Wno-fatal \
    --output-split 100 --output-split-cfuncs 100 \
    -Wall -Wno-DECLFILENAME -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM \
    --Mdir "$mdir" \
    --top-module icache_test_top \
    -GLINE_BYTES="$line_bytes" \
    --exe "$TEST_DIR/test_icache.cpp" \
    -CFLAGS "-std=c++17 -O0 -DTEST_LINE_BYTES=$line_bytes" \
    "$DUT_SOURCE" \
    "$TEST_DIR/icache_test_top.sv"

  make -C "$mdir" -f Vicache_test_top.mk -j 1 \
    VERILATOR_ROOT="$VERILATOR_KIT_ROOT"

  "$mdir/Vicache_test_top"
done
