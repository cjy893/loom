#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/core_cacop"
VERILATOR=${VERILATOR:-verilator}
VERILATOR_KIT_ROOT=${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}
MDIR="$TEST_DIR/obj_dir"

rtl=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$ROOT/exu/decode.sv"
  "$ROOT/exu/br_mask.sv"
  "$ROOT/exu/rename/rename_maptable.sv"
  "$ROOT/exu/rename/rename_freelist.sv"
  "$ROOT/exu/rename/rename_busytable.sv"
  "$ROOT/exu/rename/rename_stage.sv"
  "$ROOT/exu/dispatch.sv"
  "$ROOT/exu/issue/issue_slot.sv"
  "$ROOT/exu/issue/issue_unit_collapsing.sv"
  "$ROOT/exu/regfile.sv"
  "$ROOT/exu/exe/alu.sv"
  "$ROOT/exu/exe/mem.sv"
  "$ROOT/exu/exe/div/srt4_qselect.sv"
  "$ROOT/exu/exe/div/srt4_preprocess.sv"
  "$ROOT/exu/exe/div/srt4_otfc.sv"
  "$ROOT/exu/exe/div/srt4_core.sv"
  "$ROOT/exu/exe/div/divider.sv"
  "$ROOT/exu/exe/unq.sv"
  "$ROOT/exu/rob.sv"
  "$ROOT/csr/csr_file.sv"
  "$ROOT/lsu/load_queue.sv"
  "$ROOT/lsu/store_queue.sv"
  "$ROOT/lsu/lsu.sv"
  "$ROOT/mmu/addr_trans.sv"
  "$ROOT/mmu/dmmu.sv"
  "$ROOT/mmu/immu.sv"
  "$ROOT/mmu/tlb.sv"
  "$ROOT/mmu/tlb_ctrl.sv"
  "$ROOT/cache/cacop_ctrl.sv"
  "$ROOT/exu/loom_core.sv"
  "$TEST_DIR/core_cacop_test_top.sv"
)

"$VERILATOR" --cc -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$MDIR" \
  --top-module core_cacop_test_top \
  --exe "$TEST_DIR/test_core_cacop.cpp" \
  -CFLAGS "-std=c++17 -O0" \
  "${rtl[@]}"

make -C "$MDIR" -f Vcore_cacop_test_top.mk -j 1 \
  VERILATOR_ROOT="$VERILATOR_KIT_ROOT"

"$MDIR/Vcore_cacop_test_top"
