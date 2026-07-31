#include "Vbpd_update_router_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <array>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <string>

namespace {

constexpr int kBanks = 2;
constexpr int kBankWidth = 2;
constexpr int kBankBytes = 8;
constexpr int kBlockBytes = 64;
constexpr int kMetaBits = 120;
constexpr int kMetaWords = 4;

using Meta = std::array<uint32_t, kMetaWords>;

struct Update {
    bool valid = true;
    bool mispredict = false;
    bool repair = false;
    uint8_t btb_mispredicts = 0;
    uint32_t pc = 0;
    uint8_t br_mask = 0;
    bool cfi_valid = false;
    uint8_t cfi_idx = 0;
    bool cfi_taken = false;
    bool cfi_mispredicted = false;
    bool cfi_is_br = false;
    bool cfi_is_b_bl = false;
    bool cfi_is_jirl = false;
    uint64_t old_history = 0;
    bool current_saw_nt = false;
    bool new_saw_nt = false;
    bool new_saw_taken = false;
    uint8_t ras_idx = 0;
    std::array<uint32_t, kBanks> lhist{};
    uint32_t target = 0;
    std::array<Meta, kBanks> meta{};
};

struct BankResult {
    bool valid = false;
    bool mispredict = false;
    bool repair = false;
    uint8_t btb_mispredicts = 0;
    uint32_t pc = 0;
    uint8_t br_mask = 0;
    bool cfi_valid = false;
    uint8_t cfi_idx = 0;
    bool cfi_taken = false;
    bool cfi_mispredicted = false;
    bool cfi_is_br = false;
    bool cfi_is_b_bl = false;
    bool cfi_is_jirl = false;
    uint64_t ghist = 0;
    uint32_t lhist = 0;
    uint32_t target = 0;
    Meta meta{};
};

template <std::size_t N>
void clear_wide(VlWide<N>& value) {
    for (std::size_t word = 0; word < N; ++word)
        value[word] = 0;
}

template <std::size_t N>
void write_bit(VlWide<N>& value, int bit, bool set) {
    const int word = bit / 32;
    const int offset = bit % 32;
    if (set)
        value[word] |= uint32_t(1) << offset;
    else
        value[word] &= ~(uint32_t(1) << offset);
}

template <std::size_t N>
void write_meta_bank(VlWide<N>& packed, int bank, const Meta& meta) {
    for (int bit = 0; bit < kMetaBits; ++bit) {
        const bool set = (meta[bit / 32] >> (bit % 32)) & 1U;
        write_bit(packed, bank * kMetaBits + bit, set);
    }
}

template <std::size_t N>
Meta read_meta(const VlWide<N>& value) {
    Meta meta{};
    for (int word = 0; word < kMetaWords; ++word)
        meta[word] = value[word];
    meta[kMetaWords - 1] &= 0x00ff'ffffU;
    return meta;
}

void drive(Vbpd_update_router_test_top* dut, const Update& update) {
    dut->update_valid = update.valid;
    dut->update_is_mispredict_update = update.mispredict;
    dut->update_is_repair_update = update.repair;
    dut->update_btb_mispredicts = update.btb_mispredicts;
    dut->update_pc = update.pc;
    dut->update_br_mask = update.br_mask;
    dut->update_cfi_valid = update.cfi_valid;
    dut->update_cfi_idx = update.cfi_idx;
    dut->update_cfi_taken = update.cfi_taken;
    dut->update_cfi_mispredicted = update.cfi_mispredicted;
    dut->update_cfi_is_br = update.cfi_is_br;
    dut->update_cfi_is_b_bl = update.cfi_is_b_bl;
    dut->update_cfi_is_jirl = update.cfi_is_jirl;
    dut->update_ghist_old_history = update.old_history;
    dut->update_ghist_current_saw_nt = update.current_saw_nt;
    dut->update_ghist_new_saw_nt = update.new_saw_nt;
    dut->update_ghist_new_saw_taken = update.new_saw_taken;
    dut->update_ghist_ras_idx = update.ras_idx;
    dut->update_lhist =
        uint64_t(update.lhist[0]) |
        (uint64_t(update.lhist[1]) << 32);
    dut->update_target = update.target;
    clear_wide(dut->update_meta);
    for (int bank = 0; bank < kBanks; ++bank)
        write_meta_bank(dut->update_meta, bank, update.meta[bank]);
    dut->eval();
}

BankResult read_bank(Vbpd_update_router_test_top* dut, int bank) {
    BankResult result{};
    result.valid = (dut->bank_valid >> bank) & 1U;

    if (bank == 0) {
        result.mispredict = dut->bank0_is_mispredict_update;
        result.repair = dut->bank0_is_repair_update;
        result.btb_mispredicts = dut->bank0_btb_mispredicts;
        result.pc = dut->bank0_pc;
        result.br_mask = dut->bank0_br_mask;
        result.cfi_valid = dut->bank0_cfi_valid;
        result.cfi_idx = dut->bank0_cfi_idx;
        result.cfi_taken = dut->bank0_cfi_taken;
        result.cfi_mispredicted = dut->bank0_cfi_mispredicted;
        result.cfi_is_br = dut->bank0_cfi_is_br;
        result.cfi_is_b_bl = dut->bank0_cfi_is_b_bl;
        result.cfi_is_jirl = dut->bank0_cfi_is_jirl;
        result.ghist = dut->bank0_ghist;
        result.lhist = dut->bank0_lhist;
        result.target = dut->bank0_target;
        result.meta = read_meta(dut->bank0_meta);
    } else {
        result.mispredict = dut->bank1_is_mispredict_update;
        result.repair = dut->bank1_is_repair_update;
        result.btb_mispredicts = dut->bank1_btb_mispredicts;
        result.pc = dut->bank1_pc;
        result.br_mask = dut->bank1_br_mask;
        result.cfi_valid = dut->bank1_cfi_valid;
        result.cfi_idx = dut->bank1_cfi_idx;
        result.cfi_taken = dut->bank1_cfi_taken;
        result.cfi_mispredicted = dut->bank1_cfi_mispredicted;
        result.cfi_is_br = dut->bank1_cfi_is_br;
        result.cfi_is_b_bl = dut->bank1_cfi_is_b_bl;
        result.cfi_is_jirl = dut->bank1_cfi_is_jirl;
        result.ghist = dut->bank1_ghist;
        result.lhist = dut->bank1_lhist;
        result.target = dut->bank1_target;
        result.meta = read_meta(dut->bank1_meta);
    }
    return result;
}

uint64_t second_history(const Update& update) {
    if (update.new_saw_taken)
        return (update.old_history << 1) | 1U;
    if (update.new_saw_nt)
        return update.old_history << 1;
    return update.old_history;
}

BankResult expected_bank(const Update& update, int physical_bank) {
    BankResult expected{};
    const int first_bank = (update.pc / kBankBytes) & 1;
    const bool last_bank =
        ((update.pc % kBlockBytes) / kBankBytes) ==
        (kBlockBytes / kBankBytes) - 1;
    const bool is_first = physical_bank == first_bank;

    expected.valid = is_first
        ? update.valid
        : update.valid && !last_bank &&
          (!update.cfi_valid || update.cfi_idx >= kBankWidth);

    expected.mispredict = update.mispredict;
    expected.repair = update.repair;
    expected.cfi_idx = update.cfi_idx & (kBankWidth - 1);
    expected.cfi_taken = update.cfi_taken;
    expected.cfi_mispredicted = update.cfi_mispredicted;
    expected.cfi_is_br = update.cfi_is_br;
    expected.cfi_is_b_bl = update.cfi_is_b_bl;
    expected.cfi_is_jirl = update.cfi_is_jirl;
    expected.lhist = update.lhist[physical_bank];
    expected.target = update.target;
    expected.meta = update.meta[physical_bank];

    if (is_first) {
        expected.pc = update.pc;
        expected.br_mask = update.br_mask & 0x3U;
        expected.btb_mispredicts = update.btb_mispredicts & 0x3U;
        expected.cfi_valid =
            update.cfi_valid && update.cfi_idx < kBankWidth;
        expected.ghist = update.old_history;
    } else {
        expected.pc = (update.pc & ~(kBankBytes - 1U)) + kBankBytes;
        expected.br_mask = (update.br_mask >> kBankWidth) & 0x3U;
        expected.btb_mispredicts =
            (update.btb_mispredicts >> kBankWidth) & 0x3U;
        expected.cfi_valid =
            update.cfi_valid && update.cfi_idx >= kBankWidth;
        expected.ghist = second_history(update);
    }

    return expected;
}

void expect_meta(const char* prefix, const Meta& actual,
                 const Meta& expected) {
    for (int word = 0; word < kMetaWords; ++word) {
        const std::string name =
            std::string(prefix) + " meta word " + std::to_string(word);
        const uint32_t mask =
            word == kMetaWords - 1 ? 0x00ff'ffffU : 0xffff'ffffU;
        expect_eq(name.c_str(),
                  actual[word] & mask, expected[word] & mask);
    }
}

void expect_bank(const char* prefix, const BankResult& actual,
                 const BankResult& expected) {
    const std::string valid_name = std::string(prefix) + " valid";
    expect_eq(valid_name.c_str(), actual.valid, expected.valid);
    if (!expected.valid)
        return;

#define EXPECT_FIELD(field)                                                   \
    do {                                                                      \
        const std::string field_name =                                        \
            std::string(prefix) + " " #field;                                 \
        expect_eq(field_name.c_str(), actual.field, expected.field);           \
    } while (0)

    EXPECT_FIELD(mispredict);
    EXPECT_FIELD(repair);
    EXPECT_FIELD(btb_mispredicts);
    EXPECT_FIELD(pc);
    EXPECT_FIELD(br_mask);
    EXPECT_FIELD(cfi_valid);
    EXPECT_FIELD(cfi_idx);
    EXPECT_FIELD(cfi_taken);
    EXPECT_FIELD(cfi_mispredicted);
    EXPECT_FIELD(cfi_is_br);
    EXPECT_FIELD(cfi_is_b_bl);
    EXPECT_FIELD(cfi_is_jirl);
    EXPECT_FIELD(ghist);
    EXPECT_FIELD(lhist);
    EXPECT_FIELD(target);
#undef EXPECT_FIELD

    expect_meta(prefix, actual.meta, expected.meta);
}

Update base_update() {
    Update update{};
    update.valid = true;
    update.mispredict = true;
    update.repair = false;
    update.btb_mispredicts = 0b1101;
    update.pc = 0x1c10'0000U;
    update.br_mask = 0b1011;
    update.cfi_valid = false;
    update.cfi_taken = true;
    update.cfi_mispredicted = true;
    update.cfi_is_br = true;
    update.old_history = 0x8123'4567'89ab'cdefULL;
    update.current_saw_nt = true;
    update.new_saw_taken = true;
    update.ras_idx = 17;
    update.lhist = {0x1111'2222U, 0x3333'4444U};
    update.target = 0x1c20'1000U;
    update.meta = {{
        {0x0102'0304U, 0x1112'1314U, 0x2122'2324U, 0x0055'6677U},
        {0x8182'8384U, 0x9192'9394U, 0xa1a2'a3a4U, 0x00dd'eeffU}
    }};
    return update;
}

void check_update(Vbpd_update_router_test_top* dut, const char* name,
                  const Update& update) {
    drive(dut, update);
    char bank_name[128];
    for (int bank = 0; bank < kBanks; ++bank) {
        std::snprintf(bank_name, sizeof(bank_name), "%s bank%d",
                      name, bank);
        expect_bank(bank_name, read_bank(dut, bank),
                    expected_bank(update, bank));
    }
}

void test_bank0_start(Vbpd_update_router_test_top* dut) {
    Update update = base_update();
    check_update(dut, "bank0 no CFI", update);

    update.cfi_valid = true;
    update.cfi_idx = 1;
    update.cfi_is_br = true;
    update.cfi_is_b_bl = false;
    update.cfi_is_jirl = false;
    check_update(dut, "bank0 first-bank CFI", update);
    expect_eq("bank0 first-bank CFI suppresses bank1",
              dut->bank_valid, 0b01);

    update.cfi_idx = 3;
    update.cfi_is_br = false;
    update.cfi_is_jirl = true;
    check_update(dut, "bank0 second-bank CFI", update);
    expect_eq("bank0 second-bank CFI reaches both banks",
              dut->bank_valid, 0b11);
    expect_eq("bank1 receives local CFI index",
              dut->bank1_cfi_idx, 1);
}

void test_bank1_start_and_wrap(Vbpd_update_router_test_top* dut) {
    Update update = base_update();
    update.pc = 0x1c10'0008U;
    update.new_saw_taken = false;
    update.new_saw_nt = true;
    check_update(dut, "bank1 no CFI", update);
    expect_eq("bank1 start maps logical first half to physical bank1",
              dut->bank1_br_mask, update.br_mask & 0x3U);
    expect_eq("bank1 start wraps logical second half to physical bank0",
              dut->bank0_br_mask, (update.br_mask >> 2) & 0x3U);
    expect_eq("wrapped bank0 uses second-bank history",
              dut->bank0_ghist, update.old_history << 1);
    expect_eq("physical bank0 keeps physical bank0 meta",
              read_meta(dut->bank0_meta)[0], update.meta[0][0]);

    update.cfi_valid = true;
    update.cfi_idx = 0;
    update.cfi_is_br = false;
    update.cfi_is_b_bl = true;
    check_update(dut, "bank1 first-bank CFI", update);
    expect_eq("bank1 first-bank CFI suppresses wrapped bank0",
              dut->bank_valid, 0b10);

    update.cfi_idx = 2;
    update.cfi_is_b_bl = false;
    update.cfi_is_jirl = true;
    check_update(dut, "bank1 wrapped-bank CFI", update);
    expect_eq("bank1 wrapped-bank CFI reaches both banks",
              dut->bank_valid, 0b11);
    expect_eq("wrapped physical bank0 owns CFI",
              dut->bank0_cfi_valid, 1);
    expect_eq("wrapped physical bank0 local CFI index",
              dut->bank0_cfi_idx, 0);
}

void test_cache_line_boundary(Vbpd_update_router_test_top* dut) {
    Update update = base_update();
    update.pc = 0x1c10'0038U;
    update.cfi_valid = false;
    check_update(dut, "last bank in cache line", update);
    expect_eq("cache-line boundary suppresses wrapped bank",
              dut->bank_valid, 0b10);
}

void test_invalid_update(Vbpd_update_router_test_top* dut) {
    Update update = base_update();
    update.valid = false;
    update.cfi_valid = true;
    update.cfi_idx = 3;
    check_update(dut, "invalid update", update);
    expect_eq("invalid update suppresses both banks",
              dut->bank_valid, 0);
}

void test_repair_flags(Vbpd_update_router_test_top* dut) {
    Update update = base_update();
    update.mispredict = false;
    update.repair = true;
    update.cfi_valid = true;
    update.cfi_idx = 2;
    update.cfi_mispredicted = false;
    update.cfi_taken = false;
    update.cfi_is_br = true;
    update.cfi_is_jirl = false;
    check_update(dut, "repair update", update);
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vbpd_update_router_test_top;

    test_bank0_start(dut);
    test_bank1_start_and_wrap(dut);
    test_cache_line_boundary(dut);
    test_invalid_update(dut);
    test_repair_flags(dut);

    pass("bpd_update_router contract");
    delete dut;
    return 0;
}
