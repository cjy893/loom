#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/gshare"
MODE=${1:-}

case "$MODE" in
  "")
    GSHARE_SOURCE="$ROOT/ifu/bpd/gshare.sv"
    if [[ ! -f "$GSHARE_SOURCE" ]]; then
      echo "FAIL: production GShare RTL is not implemented: $GSHARE_SOURCE" >&2
      echo "Use '$0 --reference' to run the executable interface contract." >&2
      exit 2
    fi
    if ! grep -q 'input' "$GSHARE_SOURCE"; then
      echo "FAIL: production GShare RTL is still an empty skeleton: $GSHARE_SOURCE" >&2
      echo "Use '$0 --reference' to run the executable interface contract." >&2
      exit 2
    fi
    ;;
  --reference)
    GSHARE_SOURCE="$TEST_DIR/reference/gshare.sv"
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
  "$ROOT/ifu/bpd/bpd_sdp_bram.sv"
  "$GSHARE_SOURCE"
)

verilator --cc --build -j 1 -Wno-fatal --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module gshare_test_top \
  --exe "$TEST_DIR/test_gshare.cpp" \
  "${DUT_SOURCES[@]}" \
  "$TEST_DIR/gshare_test_top.sv"

"$MDIR/Vgshare_test_top"
