#!/usr/bin/env bash
set -uo pipefail

TEST_ROOT=$(cd "$(dirname "$0")/.." && pwd)

tests=(
  "ubtb:$TEST_ROOT/ubtb/run.sh"
  "bim:$TEST_ROOT/bim/run.sh"
  "btb:$TEST_ROOT/btb/run.sh"
  "ras:$TEST_ROOT/ras/run.sh"
  "ghist:$TEST_ROOT/ghist/run.sh"
  "composer:$TEST_ROOT/bpd_top/run.sh"
  "update_router:$TEST_ROOT/bpd_update_router/run.sh"
  "banked_contract:$TEST_ROOT/bpd_banked/run.sh"
  "f3_predecode:$TEST_ROOT/f3_predecode/run.sh"
  "fetch_metadata:$TEST_ROOT/fetch_metadata/run.sh"
  "ftq:$TEST_ROOT/ftq/run.sh"
  "ubtb_bim:$TEST_ROOT/bpd_integration/run.sh"
  "ubtb_bim_btb:$TEST_ROOT/bpd_integration/run_ubtb_bim_btb.sh"
  "full_predictor:$TEST_ROOT/bpd_integration/run_bpd_full.sh"
)

failed=()
for test_spec in "${tests[@]}"; do
  name=${test_spec%%:*}
  script=${test_spec#*:}

  printf '\n--- BPD: %s ---\n' "$name"
  if ! "$script"; then
    failed+=("$name")
  fi
done

if ((${#failed[@]} != 0)); then
  printf '\nFailed BPD tests: %s\n' "${failed[*]}"
  exit 1
fi

printf '\nAll branch-prediction tests passed.\n'
