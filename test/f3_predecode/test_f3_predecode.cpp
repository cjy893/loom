#include "Vf3_predecode_test_top.h"
#include "verilated.h"
#include "../common/verilator_test.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <cstdlib>

namespace {

constexpr uint8_t kCfiNone = 0;
constexpr uint8_t kCfiBr = 1;
constexpr uint8_t kCfiBBl = 2;
constexpr uint8_t kCfiJirl = 3;

constexpr uint8_t kOpJirl = 0x13;
constexpr uint8_t kOpB = 0x14;
constexpr uint8_t kOpBl = 0x15;
constexpr uint8_t kOpBeq = 0x16;
constexpr uint8_t kOpBne = 0x17;
constexpr uint8_t kOpBlt = 0x18;
constexpr uint8_t kOpBge = 0x19;
constexpr uint8_t kOpBltu = 0x1a;
constexpr uint8_t kOpBgeu = 0x1b;

struct Expected {
    uint8_t cfi_type;
    bool is_call;
    bool is_ret;
    bool direct_target_valid;
    uint32_t direct_target;
};

[[noreturn]] void fail_encoding(const char* message) {
    std::fprintf(stderr, "FAIL: invalid test encoding: %s\n", message);
    std::exit(1);
}

uint32_t encode_i16(uint8_t op, int32_t byte_offset,
                    uint8_t rj = 0, uint8_t rd = 0) {
    if ((byte_offset & 3) != 0)
        fail_encoding("I16 offset is not word aligned");

    const int32_t scaled = byte_offset / 4;
    if (scaled < -32768 || scaled > 32767)
        fail_encoding("I16 offset is out of range");

    const uint32_t imm = uint32_t(scaled) & 0xffffU;
    return (uint32_t(op) << 26) |
           (imm << 10) |
           (uint32_t(rj & 0x1fU) << 5) |
           uint32_t(rd & 0x1fU);
}

uint32_t encode_i26(uint8_t op, int32_t byte_offset) {
    if ((byte_offset & 3) != 0)
        fail_encoding("I26 offset is not word aligned");

    const int32_t scaled = byte_offset / 4;
    if (scaled < -(1 << 25) || scaled > ((1 << 25) - 1))
        fail_encoding("I26 offset is out of range");

    const uint32_t imm = uint32_t(scaled) & 0x03ff'ffffU;
    return (uint32_t(op) << 26) |
           ((imm & 0xffffU) << 10) |
           ((imm >> 16) & 0x3ffU);
}

void check_case(Vf3_predecode_test_top* dut, const char* name,
                uint32_t pc, uint32_t inst, const Expected& expected) {
    dut->pc = pc;
    dut->inst = inst;
    dut->eval();

    char field[128];
    std::snprintf(field, sizeof(field), "%s cfi_type", name);
    expect_eq(field, dut->cfi_type, expected.cfi_type);
    std::snprintf(field, sizeof(field), "%s is_call", name);
    expect_eq(field, dut->is_call, expected.is_call);
    std::snprintf(field, sizeof(field), "%s is_ret", name);
    expect_eq(field, dut->is_ret, expected.is_ret);
    std::snprintf(field, sizeof(field), "%s direct_target_valid", name);
    expect_eq(field, dut->direct_target_valid,
              expected.direct_target_valid);
    std::snprintf(field, sizeof(field), "%s direct_target", name);
    expect_eq(field, dut->direct_target, expected.direct_target);
    std::snprintf(field, sizeof(field), "%s return_addr", name);
    expect_eq(field, dut->return_addr, pc + 4U);
    std::snprintf(field, sizeof(field), "%s npc_plus4", name);
    expect_eq(field, dut->npc_plus4, 1);
}

void test_non_control(Vf3_predecode_test_top* dut) {
    check_case(dut, "addi.w", 0x1c00'0000U, 0x0280'0401U,
               {kCfiNone, false, false, false, 0});

    // Register fields that resemble RA must not classify a non-JIRL
    // instruction as a call or return.
    check_case(dut, "non-control RA fields", 0x1c00'0004U,
               0x0010'8421U,
               {kCfiNone, false, false, false, 0});
}

void test_conditional_branches(Vf3_predecode_test_top* dut) {
    constexpr uint32_t pc = 0x1c00'800cU;
    constexpr std::array<uint8_t, 6> ops = {
        kOpBeq, kOpBne, kOpBlt, kOpBge, kOpBltu, kOpBgeu
    };
    constexpr std::array<const char*, 6> names = {
        "beq", "bne", "blt", "bge", "bltu", "bgeu"
    };

    for (std::size_t i = 0; i < ops.size(); ++i) {
        check_case(dut, names[i], pc,
                   encode_i16(ops[i], 0x78, 13, 12),
                   {kCfiBr, false, false, true, pc + 0x78U});
    }

    check_case(dut, "conditional backward", pc,
               encode_i16(kOpBne, -0x104, 2, 3),
               {kCfiBr, false, false, true, pc - 0x104U});

    // Encoding copied from nscscc_func/obj/test.s.
    check_case(dut, "real test.s beq", pc, 0x5800'79acU,
               {kCfiBr, false, false, true, pc + 0x78U});
}

void test_direct_jumps(Vf3_predecode_test_top* dut) {
    constexpr uint32_t pc = 0x1c10'0000U;

    check_case(dut, "B forward", pc, encode_i26(kOpB, 0x1234),
               {kCfiBBl, false, false, true, pc + 0x1234U});
    check_case(dut, "B backward", pc, encode_i26(kOpB, -0x10008),
               {kCfiBBl, false, false, true, pc - 0x10008U});
    check_case(dut, "BL call", pc, encode_i26(kOpBl, 0x2040),
               {kCfiBBl, true, false, true, pc + 0x2040U});

    check_case(dut, "B maximum positive", pc,
               encode_i26(kOpB, (1 << 27) - 4),
               {kCfiBBl, false, false, true,
                pc + uint32_t((1 << 27) - 4)});
    check_case(dut, "B minimum negative", pc,
               encode_i26(kOpB, -(1 << 27)),
               {kCfiBBl, false, false, true,
                pc - uint32_t(1 << 27)});
}

void test_jirl_call_and_return(Vf3_predecode_test_top* dut) {
    constexpr uint32_t pc = 0x1c20'0000U;

    check_case(dut, "ordinary JIRL", pc,
               encode_i16(kOpJirl, 0x20, 6, 5),
               {kCfiJirl, false, false, false, 0});
    check_case(dut, "JIRL call", pc,
               encode_i16(kOpJirl, 0, 5, 1),
               {kCfiJirl, true, false, false, 0});
    check_case(dut, "JIRL return", pc,
               encode_i16(kOpJirl, 0, 1, 0),
               {kCfiJirl, false, true, false, 0});
    check_case(dut, "JIRL r1 to r1 is call only", pc,
               encode_i16(kOpJirl, 0, 1, 1),
               {kCfiJirl, true, false, false, 0});
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vf3_predecode_test_top;

    test_non_control(dut);
    test_conditional_branches(dut);
    test_direct_jumps(dut);
    test_jirl_call_and_return(dut);

    pass("f3_predecode contract");
    delete dut;
    return 0;
}
