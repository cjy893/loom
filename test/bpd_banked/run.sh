#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/bpd_banked"
DUT_SOURCE="$TEST_DIR/bpd_banked_reference.sv"
MDIR="$TEST_DIR/obj_dir"

case "${1:-}" in
  "")
    ;;
  *)
    echo "usage: $0" >&2
    exit 2
    ;;
esac

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module bpd_banked_test_top \
  --exe "$TEST_DIR/test_bpd_banked.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/ifu/bpd/ubtb.sv" \
  "$ROOT/ifu/bpd/bim.sv" \
  "$ROOT/ifu/bpd/btb.sv" \
  "$ROOT/ifu/bpd/composer.sv" \
  "$ROOT/ifu/bpd/bpd_update_router.sv" \
  "$DUT_SOURCE" \
  "$TEST_DIR/bpd_banked_test_top.sv"

"$MDIR/Vbpd_banked_test_top"
