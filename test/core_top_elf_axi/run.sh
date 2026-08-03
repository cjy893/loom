#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/core_top_elf_axi"
ELF_DIR="$ROOT/test/core_elf"
DEFAULT_ELF=/mnt/e/nscscc/chiplab/software/examples/nscscc_func/obj/main.elf
DEFAULT_DISASM=/mnt/e/nscscc/chiplab/software/examples/nscscc_func/obj/test.s
ELF_PATH=${ELF_PATH:-$DEFAULT_ELF}
DISASM_PATH=${DISASM_PATH:-$DEFAULT_DISASM}
SINGLE_DEBUG_COMMIT=${SINGLE_DEBUG_COMMIT:-1}
VERILATOR=${VERILATOR:-verilator}
VERILATOR_KIT_ROOT=${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}
MDIR=${CORE_TOP_ELF_AXI_OBJ_DIR:-"$TEST_DIR/obj_dir"}
SKIP_BUILD=${CORE_TOP_ELF_AXI_SKIP_BUILD:-0}

if [[ "$SINGLE_DEBUG_COMMIT" != 0 &&
      "$SINGLE_DEBUG_COMMIT" != 1 ]]; then
  printf 'SINGLE_DEBUG_COMMIT must be 0 or 1\n' >&2
  exit 2
fi

if [[ "$SKIP_BUILD" != 0 && "$SKIP_BUILD" != 1 ]]; then
  printf 'CORE_TOP_ELF_AXI_SKIP_BUILD must be 0 or 1\n' >&2
  exit 2
fi

if [[ ! -f "$ELF_PATH" ]]; then
  printf 'ELF image not found: %s\n' "$ELF_PATH" >&2
  printf 'Set ELF_PATH or pass --elf FILE to this script.\n' >&2
  exit 2
fi

rtl=(
  "$ROOT/common/params_pkg.sv"
  "$ROOT/common/consts_pkg.sv"
  "$ROOT/common/types_pkg.sv"
  "$ROOT/ifu/bpd/ubtb.sv"
  "$ROOT/ifu/bpd/bim.sv"
  "$ROOT/ifu/bpd/btb.sv"
  "$ROOT/ifu/bpd/composer.sv"
  "$ROOT/ifu/bpd/bpd_update_router.sv"
  "$ROOT/ifu/bpd/f3_predecode.sv"
  "$ROOT/ifu/bpd/ghist.sv"
  "$ROOT/ifu/bpd/ras.sv"
  "$ROOT/ifu/fetch_target_queue.sv"
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
  "$ROOT/cache/icache.sv"
  "$ROOT/cache/dcache.sv"
  "$ROOT/cache/cacop_ctrl.sv"
  "$ROOT/exu/loom_core.sv"
  "$ROOT/core_top.sv"
  "$TEST_DIR/core_top_elf_axi_test_top.sv"
)

if [[ "$SKIP_BUILD" == 0 ]]; then
  "$VERILATOR" --cc -Wno-fatal \
    -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
    --Mdir "$MDIR" \
    --top-module core_top_elf_axi_test_top \
    -GENABLE_SINGLE_DEBUG_COMMIT="$SINGLE_DEBUG_COMMIT" \
    --exe "$TEST_DIR/test_core_top_elf_axi.cpp" \
    "$ELF_DIR/elf_image.cpp" \
    -CFLAGS "-std=c++17 -O0 -I$ELF_DIR" \
    "${rtl[@]}"

  make -C "$MDIR" -f Vcore_top_elf_axi_test_top.mk -j 1 \
    VERILATOR_ROOT="$VERILATOR_KIT_ROOT"
elif [[ ! -x "$MDIR/Vcore_top_elf_axi_test_top" ]]; then
  printf 'Built simulator not found: %s\n' \
    "$MDIR/Vcore_top_elf_axi_test_top" >&2
  exit 2
fi

args=(--elf "$ELF_PATH")
if [[ -f "$DISASM_PATH" ]]; then
  args+=(--disasm "$DISASM_PATH")
fi

"$MDIR/Vcore_top_elf_axi_test_top" \
  "${args[@]}" "$@"
