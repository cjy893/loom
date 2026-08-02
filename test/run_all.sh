#!/usr/bin/env bash
set -euo pipefail

TEST_ROOT=$(cd "$(dirname "$0")" && pwd)

suites=(
  rename
  issue
  rob
  csr
  tlb
  tlb_ctrl
  mmu
  mmu_integration
  alu
  decode
  dispatch
  br_mask
  regfile
  mem
  div
  unq
  lsu
  lsu_dmmu
  bpd_regression
  fetch_buffer
  ifu
  ifu_fetch_buffer
  core_fetch_buffer
  core_fetch_metadata
  core_ifu
  core_lsu
  core_lsu_exception
  core_tlb
  core_program
  core_exception
  core_interrupt
  core_interrupt_lsu
  core_top
  core_top_axi
  core_top_recovery
  branch_recovery
  integration
)

failed=()
for suite in "${suites[@]}"; do
  printf '\n=== %s ===\n' "$suite"
  if ! "$TEST_ROOT/$suite/run.sh"; then
    failed+=("$suite")
  fi
done

if ((${#failed[@]} != 0)); then
  printf '\nFailed suites: %s\n' "${failed[*]}"
  exit 1
fi

printf '\nAll module tests passed.\n'
