#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/lsu"
LSU_TEST_RTL="$ROOT/lsu/lsu_test.sv"
IDENTITY_XLATE="$TEST_DIR/lsq_identity_xlate.sv"
rtl_args=()

if [[ -f "$LSU_TEST_RTL" ]] &&
   rg -q '^[[:space:]]*module[[:space:]]+lsu_test([[:space:]]|#|\()' "$LSU_TEST_RTL"; then
  rtl_args=(-DLSU_TEST_RTL_PRESENT "$ROOT/lsu/load_queue.sv" "$LSU_TEST_RTL")
fi

verilator --cc --build -j -Wno-fatal --output-split 10000 \
  --output-split-cfuncs 10000 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module lsu_test_top \
  --exe "$TEST_DIR/test_lsu.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$IDENTITY_XLATE" \
  "${rtl_args[@]}" \
  "$TEST_DIR/lsu_test_top.sv"

"$TEST_DIR/obj_dir/Vlsu_test_top"

verilator --cc --build -j -Wno-fatal --output-split 10000 \
  --output-split-cfuncs 10000 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir_multi" \
  --top-module load_queue_multi_test_top \
  --exe "$TEST_DIR/test_load_queue_multi.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$IDENTITY_XLATE" \
  "$ROOT/lsu/load_queue.sv" \
  "$TEST_DIR/load_queue_multi_test_top.sv"

"$TEST_DIR/obj_dir_multi/Vload_queue_multi_test_top"

verilator --cc --build -j -Wno-fatal --output-split 10000 \
  --output-split-cfuncs 10000 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir_store" \
  --top-module store_queue_test_top \
  --exe "$TEST_DIR/test_store_queue.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$IDENTITY_XLATE" \
  "$ROOT/lsu/store_queue.sv" \
  "$TEST_DIR/store_queue_test_top.sv"

"$TEST_DIR/obj_dir_store/Vstore_queue_test_top"

verilator --cc --build -j -Wno-fatal --output-split 10000 \
  --output-split-cfuncs 10000 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir_allocation" \
  --top-module lsq_allocation_test_top \
  --exe "$TEST_DIR/test_lsq_allocation.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$IDENTITY_XLATE" \
  "$ROOT/lsu/load_queue.sv" \
  "$ROOT/lsu/store_queue.sv" \
  "$TEST_DIR/lsq_allocation_test_top.sv"

"$TEST_DIR/obj_dir_allocation/Vlsq_allocation_test_top"

verilator --cc --build -j -Wno-fatal --output-split 10000 \
  --output-split-cfuncs 10000 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir_formal" \
  --top-module lsu_formal_test_top \
  --exe "$TEST_DIR/test_lsu_formal.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$IDENTITY_XLATE" \
  "$ROOT/lsu/load_queue.sv" \
  "$ROOT/lsu/store_queue.sv" \
  "$ROOT/lsu/lsu.sv" \
  "$TEST_DIR/lsu_formal_test_top.sv"

"$TEST_DIR/obj_dir_formal/Vlsu_formal_test_top"

verilator --cc --build -j -Wno-fatal --output-split 10000 \
  --output-split-cfuncs 10000 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir_ordering" \
  --top-module lsu_ordering_test_top \
  --exe "$TEST_DIR/test_lsu_ordering.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$IDENTITY_XLATE" \
  "$ROOT/lsu/load_queue.sv" \
  "$ROOT/lsu/store_queue.sv" \
  "$TEST_DIR/lsu_ordering_test_top.sv"

ordering_failures=()
for group in unknown non_alias non_overlap forward data_wait \
             store_commit rob_wrap concurrent flush_late slot_fair; do
  if ! "$TEST_DIR/obj_dir_ordering/Vlsu_ordering_test_top" "$group"; then
    ordering_failures+=("$group")
  fi
done

if ((${#ordering_failures[@]} != 0)); then
  printf 'FAIL: lsu_ordering groups: %s\n' "${ordering_failures[*]}" >&2
  exit 1
fi

printf 'PASS: lsu_ordering\n'
