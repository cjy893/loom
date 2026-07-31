#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")"

VERILATOR_KIT_ROOT="${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}"

verilator \
    --cc --exe \
    --top-module mmu_test_top \
    --Mdir obj_dir \
    -Wall -Wno-fatal \
    -Wno-DECLFILENAME -Wno-IMPORTSTAR -Wno-UNUSEDPARAM \
    ../../common/consts_pkg.sv \
    ../../mmu/addr_trans.sv \
    mmu_test_top.sv \
    test_mmu.cpp

make -C obj_dir \
    -f Vmmu_test_top.mk \
    VERILATOR_ROOT="${VERILATOR_KIT_ROOT}"

./obj_dir/Vmmu_test_top
