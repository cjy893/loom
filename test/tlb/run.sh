#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")"

VERILATOR_KIT_ROOT="${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}"

run_config() {
    local entries="$1"
    local obj_dir="obj_dir_${entries}"

    verilator \
        --cc --exe \
        --top-module tlb_test_top \
        -GNUM_ENTRIES="${entries}" \
        --Mdir "${obj_dir}" \
        -Wall -Wno-fatal \
        ../../mmu/tlb.sv \
        tlb_test_top.sv \
        test_tlb.cpp

    make -C "${obj_dir}" \
        -f Vtlb_test_top.mk \
        VERILATOR_ROOT="${VERILATOR_KIT_ROOT}"

    "./${obj_dir}/Vtlb_test_top"
}

run_config 8
run_config 5
