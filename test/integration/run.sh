#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/integration"

verilator --cc --trace --build -j 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module loom_core \
  --exe "$ROOT/tb_verilator.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/exu/decode.sv" \
  "$ROOT/exu/br_mask.sv" \
  "$ROOT/exu/rename/rename_maptable.sv" \
  "$ROOT/exu/rename/rename_freelist.sv" \
  "$ROOT/exu/rename/rename_busytable.sv" \
  "$ROOT/exu/rename/rename_stage.sv" \
  "$ROOT/exu/dispatch.sv" \
  "$ROOT/exu/issue/issue_slot.sv" \
  "$ROOT/exu/issue/issue_unit_collapsing.sv" \
  "$ROOT/exu/regfile.sv" \
  "$ROOT/exu/exe/alu.sv" \
  "$ROOT/exu/exe/mem.sv" \
  "$ROOT/exu/exe/div/srt4_qselect.sv" \
  "$ROOT/exu/exe/div/srt4_preprocess.sv" \
  "$ROOT/exu/exe/div/srt4_otfc.sv" \
  "$ROOT/exu/exe/div/srt4_core.sv" \
  "$ROOT/exu/exe/div/divider.sv" \
  "$ROOT/exu/exe/unq.sv" \
  "$ROOT/exu/rob.sv" \
  "$ROOT/csr/csr_file.sv" \
  "$ROOT/lsu/load_queue.sv" \
  "$ROOT/lsu/store_queue.sv" \
  "$ROOT/lsu/lsu.sv" \
  "$ROOT/exu/loom_core.sv"

(
  cd "$TEST_DIR"
  ./obj_dir/Vloom_core
)
