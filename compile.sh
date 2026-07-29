#!/bin/bash
# iverilog compile script for LOOM processor
# Usage: bash compile.sh [--run]

set -e

ROOT=/mnt/e/nscscc/chiplab/IP/myCPU
OUT=simv

# 收集所有 SV 源文件
COMMON="$ROOT/common/params_pkg.sv $ROOT/common/consts_pkg.sv $ROOT/common/types_pkg.sv"

EXU="$ROOT/exu/decode.sv \
     $ROOT/exu/br_mask.sv \
     $ROOT/exu/rename/rename_maptable.sv \
     $ROOT/exu/rename/rename_freelist.sv \
     $ROOT/exu/rename/rename_busytable.sv \
     $ROOT/exu/rename/rename_stage.sv \
     $ROOT/exu/dispatch.sv \
     $ROOT/exu/issue/issue_slot.sv \
     $ROOT/exu/issue/issue_unit_collapsing.sv \
     $ROOT/exu/regfile.sv \
     $ROOT/exu/exe/alu.sv \
     $ROOT/exu/exe/mem.sv \
     $ROOT/exu/exe/div/srt4_qselect.sv \
     $ROOT/exu/exe/div/srt4_preprocess.sv \
     $ROOT/exu/exe/div/srt4_otfc.sv \
     $ROOT/exu/exe/div/srt4_core.sv \
     $ROOT/exu/exe/div/divider.sv \
     $ROOT/exu/exe/unq.sv \
     $ROOT/exu/rob.sv \
     $ROOT/lsu/load_queue.sv \
     $ROOT/lsu/store_queue.sv \
     $ROOT/lsu/lsu.sv"

TOP="$ROOT/exu/loom_core.sv"
TB="$ROOT/tb.sv"

echo "=== Compiling ==="
echo "Common files:"
for f in $COMMON; do echo "  $f"; done
echo "Exu files:"
for f in $EXU; do echo "  $f"; done
echo "Top: $TOP"
echo "Testbench: $TB"
echo ""

iverilog -g2012 -Wall -o $OUT \
    $COMMON \
    $EXU \
    $TOP \
    $TB

echo "=== Compile OK: $OUT ==="

if [ "$1" = "--run" ]; then
    echo "=== Running ==="
    vvp $OUT
fi
