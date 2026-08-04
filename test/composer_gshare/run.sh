#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/composer_gshare"
MODE=${1:-}

case "$MODE" in
  "")
    COMPOSER_SOURCE="$ROOT/ifu/bpd/composer.sv"
    if ! grep -q 'f0_ghist' "$COMPOSER_SOURCE" ||
       ! grep -q 'GSHARE_SETS' "$COMPOSER_SOURCE"; then
      echo "FAIL: production Composer has not implemented the GShare contract." >&2
      echo "Use '$0 --reference' to run the executable integration contract." >&2
      exit 2
    fi
    ;;
  --reference)
    COMPOSER_SOURCE="$TEST_DIR/reference/composer.sv"
    ;;
  *)
    echo "Usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

MDIR="$TEST_DIR/obj_dir"
DUT_SOURCES=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$ROOT/ifu/bpd/ubtb.sv"
  "$ROOT/ifu/bpd/bpd_sdp_bram.sv"
  "$ROOT/ifu/bpd/bim.sv"
  "$ROOT/ifu/bpd/gshare.sv"
  "$ROOT/ifu/bpd/btb.sv"
  "$COMPOSER_SOURCE"
)

verilator --cc --build -j 1 -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module composer_gshare_test_top \
  --exe "$TEST_DIR/test_composer_gshare.cpp" \
  "${DUT_SOURCES[@]}" \
  "$TEST_DIR/composer_gshare_test_top.sv"

"$MDIR/Vcomposer_gshare_test_top"
