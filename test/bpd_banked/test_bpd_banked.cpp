#include "Vbpd_banked_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr int kFetchWidth = 4;
constexpr int kBanks = 2;
constexpr int kPredictionBits = 36;
constexpr int kMetaBits = 120;
constexpr int kPackedMetaWords = 8;
constexpr int kBimResetCycles = 64;
constexpr int kBtbMetaBits = 4;

struct PredInfo {
    bool taken;
    bool is_br;
    bool is_b_bl;
    bool is_jirl;
    uint32_t target;
};

using MetaImage = std::array<uint32_t, kPackedMetaWords>;

struct Snapshot {
    std::array<PredInfo, kFetchWidth> f1{};
    std::array<PredInfo, kFetchWidth> f2{};
    std::array<PredInfo, kFetchWidth> f3{};
    MetaImage meta{};
};

template <std::size_t N>
bool read_bit(const VlWide<N>& value, int bit) {
    return (value[bit / 32] >> (bit % 32)) & 1U;
}

template <std::size_t N>
uint64_t read_bits(const VlWide<N>& value, int first, int width) {
    uint64_t result = 0;
    for (int bit = 0; bit < width; ++bit) {
        if (read_bit(value, first + bit))
            result |= uint64_t(1) << bit;
    }
    return result;
}

PredInfo read_pred(const VlWide<5>& packed, int lane) {
    const uint64_t raw =
        read_bits(packed, lane * kPredictionBits, kPredictionBits);
    return {
        bool((raw >> 35) & 1U),
        bool((raw >> 34) & 1U),
        bool((raw >> 33) & 1U),
        bool((raw >> 32) & 1U),
        uint32_t(raw)
    };
}

bool read_meta_bit(const MetaImage& meta, int bit) {
    return (meta[bit / 32] >> (bit % 32)) & 1U;
}

uint32_t read_meta_bits(const MetaImage& meta, int first, int width) {
    uint32_t result = 0;
    for (int bit = 0; bit < width; ++bit) {
        if (read_meta_bit(meta, first + bit))
            result |= uint32_t(1) << bit;
    }
    return result;
}

uint8_t read_bim_ctr(const Snapshot& snapshot, int physical_bank,
                     int local_lane) {
    const int first = physical_bank * kMetaBits +
                      kBtbMetaBits + local_lane * 2;
    return uint8_t(read_meta_bits(snapshot.meta, first, 2));
}

[[noreturn]] void fail_pred(const char* name, const PredInfo& actual,
                            bool taken, bool is_br, bool is_b_bl,
                            bool is_jirl, uint32_t target) {
    std::fprintf(
        stderr,
        "FAIL: %s: got{t=%u br=%u b_bl=%u jirl=%u target=0x%08x} "
        "expected{t=%u br=%u b_bl=%u jirl=%u target=0x%08x}\n",
        name, actual.taken, actual.is_br, actual.is_b_bl, actual.is_jirl,
        actual.target, taken, is_br, is_b_bl, is_jirl, target);
    std::exit(1);
}

void expect_pred(const char* name, const PredInfo& actual,
                 bool taken, bool is_br, bool is_b_bl, bool is_jirl,
                 uint32_t target) {
    if (actual.taken != taken || actual.is_br != is_br ||
        actual.is_b_bl != is_b_bl || actual.is_jirl != is_jirl ||
        actual.target != target) {
        fail_pred(name, actual, taken, is_br, is_b_bl, is_jirl, target);
    }
}

void expect_b_bl(const char* name, const PredInfo& actual,
                 uint32_t target) {
    expect_pred(name, actual, true, false, true, false, target);
}

void expect_branch(const char* name, const PredInfo& actual,
                   bool taken, uint32_t target) {
    expect_pred(name, actual, taken, true, false, false, target);
}

void expect_miss(const char* name, const PredInfo& actual) {
    expect_pred(name, actual, false, false, false, false, 0);
}

void clear_update(Vbpd_banked_test_top* dut) {
    dut->update_valid = 0;
    dut->update_is_mispredict_update = 0;
    dut->update_is_repair_update = 0;
    dut->update_btb_mispredicts = 0;
    dut->update_pc = 0;
    dut->update_br_mask = 0;
    dut->update_cfi_valid = 0;
    dut->update_cfi_idx = 0;
    dut->update_cfi_taken = 0;
    dut->update_cfi_mispredicted = 0;
    dut->update_cfi_is_br = 0;
    dut->update_cfi_is_b_bl = 0;
    dut->update_cfi_is_jirl = 0;
    dut->update_ghist_old_history = 0;
    dut->update_ghist_current_saw_nt = 0;
    dut->update_ghist_new_saw_nt = 0;
    dut->update_ghist_new_saw_taken = 0;
    dut->update_ghist_ras_idx = 0;
    dut->update_lhist = 0;
    dut->update_target = 0;
    for (int word = 0; word < kPackedMetaWords; ++word)
        dut->update_meta[word] = 0;
}

void clear_inputs(Vbpd_banked_test_top* dut) {
    dut->f0_valid = 0;
    dut->f0_pc = 0;
    clear_update(dut);
}

void idle_cycle(Vbpd_banked_test_top* dut) {
    dut->f0_valid = 0;
    eval_cycle(dut);
}

void reset_predictor(Vbpd_banked_test_top* dut) {
    clear_inputs(dut);
    reset_dut(dut);
    expect_eq("banked BPD ready low after reset", dut->ready, 0);

    for (int cycle = 0; cycle < kBimResetCycles - 1; ++cycle) {
        idle_cycle(dut);
        expect_eq("banked BPD ready low during BIM reset", dut->ready, 0);
    }

    idle_cycle(dut);
    expect_eq("banked BPD ready after both BIMs reset", dut->ready, 1);

    idle_cycle(dut);
    idle_cycle(dut);
    idle_cycle(dut);
}

Snapshot lookup(Vbpd_banked_test_top* dut, uint32_t pc) {
    Snapshot result{};

    dut->f0_valid = 1;
    dut->f0_pc = pc;
    eval_cycle(dut);
    expect_eq("lookup F1 valid", dut->f1_valid, 1);
    for (int lane = 0; lane < kFetchWidth; ++lane)
        result.f1[lane] = read_pred(dut->f1_preds, lane);

    dut->f0_valid = 0;
    eval_cycle(dut);
    expect_eq("lookup F2 valid", dut->f2_valid, 1);
    for (int lane = 0; lane < kFetchWidth; ++lane)
        result.f2[lane] = read_pred(dut->f2_preds, lane);

    eval_cycle(dut);
    expect_eq("lookup F3 valid", dut->f3_valid, 1);
    for (int lane = 0; lane < kFetchWidth; ++lane)
        result.f3[lane] = read_pred(dut->f3_preds, lane);
    for (int word = 0; word < kPackedMetaWords; ++word)
        result.meta[word] = dut->f3_meta[word];

    eval_cycle(dut);
    expect_eq("lookup pipeline drains after one request", dut->f3_valid, 0);
    return result;
}

void drive_update(Vbpd_banked_test_top* dut, uint32_t pc,
                  uint8_t br_mask, int cfi_idx, bool cfi_taken,
                  bool cfi_is_br, bool cfi_is_b_bl, bool cfi_is_jirl,
                  uint32_t target, const MetaImage& meta) {
    dut->update_valid = 1;
    dut->update_is_mispredict_update = 0;
    dut->update_is_repair_update = 0;
    dut->update_btb_mispredicts = 0;
    dut->update_pc = pc;
    dut->update_br_mask = br_mask;
    dut->update_cfi_valid = 1;
    dut->update_cfi_idx = cfi_idx;
    dut->update_cfi_taken = cfi_taken;
    dut->update_cfi_mispredicted = 0;
    dut->update_cfi_is_br = cfi_is_br;
    dut->update_cfi_is_b_bl = cfi_is_b_bl;
    dut->update_cfi_is_jirl = cfi_is_jirl;
    dut->update_target = target;
    for (int word = 0; word < kPackedMetaWords; ++word)
        dut->update_meta[word] = meta[word];

    eval_cycle(dut);
    dut->update_valid = 0;
    eval_cycle(dut);
}

void train_b_bl(Vbpd_banked_test_top* dut, uint32_t pc, int cfi_idx,
                uint32_t target, uint8_t extra_br_mask = 0) {
    const Snapshot prediction = lookup(dut, pc);
    drive_update(dut, pc, extra_br_mask, cfi_idx, true,
                 false, true, false, target, prediction.meta);
}

void train_branch(Vbpd_banked_test_top* dut, uint32_t pc, int cfi_idx,
                  bool taken, uint32_t target) {
    const Snapshot prediction = lookup(dut, pc);
    drive_update(dut, pc, uint8_t(1U << cfi_idx), cfi_idx, taken,
                 true, false, false, target, prediction.meta);
}

void expect_all_stages_b_bl(const char* prefix, const Snapshot& prediction,
                            const std::array<uint32_t, kFetchWidth>& targets) {
    char name[128];
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        std::snprintf(name, sizeof(name), "%s F1 lane%d", prefix, lane);
        expect_b_bl(name, prediction.f1[lane], targets[lane]);
        std::snprintf(name, sizeof(name), "%s F2 lane%d", prefix, lane);
        expect_b_bl(name, prediction.f2[lane], targets[lane]);
        std::snprintf(name, sizeof(name), "%s F3 lane%d", prefix, lane);
        expect_b_bl(name, prediction.f3[lane], targets[lane]);
    }
}

void test_all_lanes_from_bank0(Vbpd_banked_test_top* dut) {
    constexpr uint32_t pc = 0x1c10'0000U;
    constexpr std::array<uint32_t, kFetchWidth> targets = {
        0x1d00'0100U, 0x1d00'0200U, 0x1d00'0300U, 0x1d00'0400U
    };

    for (int lane = 0; lane < kFetchWidth; ++lane)
        train_b_bl(dut, pc, lane, targets[lane]);

    const Snapshot prediction = lookup(dut, pc);
    expect_all_stages_b_bl("bank0 start", prediction, targets);

    // A redirect to the second instruction must still query the aligned
    // physical bank. The IFU will mask logical lane 0 as preceding the PC.
    const Snapshot unaligned = lookup(dut, pc + 4U);
    expect_all_stages_b_bl("bank0 unaligned request", unaligned, targets);
}

void test_bank1_start_and_wrap(Vbpd_banked_test_top* dut) {
    constexpr uint32_t pc = 0x1c10'0108U;
    constexpr std::array<uint32_t, kFetchWidth> targets = {
        0x1d10'0100U, 0x1d10'0200U, 0x1d10'0300U, 0x1d10'0400U
    };

    for (int lane = 0; lane < kFetchWidth; ++lane)
        train_b_bl(dut, pc, lane, targets[lane]);

    const Snapshot prediction = lookup(dut, pc);
    expect_all_stages_b_bl("bank1 start and wrap", prediction, targets);

    const Snapshot unaligned = lookup(dut, pc + 4U);
    expect_all_stages_b_bl("bank1 unaligned request", unaligned, targets);
}

void expect_packed_b_bl(const char* prefix, const VlWide<5>& packed,
                        const std::array<uint32_t, kFetchWidth>& targets) {
    char name[128];
    for (int lane = 0; lane < kFetchWidth; ++lane) {
        std::snprintf(name, sizeof(name), "%s lane%d", prefix, lane);
        expect_b_bl(name, read_pred(packed, lane), targets[lane]);
    }
}

void test_back_to_back_bank_rotation(Vbpd_banked_test_top* dut) {
    constexpr uint32_t bank0_pc = 0x1c10'0000U;
    constexpr uint32_t bank1_pc = 0x1c10'0108U;
    constexpr std::array<uint32_t, kFetchWidth> bank0_targets = {
        0x1d00'0100U, 0x1d00'0200U, 0x1d00'0300U, 0x1d00'0400U
    };
    constexpr std::array<uint32_t, kFetchWidth> bank1_targets = {
        0x1d10'0100U, 0x1d10'0200U, 0x1d10'0300U, 0x1d10'0400U
    };

    dut->f0_valid = 1;
    dut->f0_pc = bank0_pc;
    eval_cycle(dut);
    expect_eq("back-to-back cycle1 F1 valid", dut->f1_valid, 1);
    expect_packed_b_bl("back-to-back bank0 F1",
                       dut->f1_preds, bank0_targets);

    dut->f0_pc = bank1_pc;
    eval_cycle(dut);
    expect_eq("back-to-back cycle2 F1 valid", dut->f1_valid, 1);
    expect_eq("back-to-back cycle2 F2 valid", dut->f2_valid, 1);
    expect_packed_b_bl("back-to-back bank1 F1",
                       dut->f1_preds, bank1_targets);
    expect_packed_b_bl("back-to-back bank0 F2",
                       dut->f2_preds, bank0_targets);

    dut->f0_valid = 0;
    eval_cycle(dut);
    expect_eq("back-to-back cycle3 F2 valid", dut->f2_valid, 1);
    expect_eq("back-to-back cycle3 F3 valid", dut->f3_valid, 1);
    expect_packed_b_bl("back-to-back bank1 F2",
                       dut->f2_preds, bank1_targets);
    expect_packed_b_bl("back-to-back bank0 F3",
                       dut->f3_preds, bank0_targets);

    eval_cycle(dut);
    expect_eq("back-to-back cycle4 F3 valid", dut->f3_valid, 1);
    expect_packed_b_bl("back-to-back bank1 F3",
                       dut->f3_preds, bank1_targets);

    eval_cycle(dut);
    expect_eq("back-to-back pipeline drains", dut->f3_valid, 0);
}

void test_physical_meta_and_bim_training(Vbpd_banked_test_top* dut) {
    constexpr uint32_t pc = 0x1c10'0208U;
    constexpr uint32_t bank1_target = 0x1d20'0100U;
    constexpr uint32_t bank0_target = 0x1d20'0200U;

    // Logical lane 0 belongs to physical bank 1; logical lane 2 belongs to
    // the wrapped physical bank 0.
    train_branch(dut, pc, 0, true, bank1_target);
    train_branch(dut, pc, 2, true, bank0_target);

    for (int update = 0; update < 3; ++update)
        train_branch(dut, pc, 2, false, bank0_target);
    train_branch(dut, pc, 0, true, bank1_target);

    const Snapshot prediction = lookup(dut, pc);
    expect_branch("physical meta: bank1 branch stays taken",
                  prediction.f3[0], true, bank1_target);
    expect_branch("physical meta: wrapped bank0 branch becomes not-taken",
                  prediction.f3[2], false, bank0_target);

    expect_eq("physical meta: bank1 lane0 counter",
              read_bim_ctr(prediction, 1, 0), 3);
    expect_eq("physical meta: bank0 lane0 counter",
              read_bim_ctr(prediction, 0, 0), 0);
}

void test_first_bank_cfi_suppresses_second_update(
    Vbpd_banked_test_top* dut) {
    constexpr uint32_t pc = 0x1c10'0300U;
    constexpr uint32_t target = 0x1d30'0100U;

    const Snapshot before = lookup(dut, pc);
    drive_update(dut, pc, 0b0100, 1, true,
                 false, true, false, target, before.meta);

    const Snapshot after = lookup(dut, pc);
    expect_b_bl("first-bank CFI is trained", after.f3[1], target);
    expect_miss("second-bank younger lane is not trained", after.f3[2]);
    expect_eq("second physical bank BIM counter remains unchanged",
              read_bim_ctr(after, 1, 0), 2);
}

void test_cache_line_boundary(Vbpd_banked_test_top* dut) {
    constexpr uint32_t pc = 0x1c10'0438U;
    constexpr uint32_t first_target = 0x1d40'0100U;
    constexpr uint32_t wrapped_target = 0x1d40'0200U;

    train_b_bl(dut, pc, 0, first_target);
    train_b_bl(dut, pc, 2, wrapped_target);

    const Snapshot prediction = lookup(dut, pc);
    expect_b_bl("line end: first bank remains active",
                prediction.f3[0], first_target);
    expect_miss("line end: wrapped lane2 is suppressed",
                prediction.f3[2]);
    expect_miss("line end: wrapped lane3 is suppressed",
                prediction.f3[3]);
}

void test_bank1_lane1_nt_alternation(Vbpd_banked_test_top* dut) {
    reset_predictor(dut);

    // Logical lane 3 at ...077c maps to physical bank 1, local lane 1.
    // After the first taken instance allocates the target entry, the BIM
    // counter alternates 10/01 and predicts the N,T phase incorrectly.
    constexpr uint32_t packet_pc = 0x1c10'0770U;
    constexpr uint32_t target = 0x1c10'0700U;
    constexpr int iterations = 12;
    int classified_mispredicts = 0;

    for (int iteration = 0; iteration < iterations; ++iteration) {
        const Snapshot prediction = lookup(dut, packet_pc);
        const uint8_t expected_ctr = (iteration & 1) ? 1 : 2;
        const bool actual_taken = (iteration & 1) != 0;

        expect_eq("bank1/lane1 alternating counter",
                  read_bim_ctr(prediction, 1, 1), expected_ctr);
        expect_eq("bank1/lane1 alternating leaves bank0/lane1 unchanged",
                  read_bim_ctr(prediction, 0, 1), 2);

        if (iteration < 2) {
            expect_miss("bank1/lane1 remains unclassified before first taken",
                        prediction.f3[3]);
        } else {
            expect_branch("bank1/lane1 classified branch",
                          prediction.f3[3], !actual_taken, target);
            classified_mispredicts +=
                prediction.f3[3].taken != actual_taken;
        }

        drive_update(dut, packet_pc, 0b1000, 3, actual_taken,
                     true, false, false, target, prediction.meta);
    }

    const Snapshot final_prediction = lookup(dut, packet_pc);
    expect_eq("bank1/lane1 alternating returns to weak taken",
              read_bim_ctr(final_prediction, 1, 1), 2);
    expect_eq("bank1/lane1 classified N/T instances all mispredict",
              classified_mispredicts, iterations - 2);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbpd_banked_test_top;

    reset_predictor(dut);
    test_all_lanes_from_bank0(dut);
    test_bank1_start_and_wrap(dut);
    test_back_to_back_bank_rotation(dut);
    test_physical_meta_and_bim_training(dut);
    test_first_bank_cfi_suppresses_second_update(dut);
    test_cache_line_boundary(dut);
    test_bank1_lane1_nt_alternation(dut);

    pass("banked BPD contract");
    delete dut;
    return 0;
}
