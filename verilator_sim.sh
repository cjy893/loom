#!/bin/bash
# Verilator simulation script for LOOM
set -euo pipefail

ROOT=/mnt/e/nscscc/chiplab/IP/myCPU
cd $ROOT

SRCS="common/params_pkg.sv common/consts_pkg.sv common/types_pkg.sv \
      exu/decode.sv exu/br_mask.sv \
      exu/rename/rename_maptable.sv exu/rename/rename_freelist.sv \
      exu/rename/rename_busytable.sv exu/rename/rename_stage.sv \
      exu/dispatch.sv \
      exu/issue/issue_slot.sv exu/issue/issue_unit_collapsing.sv \
      exu/regfile.sv exu/exe/alu.sv exu/exe/mem.sv \
      exu/exe/div/srt4_qselect.sv exu/exe/div/srt4_preprocess.sv \
      exu/exe/div/srt4_otfc.sv exu/exe/div/srt4_core.sv \
      exu/exe/div/divider.sv exu/exe/unq.sv \
      exu/rob.sv lsu/load_queue.sv lsu/store_queue.sv lsu/lsu.sv \
      exu/loom_core.sv"

echo "=== Verilating ==="
verilator --cc --trace --build -j \
    -Wno-fatal \
    -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-WIDTH -Wno-UNUSEDSIGNAL \
    --top-module loom_core \
    --exe tb_verilator.cpp \
    $SRCS

echo ""
echo "=== Running ==="
./obj_dir/Vloom_core
