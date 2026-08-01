#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/core_elf"
DEFAULT_ELF=/mnt/e/nscscc/chiplab/software/examples/nscscc_func/obj/main.elf
DEFAULT_DISASM=/mnt/e/nscscc/chiplab/software/examples/nscscc_func/obj/test.s
ELF_PATH=${ELF_PATH:-$DEFAULT_ELF}
DISASM_PATH=${DISASM_PATH:-$DEFAULT_DISASM}

if [[ ! -f "$ELF_PATH" ]]; then
  printf 'ELF image not found: %s\n' "$ELF_PATH" >&2
  printf 'Set ELF_PATH or pass --elf FILE to this script.\n' >&2
  exit 2
fi

verilator --cc --build -j 1 -Wno-fatal \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module core_elf_test_top \
  --exe "$TEST_DIR/test_core_elf.cpp" "$TEST_DIR/elf_image.cpp" \
  "$ROOT/test/common/la32_ref.cpp" \
  -CFLAGS "-std=c++17 -O0 -I$TEST_DIR -I$ROOT/test/common" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/ifu/ifu.sv" \
  "$ROOT/ifu/fetcher_buffer.sv" \
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
  "$ROOT/mmu/addr_trans.sv" \
  "$ROOT/mmu/dmmu.sv" \
  "$ROOT/mmu/immu.sv" \
  "$ROOT/mmu/tlb.sv" \
  "$ROOT/mmu/tlb_ctrl.sv" \
  "$ROOT/cache/cacop_ctrl.sv" \
  "$ROOT/exu/loom_core.sv" \
  "$TEST_DIR/core_elf_test_top.sv"

args=(--elf "$ELF_PATH")
if [[ -f "$DISASM_PATH" ]]; then
  args+=(--disasm "$DISASM_PATH")
fi

"$TEST_DIR/obj_dir/Vcore_elf_test_top" "${args[@]}" "$@"
