#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/ftq"
MDIR="$TEST_DIR/obj_dir_harness"

verilator --cc --build -j 1 -Wno-fatal \
  --output-split 100 --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL \
  -DFTQ_TEST_CONTRACT_STUB \
  -CFLAGS "-DFTQ_TEST_NUM_ENTRIES=16" \
  --Mdir "$MDIR" \
  --top-module ftq_test_top \
  --exe "$TEST_DIR/test_ftq.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$TEST_DIR/ftq_test_top.sv"

# The stub intentionally has no storage, so runtime failure is expected.
set +e
"$MDIR/Vftq_test_top"
status=$?
set -e

if ((status == 0)); then
  echo "FAIL: FTQ contract test unexpectedly passed against the empty stub"
  exit 1
fi

echo "PASS: FTQ test harness compiles and rejects the empty contract stub"
