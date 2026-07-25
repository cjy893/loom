#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/lsu"
LSU_RTL="$ROOT/lsu/lsu.sv"
rtl_args=()

if [[ -f "$LSU_RTL" ]] &&
   rg -q '^[[:space:]]*module[[:space:]]+lsu([[:space:]]|#|\()' "$LSU_RTL"; then
  rtl_args=(-DLSU_RTL_PRESENT "$ROOT/lsu/load_queue.sv" "$LSU_RTL")
fi

verilator --cc --build -j -Wno-fatal --output-split 100 \
  --output-split-cfuncs 100 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir" \
  --top-module lsu_test_top \
  --exe "$TEST_DIR/test_lsu.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
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
  "$ROOT/lsu/store_queue.sv" \
  "$TEST_DIR/store_queue_test_top.sv"

"$TEST_DIR/obj_dir_store/Vstore_queue_test_top"

verilator --cc --build -j -Wno-fatal --output-split 10000 \
  --output-split-cfuncs 10000 \
  -Wno-DECLFILENAME -Wno-UNDRIVEN -Wno-UNUSEDSIGNAL -Wno-WIDTH \
  --Mdir "$TEST_DIR/obj_dir_ordering" \
  --top-module lsu_ordering_test_top \
  --exe "$TEST_DIR/test_lsu_ordering.cpp" \
  "$ROOT/common/params_pkg.sv" \
  "$ROOT/common/consts_pkg.sv" \
  "$ROOT/common/types_pkg.sv" \
  "$ROOT/lsu/load_queue.sv" \
  "$ROOT/lsu/store_queue.sv" \
  "$TEST_DIR/lsu_ordering_test_top.sv"

ordering_failures=()
for group in unknown non_alias non_overlap forward data_wait; do
  if ! "$TEST_DIR/obj_dir_ordering/Vlsu_ordering_test_top" "$group"; then
    ordering_failures+=("$group")
  fi
done

if ((${#ordering_failures[@]} != 0)); then
  printf 'FAIL: lsu_ordering groups: %s\n' "${ordering_failures[*]}" >&2
  exit 1
fi

printf 'PASS: lsu_ordering\n'
