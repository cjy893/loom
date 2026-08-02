#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/bpd_update_router"
PRODUCTION_SOURCE="$ROOT/ifu/bpd/bpd_update_router.sv"
DUT_SOURCE=${BPD_UPDATE_ROUTER_SOURCE:-"$PRODUCTION_SOURCE"}

case "${1:-}" in
  "")
    ;;
  --reference)
    DUT_SOURCE="$TEST_DIR/bpd_update_router_reference.sv"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

if [[ ! -f "$DUT_SOURCE" ]]; then
  printf 'ERROR: BPD update router source is missing: %s\n' \
    "$DUT_SOURCE" >&2
  printf 'Run %s --reference to validate the test harness.\n' "$0" >&2
  exit 1
fi

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module bpd_update_router_test_top \
  --exe "$TEST_DIR/test_bpd_update_router.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$DUT_SOURCE" \
  "$TEST_DIR/bpd_update_router_test_top.sv"

"$TEST_DIR/obj_dir/Vbpd_update_router_test_top"
