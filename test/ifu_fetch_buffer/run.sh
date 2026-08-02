#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/ifu_fetch_buffer"

verilator --cc --build -j 1 --output-split 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module ifu_fetch_buffer_test_top \
  --exe "$TEST_DIR/test_ifu_fetch_buffer.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/ifu/bpd/ubtb.sv" \
  "$ROOT/ifu/bpd/bim.sv" \
  "$ROOT/ifu/bpd/btb.sv" \
  "$ROOT/ifu/bpd/composer.sv" \
  "$ROOT/ifu/bpd/bpd_update_router.sv" \
  "$ROOT/ifu/bpd/f3_predecode.sv" \
  "$ROOT/ifu/bpd/ghist.sv" \
  "$ROOT/ifu/bpd/ras.sv" \
  "$ROOT/ifu/fetch_target_queue.sv" \
  "$ROOT/ifu/ifu.sv" \
  "$ROOT/ifu/fetcher_buffer.sv" \
  "$TEST_DIR/ifu_fetch_buffer_test_top.sv"

"$TEST_DIR/obj_dir/Vifu_fetch_buffer_test_top"
