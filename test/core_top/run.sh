#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/core_top"
MODE=${CORE_TOP_MODE:-reference}

rtl=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
)
defines=()

case "$MODE" in
  reference)
    rtl+=(
      "$ROOT/ifu/ifu.sv"
      "$ROOT/ifu/fetcher_buffer.sv"
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
      "$TEST_DIR/core_top_reference.sv"
    )
    ;;
  candidate)
    if [[ -z "${CPU_CORE_SOURCE:-}" ]]; then
      printf 'candidate mode requires CPU_CORE_SOURCE=/path/to/cpu_core.sv\n' >&2
      exit 2
    fi
    if [[ ! -f "$CPU_CORE_SOURCE" ]]; then
      printf 'candidate source not found: %s\n' "$CPU_CORE_SOURCE" >&2
      exit 2
    fi
    defines+=(-DCORE_TOP_CANDIDATE)
    rtl+=("$CPU_CORE_SOURCE")
    ;;
  *)
    printf 'unknown CORE_TOP_MODE: %s\n' "$MODE" >&2
    exit 2
    ;;
esac

verilator --cc --build -j 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir_$MODE" \
  --top-module core_top_contract_test_top \
  --exe "$TEST_DIR/test_core_top.cpp" \
  -CFLAGS "-std=c++17 -O0" \
  "${defines[@]}" \
  "${rtl[@]}" \
  "$TEST_DIR/core_top_contract_test_top.sv"

"$TEST_DIR/obj_dir_$MODE/Vcore_top_contract_test_top"
