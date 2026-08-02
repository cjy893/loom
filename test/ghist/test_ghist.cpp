#include "Vghist_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <cstdint>
#include <cstdio>

namespace {

constexpr uint8_t kFetchWidth = 4;
constexpr uint8_t kBankWidth = 2;
constexpr uint8_t kRasEntries = 32;
constexpr uint32_t kBankBytes = 8;
constexpr uint32_t kBlockBytes = 64;

struct State {
    uint64_t history = 0;
    bool current_saw_nt = false;
    bool new_saw_nt = false;
    bool new_saw_taken = false;
    uint8_t ras_idx = 0;
};

struct Event {
    bool valid = false;
    uint32_t pc = 0;
    uint8_t br_mask = 0;
    bool cfi_valid = false;
    uint8_t cfi_idx = 0;
    bool cfi_taken = false;
    bool cfi_is_br = false;
    bool cfi_is_call = false;
    bool cfi_is_ret = false;
};

uint64_t base_history(const State& state) {
    if (state.new_saw_taken) {
        return (state.history << 1) | 1ULL;
    }
    if (state.new_saw_nt) {
        return state.history << 1;
    }
    return state.history;
}

State update_model(const State& state, const Event& event) {
    if (!event.valid) {
        return state;
    }

    uint8_t not_taken_mask = 0;
    for (uint8_t lane = 0; lane < kFetchWidth; ++lane) {
        const bool before_or_at_cfi = !event.cfi_valid || lane <= event.cfi_idx;
        const bool selected_taken_branch =
            event.cfi_valid && event.cfi_is_br && event.cfi_taken &&
            lane == event.cfi_idx;
        if (((event.br_mask >> lane) & 1U) && before_or_at_cfi &&
            !selected_taken_branch) {
            not_taken_mask |= uint8_t(1U << lane);
        }
    }

    const uint64_t base = base_history(state);
    const bool cfi_in_first_bank =
        event.cfi_valid && event.cfi_taken && event.cfi_idx < kBankWidth;
    const uint32_t chunk = (event.pc / kBankBytes) % (kBlockBytes / kBankBytes);
    const bool last_bank_in_block = chunk == (kBlockBytes / kBankBytes - 1);
    const bool first_bank_saw_nt =
        (not_taken_mask & ((1U << kBankWidth) - 1)) != 0 || state.current_saw_nt;

    State next = state;
    next.current_saw_nt = false;
    next.new_saw_nt = false;
    next.new_saw_taken = false;

    if (cfi_in_first_bank || last_bank_in_block) {
        next.history = base;
        next.new_saw_nt = first_bank_saw_nt;
        next.new_saw_taken = event.cfi_is_br && cfi_in_first_bank;
    } else {
        next.history = first_bank_saw_nt ? (base << 1) : base;
        next.new_saw_nt = (not_taken_mask >> kBankWidth) != 0;
        next.new_saw_taken = event.cfi_valid && event.cfi_taken &&
                             event.cfi_is_br && !cfi_in_first_bank;
    }

    if (event.cfi_valid && event.cfi_is_call) {
        next.ras_idx = state.ras_idx == kRasEntries - 1 ? 0 : state.ras_idx + 1;
    } else if (event.cfi_valid && event.cfi_is_ret) {
        next.ras_idx = state.ras_idx == 0 ? kRasEntries - 1 : state.ras_idx - 1;
    }
    return next;
}

void drive_event(Vghist_test_top* dut, const Event& event) {
    dut->update_valid = event.valid;
    dut->update_pc = event.pc;
    dut->update_br_mask = event.br_mask;
    dut->update_cfi_valid = event.cfi_valid;
    dut->update_cfi_idx = event.cfi_idx;
    dut->update_cfi_taken = event.cfi_taken;
    dut->update_cfi_is_br = event.cfi_is_br;
    dut->update_cfi_is_call = event.cfi_is_call;
    dut->update_cfi_is_ret = event.cfi_is_ret;
}

void drive_restore(Vghist_test_top* dut, const State& state) {
    dut->restore_old_history = state.history;
    dut->restore_current_saw_nt = state.current_saw_nt;
    dut->restore_new_saw_nt = state.new_saw_nt;
    dut->restore_new_saw_taken = state.new_saw_taken;
    dut->restore_ras_idx = state.ras_idx;
}

void clear_inputs(Vghist_test_top* dut) {
    drive_event(dut, Event{});
    dut->restore_valid = 0;
    drive_restore(dut, State{});
}

void restore_state(Vghist_test_top* dut, const State& state) {
    drive_event(dut, Event{});
    drive_restore(dut, state);
    dut->restore_valid = 1;
    eval_cycle(dut);
    dut->restore_valid = 0;
}

State read_state(Vghist_test_top* dut) {
    return State{
        dut->current_old_history,
        bool(dut->current_saw_nt),
        bool(dut->current_new_saw_nt),
        bool(dut->current_new_saw_taken),
        uint8_t(dut->current_ras_idx),
    };
}

void expect_state(const char* prefix, Vghist_test_top* dut, const State& expected) {
    char name[128];
    const State actual = read_state(dut);

    std::snprintf(name, sizeof(name), "%s history", prefix);
    expect_eq(name, actual.history, expected.history);
    std::snprintf(name, sizeof(name), "%s current_saw_nt", prefix);
    expect_eq(name, actual.current_saw_nt, expected.current_saw_nt);
    std::snprintf(name, sizeof(name), "%s new_saw_nt", prefix);
    expect_eq(name, actual.new_saw_nt, expected.new_saw_nt);
    std::snprintf(name, sizeof(name), "%s new_saw_taken", prefix);
    expect_eq(name, actual.new_saw_taken, expected.new_saw_taken);
    std::snprintf(name, sizeof(name), "%s RAS index", prefix);
    expect_eq(name, actual.ras_idx, expected.ras_idx);
}

State apply_event(Vghist_test_top* dut, const State& state, const Event& event,
                  const char* label) {
    drive_event(dut, event);
    eval_cycle(dut);
    drive_event(dut, Event{});
    const State expected = update_model(state, event);
    expect_state(label, dut, expected);
    return expected;
}

void test_reset_and_hold(Vghist_test_top* dut) {
    expect_state("reset", dut, State{});

    const State restored{0x123456789abcdef0ULL, true, true, false, 9};
    restore_state(dut, restored);
    Event ignored{true, 0, 0xf, true, 0, true, true, true, false};
    ignored.valid = false;
    apply_event(dut, restored, ignored, "invalid update holds");
}

void test_restore_and_priority(Vghist_test_top* dut) {
    const State restored{0xdeadbeefcafe1234ULL, true, true, true, 7};
    restore_state(dut, restored);
    expect_state("restore preserves every field", dut, restored);

    const State priority{0x0f0e0d0c0b0a0908ULL, false, false, true, 13};
    drive_restore(dut, priority);
    dut->restore_valid = 1;
    drive_event(dut, Event{true, 0, 0xf, true, 0, true, true, true, false});
    eval_cycle(dut);
    dut->restore_valid = 0;
    drive_event(dut, Event{});
    expect_state("restore wins over update", dut, priority);
}

void test_bank_updates(Vghist_test_top* dut) {
    State state{3, false, false, false, 0};
    restore_state(dut, state);
    state = apply_event(dut, state, Event{true, 0x00, 0x3},
                        "multiple first-bank NT branches collapse");

    state = State{1, false, false, false, 0};
    restore_state(dut, state);
    state = apply_event(dut, state, Event{true, 0x00, 0x5},
                        "NT branches in both banks");
    state = apply_event(dut, state, Event{true, 0x10, 0x0},
                        "deferred second-bank NT consumed");

    state = State{0x15, false, false, false, 0};
    restore_state(dut, state);
    state = apply_event(
        dut, state, Event{true, 0x00, 0x5, true, 0, true, true},
        "first-bank taken branch suppresses second bank");
    state = apply_event(dut, state, Event{true, 0x10, 0x0},
                        "deferred first-bank taken consumed");

    state = State{2, false, false, false, 0};
    restore_state(dut, state);
    state = apply_event(
        dut, state, Event{true, 0x00, 0x5, true, 2, true, true},
        "first-bank NT plus second-bank taken");
    state = apply_event(dut, state, Event{true, 0x10, 0x0},
                        "deferred second-bank taken consumed");

    state = State{0x33, false, false, false, 0};
    restore_state(dut, state);
    state = apply_event(dut, state, Event{true, 0x38, 0x1},
                        "cache-line tail ignores missing second bank");

    state = State{0x7, false, false, false, 0};
    restore_state(dut, state);
    state = apply_event(dut, state, Event{true, 0x08, 0x5},
                        "physical bank-one start keeps logical lane order");

    state = State{0x21, false, false, false, 0};
    restore_state(dut, state);
    state = apply_event(
        dut, state, Event{true, 0x00, 0x5, true, 1, true, false},
        "first-bank taken jump stops later branch history");
}

void test_pending_and_current_flags(Vghist_test_top* dut) {
    State state{0x9, true, true, true, 4};
    restore_state(dut, state);
    state = apply_event(dut, state, Event{true, 0x00, 0x0},
                        "pending taken has priority and current NT applies");

    state = State{0x5, false, true, false, 4};
    restore_state(dut, state);
    apply_event(dut, state, Event{true, 0x00, 0x0},
                "pending NT is consumed by next packet");
}

void test_ras_wrap(Vghist_test_top* dut) {
    State state{0x55, false, false, false, kRasEntries - 1};
    restore_state(dut, state);
    state = apply_event(
        dut, state, Event{true, 0x00, 0x0, true, 0, true, false, true, false},
        "CALL wraps RAS");
    apply_event(
        dut, state, Event{true, 0x10, 0x0, true, 0, true, false, false, true},
        "RET wraps RAS");
}

uint32_t random_word(uint32_t& state) {
    state ^= state << 13;
    state ^= state >> 17;
    state ^= state << 5;
    return state;
}

void test_random_reference(Vghist_test_top* dut) {
    State state{};
    restore_state(dut, state);
    uint32_t rng = 0x4c4f4f4dU;

    for (int cycle = 0; cycle < 1000; ++cycle) {
        const uint32_t bits = random_word(rng);
        if ((bits & 0x3fU) == 0) {
            state = State{
                (uint64_t(random_word(rng)) << 32) | random_word(rng),
                bool(bits & (1U << 6)),
                bool(bits & (1U << 7)),
                bool(bits & (1U << 8)),
                uint8_t((bits >> 9) % kRasEntries),
            };
            restore_state(dut, state);
            expect_state("random restore", dut, state);
            continue;
        }

        Event event;
        event.valid = (bits & 1U) != 0;
        event.pc = ((bits >> 1) & 0xffU) << 3;
        event.br_mask = uint8_t((bits >> 9) & 0xfU);
        event.cfi_valid = (bits & (1U << 13)) != 0;
        event.cfi_idx = uint8_t((bits >> 14) & 0x3U);
        event.cfi_taken = (bits & (1U << 16)) != 0;
        event.cfi_is_br = (bits & (1U << 17)) != 0;
        event.cfi_is_call = (bits & (1U << 18)) != 0;
        event.cfi_is_ret = !event.cfi_is_call && (bits & (1U << 19)) != 0;

        char label[64];
        std::snprintf(label, sizeof(label), "random cycle %d", cycle);
        state = apply_event(dut, state, event, label);
    }
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vghist_test_top;
    clear_inputs(dut);
    reset_dut(dut);

    test_reset_and_hold(dut);
    test_restore_and_priority(dut);
    test_bank_updates(dut);
    test_pending_and_current_flags(dut);
    test_ras_wrap(dut);
    test_random_reference(dut);

    pass("ghist fetch-wide two-bank");
    delete dut;
    return 0;
}
