#!/usr/bin/env bash
set -euo pipefail

TEST_ROOT=$(cd "$(dirname "$0")" && pwd)

suites=(
  rename
  issue
  rob
  alu
  decode
  dispatch
  br_mask
  regfile
  mem
  unq
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
