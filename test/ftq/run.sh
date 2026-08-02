#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/ftq"

DUT_MODE=${1:-production}

case "$DUT_MODE" in
production)
  DUT_SOURCE="$ROOT/ifu/fetch_target_queue.sv"
  ;;
reference)
  DUT_SOURCE="$TEST_DIR/reference/fetch_target_queue.sv"
  ;;
*)
  echo "usage: $0 [production|reference]" >&2
  exit 2
  ;;
esac

DUT_SOURCES=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$DUT_SOURCE"
)

run_config() {
  local entries=$1
  local mdir="$TEST_DIR/obj_dir_${DUT_MODE}_${entries}"

  verilator --cc --build -j 1 -Wno-fatal \
    --output-split 100 --output-split-cfuncs 100 \
    -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
    -GNUM_ENTRIES="$entries" \
    -CFLAGS "-DFTQ_TEST_NUM_ENTRIES=$entries" \
    --Mdir "$mdir" \
    --top-module ftq_test_top \
    --exe "$TEST_DIR/test_ftq.cpp" \
    "${DUT_SOURCES[@]}" \
    "$TEST_DIR/ftq_test_top.sv"

  "$mdir/Vftq_test_top"
}

run_config 16
run_config 5
