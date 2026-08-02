#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/core_fetch_metadata"
MDIR="$TEST_DIR/obj_dir"
REFERENCE=0

case "${1:-}" in
  "")
    ;;
  --reference)
    REFERENCE=1
    MDIR="$TEST_DIR/obj_dir_reference"
    ;;
  *)
    echo "usage: $0 [--reference]" >&2
    exit 2
    ;;
esac

sources=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$ROOT/ifu/fetcher_buffer.sv"
)

defines=()
if ((REFERENCE)); then
  defines+=("-DCORE_FETCH_METADATA_REFERENCE")
else
  sources+=(
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
  )
fi

verilator --cc --build -j 1 --output-split 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH \
  -Wno-UNUSEDSIGNAL \
  "${defines[@]}" \
  --Mdir "$MDIR" \
  --top-module core_fetch_metadata_test_top \
  --exe "$TEST_DIR/test_core_fetch_metadata.cpp" \
  -CFLAGS "-O0" \
  "${sources[@]}" \
  "$TEST_DIR/core_fetch_metadata_test_top.sv"

"$MDIR/Vcore_fetch_metadata_test_top"
