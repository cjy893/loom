// Self-checking driver for the LA32 reference interpreter.
//
// Runs the NSCSCC functional-test ELF instruction by instruction. The suite
// self-checks every instruction group and finally stores 0x3a00003a to the
// CONFREG NUM register (0xbfaff050); reaching that value proves the
// interpreter agrees with the suite (and hence with the RTL) on every
// instruction, CSR, exception and interrupt it exercised.
//
// Usage: test_core_ref [ELF] [--elf FILE] [--max-steps N] [--trace]
//                      [--disasm FILE] [--selftest-only]

#include "elf_image.h"
#include "la32_ref.h"

#include <cinttypes>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <deque>
#include <stdexcept>
#include <string>
#include <vector>

namespace {

constexpr uint64_t DEFAULT_MAX_STEPS = 2000000;
constexpr uint32_t EXPECTED_NUM = 0x3a00003aU;
constexpr uint32_t POKE_BASE = 0x00010000U;

struct Options {
    std::string elf_path;
    std::string disasm_path;
    uint64_t max_steps = DEFAULT_MAX_STEPS;
    bool trace = false;
    bool selftest_only = false;
};

struct Record {
    uint64_t step = 0;
    uint32_t pc = 0;
    uint32_t inst = 0;
    bool gpr_write = false;
    unsigned rd = 0;
    uint32_t wdata = 0;
    bool is_store = false;
    uint32_t mem_addr = 0;
    uint32_t mem_data = 0;
    bool exception = false;
    uint32_t ecode = 0;
};

uint64_t parse_unsigned(const std::string& option,
                        const std::string& value) {
    char* end = nullptr;
    unsigned long long parsed = std::strtoull(value.c_str(), &end, 0);
    if (value.empty() || *end != '\0')
        throw std::runtime_error(option + " expects an integer");
    return parsed;
}

void print_usage(const char* executable) {
    std::printf(
        "Usage: %s [ELF] [options]\n"
        "  --elf FILE        functional-test ELF (positional also works)\n"
        "  --max-steps N     watchdog limit (default %" PRIu64 ")\n"
        "  --trace           print every retired instruction\n"
        "  --disasm FILE     annotate trace/failures with test.s\n"
        "  --selftest-only   run encoding/ALU spot checks and exit\n",
        executable, DEFAULT_MAX_STEPS);
}

Options parse_options(int argc, char** argv) {
    Options options;
    for (int index = 1; index < argc; ++index) {
        std::string argument = argv[index];
        auto require_value = [&]() -> std::string {
            if (++index >= argc)
                throw std::runtime_error(argument + " requires a value");
            return argv[index];
        };
        if (argument == "--elf") {
            options.elf_path = require_value();
        } else if (argument == "--max-steps") {
            options.max_steps = parse_unsigned(argument, require_value());
        } else if (argument == "--trace") {
            options.trace = true;
        } else if (argument == "--disasm") {
            options.disasm_path = require_value();
        } else if (argument == "--selftest-only") {
            options.selftest_only = true;
        } else if (argument == "--help" || argument == "-h") {
            print_usage(argv[0]);
            std::exit(0);
        } else if (!argument.empty() && argument[0] != '-' &&
                   options.elf_path.empty()) {
            options.elf_path = argument;
        } else {
            throw std::runtime_error("unknown option: " + argument);
        }
    }
    return options;
}

// ---------------------------------------------------------------------------
// Instruction encoders for the spot checks.
// ---------------------------------------------------------------------------
uint32_t enc_lu12i(unsigned rd, uint32_t imm20) {
    return (0x0aU << 25) | ((imm20 & 0xfffffU) << 5) | rd;
}
uint32_t enc_addi_w(unsigned rd, unsigned rj, int imm12) {
    return (1U << 25) | (2U << 22) | ((imm12 & 0xfffU) << 10) | (rj << 5) |
           rd;
}
uint32_t enc_op(unsigned op21_15, unsigned rd, unsigned rj, unsigned rk) {
    return (op21_15 << 15) | (rk << 10) | (rj << 5) | rd;
}
uint32_t enc_ldst(unsigned size_code, bool store, bool unsign, unsigned rd,
                  unsigned rj, int imm12) {
    return (0x0aU << 26) | (unsign ? 1U << 25 : 0) |
           (store ? 1U << 24 : 0) | (size_code << 22) |
           ((imm12 & 0xfffU) << 10) | (rj << 5) | rd;
}
uint32_t enc_srai(unsigned rd, unsigned rj, unsigned sa) {
    return (4U << 20) | (2U << 18) | (sa << 10) | (rj << 5) | rd;
}

// ---------------------------------------------------------------------------
// Spot checks: numeric-sensitive semantics before trusting the full run.
// ---------------------------------------------------------------------------
unsigned g_selftest_failures = 0;

void check_case(La32Ref& ref, const char* name,
                const std::vector<uint32_t>& program, unsigned check_rd,
                uint32_t expected) {
    for (std::size_t i = 0; i < program.size(); ++i)
        ref.poke_word(POKE_BASE + 4 * i, program[i]);
    ref.set_pc(POKE_BASE);
    for (std::size_t i = 0; i < program.size(); ++i)
        ref.step();
    uint32_t actual = ref.gpr(check_rd);
    if (actual != expected) {
        ++g_selftest_failures;
        std::printf("SELFTEST FAIL %-24s r%u = 0x%08x (expected 0x%08x)\n",
                    name, check_rd, actual, expected);
    }
}

bool run_selftest(La32Ref& ref) {
    constexpr unsigned R5 = 5, R6 = 6, R7 = 7;
    // lu12i.w + addi.w materialization of an arbitrary constant.
    auto binary = [&](unsigned op, uint32_t a, uint32_t b) {
        auto imm_pair = [](uint32_t value) {
            uint32_t hi = (value + 0x800U) >> 12;
            int lo = static_cast<int>(value & 0xfffU) -
                     ((value & 0x800U) ? 0x1000 : 0);
            return std::pair<uint32_t, int>{hi, lo};
        };
        auto pa = imm_pair(a);
        auto pb = imm_pair(b);
        return std::vector<uint32_t>{
            enc_lu12i(R5, pa.first), enc_addi_w(R5, R5, pa.second),
            enc_lu12i(R6, pb.first), enc_addi_w(R6, R6, pb.second),
            enc_op(op, R7, R5, R6),
        };
    };

    // div.w / mod.w signed: 100 / -7 = -14 rem 2.
    check_case(ref, "div.w 100/-7", binary(0b1000000, 100, 0xfffffff9U), R7,
               0xfffffff2U);
    check_case(ref, "mod.w 100/-7", binary(0b1000001, 100, 0xfffffff9U), R7,
               2);
    // -100 / 7 = -14 rem -2 (truncation toward zero).
    check_case(ref, "div.w -100/7", binary(0b1000000, 0xffffff9cU, 7), R7,
               0xfffffff2U);
    check_case(ref, "mod.w -100/7", binary(0b1000001, 0xffffff9cU, 7), R7,
               0xfffffffeU);
    // Division by zero: quotient = 0xffffffff, remainder = dividend.
    check_case(ref, "div.w x/0", binary(0b1000000, 12345, 0), R7,
               0xffffffffU);
    check_case(ref, "mod.w x/0", binary(0b1000001, 12345, 0), R7, 12345);
    check_case(ref, "div.wu x/0", binary(0b1000010, 12345, 0), R7,
               0xffffffffU);
    check_case(ref, "mod.wu x/0", binary(0b1000011, 12345, 0), R7, 12345);
    // 0x80000000 / -1 = 0x80000000 rem 0.
    check_case(ref, "div.w INT_MIN/-1", binary(0b1000000, 0x80000000U,
                                               0xffffffffU),
               R7, 0x80000000U);
    check_case(ref, "mod.w INT_MIN/-1", binary(0b1000001, 0x80000000U,
                                               0xffffffffU),
               R7, 0);
    // Unsigned: 0xffffff9c / 7 = 0x24924916 rem 2.
    check_case(ref, "div.wu", binary(0b1000010, 0xffffff9cU, 7), R7,
               0x24924916U);
    check_case(ref, "mod.wu", binary(0b1000011, 0xffffff9cU, 7), R7, 2);
    // mul family.
    check_case(ref, "mul.w", binary(0b0111000, 0x00012345U, 0x0006789aU),
               R7, 0x5cd58f82U);
    check_case(ref, "mulh.w -1*1", binary(0b0111001, 0xffffffffU, 1), R7,
               0xffffffffU);
    check_case(ref, "mulh.w", binary(0b0111001, 0x7fffffffU, 0x7fffffffU),
               R7, 0x3fffffffU);
    check_case(ref, "mulh.wu", binary(0b0111010, 0xffffffffU, 0xffffffffU),
               R7, 0xfffffffeU);
    // Variable shifts mask the amount to 5 bits.
    check_case(ref, "sra.w sign", binary(0b0110000, 0x80000000U, 31), R7,
               0xffffffffU);
    check_case(ref, "srl.w mask33", binary(0b0101111, 0x80000000U, 33), R7,
               0x40000000U);
    check_case(ref, "sll.w mask33", binary(0b0101110, 1, 33), R7, 2);
    // srai.w immediate sign extension.
    check_case(ref, "srai.w",
               {enc_lu12i(R5, 0x80000), enc_srai(R7, R5, 31)}, R7,
               0xffffffffU);
    // Sign/zero-extending loads through the sparse memory.
    constexpr uint32_t DATA = 0x00020000U;
    auto load_case = [&](const char* name, unsigned size_code, bool unsign,
                         int offset, uint32_t expected) {
        check_case(ref, name,
                   {enc_lu12i(R5, 0x80000), enc_lu12i(R6, DATA >> 12),
                    enc_ldst(2, true, false, R5, R6, 0),
                    enc_ldst(size_code, false, unsign, R7, R6, offset)},
                   R7, expected);
    };
    load_case("ld.b sign", 0, false, 3, 0xffffff80U);
    load_case("ld.bu", 0, true, 3, 0x80U);
    load_case("ld.h sign", 1, false, 2, 0xffff8000U);
    load_case("ld.hu", 1, true, 2, 0x8000U);
    load_case("ld.h low", 1, false, 0, 0);
    load_case("ld.w", 2, false, 0, 0x80000000U);

    if (g_selftest_failures == 0)
        std::printf("SELFTEST: all spot checks passed\n");
    return g_selftest_failures == 0;
}

// ---------------------------------------------------------------------------
// Trace / failure reporting.
// ---------------------------------------------------------------------------
void print_record(const Record& record, const DisassemblyIndex& disasm,
                  FILE* out) {
    std::fprintf(out, "[%8" PRIu64 "] pc=%08x inst=%08x", record.step,
                 record.pc, record.inst);
    if (record.exception)
        std::fprintf(out, " EXCEPTION ecode=0x%02x", record.ecode);
    if (record.gpr_write)
        std::fprintf(out, " r%u=0x%08x", record.rd, record.wdata);
    if (record.is_store)
        std::fprintf(out, " ST [0x%08x]=0x%08x", record.mem_addr,
                     record.mem_data);
    if (const std::string* line = disasm.find(record.pc))
        std::fprintf(out, "  %s", line->c_str());
    std::fprintf(out, "\n");
}

}  // namespace

int main(int argc, char** argv) {
    std::setvbuf(stdout, nullptr, _IOLBF, 0);

    Options options;
    try {
        options = parse_options(argc, argv);
    } catch (const std::exception& error) {
        std::fprintf(stderr, "ERROR: %s\n", error.what());
        print_usage(argv[0]);
        return 2;
    }
    if (options.elf_path.empty()) {
        std::fprintf(stderr, "ERROR: --elf is required\n");
        print_usage(argv[0]);
        return 2;
    }

    La32Ref ref;
    std::string load_error;
    if (!ref.load_elf(options.elf_path, &load_error)) {
        std::fprintf(stderr, "ERROR: %s\n", load_error.c_str());
        return 2;
    }
    std::printf("ELF: %s\nentry=0x%08x, PT_LOAD segments=%zu\n",
                options.elf_path.c_str(), ref.image().entry(),
                ref.image().segments().size());

    DisassemblyIndex disasm;
    if (!options.disasm_path.empty() && !disasm.load(options.disasm_path))
        std::fprintf(stderr, "WARNING: cannot load disassembly '%s'\n",
                     options.disasm_path.c_str());

    if (!run_selftest(ref)) {
        std::fprintf(stderr, "FAIL: core_ref selftest (%u failures)\n",
                     g_selftest_failures);
        return 1;
    }
    if (options.selftest_only)
        return 0;
    ref.reset();

    std::deque<Record> recent;
    std::string failure;
    uint64_t step_count = 0;
    uint32_t last_num = 0;

    while (step_count < options.max_steps) {
        // The next fetch must land inside the image unless the pc is
        // misaligned (that path raises ADEF and redirects to a handler).
        uint32_t current_pc = ref.pc();
        if ((current_pc & 3U) == 0 && !ref.image().contains(current_pc, 4)) {
            char message[96];
            std::snprintf(message, sizeof(message),
                          "pc 0x%08x left the ELF image", current_pc);
            failure = message;
            break;
        }

        La32Ref::StepResult result = ref.step();
        ++step_count;

        Record record{ref.steps(),
                      result.pc,
                      result.inst,
                      result.gpr_write,
                      result.rd,
                      result.wdata,
                      result.is_store,
                      result.mem_addr,
                      result.mem_data,
                      result.exception,
                      result.ecode};
        recent.push_back(record);
        if (recent.size() > 20)
            recent.pop_front();
        if (options.trace)
            print_record(record, disasm, stdout);

        if (ref.num_written()) {
            uint32_t value = ref.num_value();
            ref.clear_num_written();
            if (value != last_num) {
                unsigned test_number = value >> 24;
                unsigned passed = value & 0x00ffffffU;
                std::printf("NUM=0x%08x (test %u, passed %u) at step %" PRIu64
                            "\n",
                            value, test_number, passed, step_count);
                last_num = value;
                if (value == EXPECTED_NUM) {
                    std::printf(
                        "PASS: core_ref NUM=0x%08x steps=%" PRIu64 "\n",
                        value, step_count);
                    return 0;
                }
                if (test_number != 0 && passed < test_number) {
                    char message[128];
                    std::snprintf(message, sizeof(message),
                                  "NSCSCC functional test %u failed "
                                  "(NUM=0x%08x, passed=%u)",
                                  test_number, value, passed);
                    failure = message;
                    break;
                }
            }
        }
    }

    if (failure.empty())
        failure = "watchdog expired (max-steps reached)";

    std::fprintf(stderr, "FAIL: core_ref after %" PRIu64 " steps: %s\n",
                 step_count, failure.c_str());
    std::fprintf(stderr, "State: pc=0x%08x last NUM=0x%08x\n", ref.pc(),
                 last_num);
    std::fprintf(stderr, "Recent instructions (oldest first):\n");
    for (const Record& record : recent)
        print_record(record, disasm, stderr);
    return 1;
}
