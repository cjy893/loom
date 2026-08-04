#!/usr/bin/env bash
set -euo pipefail

ROOT=$(cd "$(dirname "$0")/../.." && pwd)
TEST_DIR="$ROOT/test/rename"
PARAMS_SOURCE=${PARAMS_SOURCE:-"$ROOT/common/params_pkg.sv"}
TAG_COUNTS=${RENAME_TAG_COUNTS:-"4 6 8"}
OBJ_ROOT=${RENAME_OBJ_ROOT:-"$TEST_DIR/obj_dir_param"}

if [[ ! -f "$PARAMS_SOURCE" ]]; then
  printf 'Parameter package not found: %s\n' "$PARAMS_SOURCE" >&2
  exit 2
fi

if [[ $(grep -Ec 'localparam int MAX_BR_COUNT = [0-9]+;' "$PARAMS_SOURCE") -ne 1 ]]; then
  printf 'Expected exactly one numeric MAX_BR_COUNT in %s\n' "$PARAMS_SOURCE" >&2
  exit 2
fi

mkdir -p "$OBJ_ROOT"

for tag_count in $TAG_COUNTS; do
  if [[ ! "$tag_count" =~ ^[0-9]+$ ]] ||
     (( tag_count < 2 || tag_count > 31 )); then
    printf 'Invalid branch tag count: %s\n' "$tag_count" >&2
    exit 2
  fi

  mdir="$OBJ_ROOT/$tag_count"
  params_rtl="$OBJ_ROOT/params_pkg_$tag_count.sv"
  sed -E \
    "s/(localparam int MAX_BR_COUNT = )[0-9]+;/\\1$tag_count;/" \
    "$PARAMS_SOURCE" > "$params_rtl"

  printf '== rename: MAX_BR_COUNT=%s ==\n' "$tag_count"
  verilator --cc --build -j 1 -Wno-fatal \
    --output-split 100 --output-split-cfuncs 100 \
    -Wno-DECLFILENAME -Wno-WIDTH -Wno-UNUSEDSIGNAL -Wno-UNDRIVEN \
    --Mdir "$mdir" \
    --top-module rename_test_top \
    --exe "$TEST_DIR/test_rename.cpp" \
    -CFLAGS "-DTEST_MAX_BRANCH_TAGS=$tag_count" \
    "$params_rtl" \
    "$ROOT/common/consts_pkg.sv" \
    "$ROOT/common/types_pkg.sv" \
    "$ROOT/exu/rename/rename_maptable.sv" \
    "$ROOT/exu/rename/rename_freelist.sv" \
    "$ROOT/exu/rename/rename_busytable.sv" \
    "$ROOT/exu/rename/rename_stage.sv" \
    "$TEST_DIR/rename_test_top.sv"

  "$mdir/Vrename_test_top"
done
