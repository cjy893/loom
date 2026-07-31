#!/usr/bin/env bash
set -euo pipefail

cd "$(dirname "$0")"

VERILATOR_KIT_ROOT="${VERILATOR_KIT_ROOT:-/usr/local/share/verilator}"

run_config() {
    local entries="$1"
    local use_reference="$2"
    local implementation="$3"
    local obj_dir="obj_dir_${entries}"
    if [[ "${implementation}" == "reference" ]]; then
        obj_dir="obj_dir_reference"
    fi

    verilator \
        --cc --exe \
        --top-module tlb_ctrl_test_top \
        -GNUM_ENTRIES="${entries}" \
        -GUSE_REFERENCE="${use_reference}" \
        --Mdir "${obj_dir}" \
        -Wall -Wno-fatal \
        -Wno-DECLFILENAME -Wno-IMPORTSTAR -Wno-UNUSEDPARAM \
        ../../common/params_pkg.sv \
        ../../common/consts_pkg.sv \
        ../../mmu/tlb_ctrl.sv \
        tlb_ctrl_reference.sv \
        tlb_ctrl_test_top.sv \
        test_tlb_ctrl.cpp

    make -C "${obj_dir}" \
        -f Vtlb_ctrl_test_top.mk \
        VERILATOR_ROOT="${VERILATOR_KIT_ROOT}"

    "./${obj_dir}/Vtlb_ctrl_test_top"
}

run_config 8 1 reference
run_config 5 1 reference
run_config 8 0 production
run_config 5 0 production
