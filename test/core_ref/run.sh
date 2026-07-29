#!/usr/bin/env bash
# Build and run the LA32 reference-interpreter self check.
# No Verilator required: plain g++ -std=c++17.
set -euo pipefail

HERE="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
MYCPU="$(cd "$HERE/../.." && pwd)"

ELF="${1:-${ELF_PATH:-/mnt/e/nscscc/chiplab/software/examples/nscscc_func/obj/main.elf}}"
DISASM="${DISASM_PATH:-/mnt/e/nscscc/chiplab/software/examples/nscscc_func/obj/test.s}"

BIN="$HERE/core_ref"

g++ -std=c++17 -O2 -Wall -Wextra \
    -I"$MYCPU/test/common" -I"$MYCPU/test/core_elf" \
    "$HERE/test_core_ref.cpp" \
    "$MYCPU/test/common/la32_ref.cpp" \
    "$MYCPU/test/core_elf/elf_image.cpp" \
    -o "$BIN"

exec "$BIN" --elf "$ELF" --disasm "$DISASM" "${@:2}"
