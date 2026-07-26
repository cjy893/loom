#include "Vcore_program_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <deque>
#include <initializer_list>
#include <string>
#include <vector>

static constexpr int CORE_WIDTH = 2;
static constexpr uint32_t PROGRAM_BASE = 0x1c04b2e0;
static constexpr uint32_t NOP = 0x03400000;

static constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U | ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t lu12i_w(unsigned rd, unsigned imm20) {
    return 0x14000000U | ((imm20 & 0xfffffU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t ori(unsigned rd, unsigned rj, unsigned imm12) {
    return 0x03800000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t mem_i12(uint32_t opcode, unsigned rd,
                                  unsigned rj, int imm12) {
    return opcode | ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t ld_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28800000U, rd, rj, imm12);
}

static constexpr uint32_t st_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29800000U, rd, rj, imm12);
}

static constexpr uint32_t branch_i16(uint32_t opcode, unsigned rj,
                                     unsigned rd, int byte_offset) {
    unsigned imm16 = static_cast<unsigned>(byte_offset >> 2) & 0xffffU;
    return opcode | (imm16 << 10) | ((rj & 0x1fU) << 5) |
           (rd & 0x1fU);
}

static constexpr uint32_t beq(unsigned rj, unsigned rd, int byte_offset) {
    return branch_i16(0x58000000U, rj, rd, byte_offset);
}

static constexpr uint32_t bne(unsigned rj, unsigned rd, int byte_offset) {
    return branch_i16(0x5c000000U, rj, rd, byte_offset);
}

static constexpr uint32_t branch_i26(uint32_t opcode, int byte_offset) {
    unsigned imm26 = static_cast<unsigned>(byte_offset >> 2) & 0x03ffffffU;
    return opcode | ((imm26 & 0xffffU) << 10) | (imm26 >> 16);
}

static constexpr uint32_t b(int byte_offset) {
    return branch_i26(0x50000000U, byte_offset);
}

static constexpr uint32_t bl(int byte_offset) {
    return branch_i26(0x54000000U, byte_offset);
}

static constexpr uint32_t jirl(unsigned rd, unsigned rj, int byte_offset) {
    return branch_i16(0x4c000000U, rj, rd, byte_offset);
}

static_assert(b(20) == 0x50001400U);
static_assert(bl(24) == 0x54001800U);
static_assert(jirl(0, 13, 0) == 0x4c0001a0U);

static unsigned packed_field(const VlWide<5>& value, int index, int width) {
    unsigned bit = static_cast<unsigned>(index * width);
    unsigned word = bit / 32;
    unsigned shift = bit % 32;
    uint64_t chunk = value[word];
    if (shift + width > 32)
        chunk |= static_cast<uint64_t>(value[word + 1]) << 32;
    return static_cast<unsigned>(
        (chunk >> shift) & ((uint64_t{1} << width) - 1));
}

static unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) & ((1U << width) - 1U);
}

static uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

static bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

struct Instruction {
    uint32_t inst;
    const char* disasm;
};

struct CommitRecord {
    uint32_t pc = 0;
    uint32_t inst = 0;
    unsigned rob_idx = 0;
};

struct Response {
    int due_cycle = 0;
    bool is_store = false;
    uint32_t data = 0;
    unsigned idx = 0;
};

class DmemModel {
public:
    static constexpr unsigned MEMORY_SIZE = 4096;

    std::array<uint8_t, MEMORY_SIZE> bytes{};
    std::deque<Response> responses;
    int load_requests = 0;
    int store_requests = 0;

    void clear() {
        bytes.fill(0);
        responses.clear();
        load_requests = 0;
        store_requests = 0;
    }

    uint32_t read_word(uint32_t addr) const {
        uint32_t base = addr & ~3U;
        uint32_t value = 0;
        for (unsigned byte = 0; byte < 4; ++byte) {
            value |= static_cast<uint32_t>(
                         bytes[(base + byte) % MEMORY_SIZE])
                     << (8 * byte);
        }
        return value;
    }

    void write_word(uint32_t addr, uint32_t value) {
        uint32_t base = addr & ~3U;
        for (unsigned byte = 0; byte < 4; ++byte) {
            bytes[(base + byte) % MEMORY_SIZE] =
                static_cast<uint8_t>(value >> (8 * byte));
        }
    }

    bool drive_response(Vcore_program_test_top* dut, int cycle) {
        dut->dmem_resp_valid = 0;
        dut->dmem_resp_is_store = 0;
        dut->dmem_resp_data = 0;
        dut->dmem_resp_idx = 0;

        if (responses.empty() || responses.front().due_cycle > cycle)
            return false;

        const Response& response = responses.front();
        dut->dmem_resp_valid = 1;
        dut->dmem_resp_is_store = response.is_store;
        dut->dmem_resp_data = response.data;
        dut->dmem_resp_idx = response.idx;
        return true;
    }

    void accept_request(Vcore_program_test_top* dut, int cycle) {
        bool is_store = dut->dmem_req_is_store;
        uint32_t addr = dut->dmem_req_addr;
        uint32_t response_data = 0;

        if (is_store) {
            ++store_requests;
            uint32_t base = addr & ~3U;
            for (unsigned byte = 0; byte < 4; ++byte) {
                if (dut->dmem_req_mask & (1U << byte)) {
                    bytes[(base + byte) % MEMORY_SIZE] =
                        static_cast<uint8_t>(
                            dut->dmem_req_data >> (8 * byte));
                }
            }
        } else {
            ++load_requests;
            response_data = read_word(addr);
        }

        responses.push_back({
            cycle + 3,
            is_store,
            response_data,
            static_cast<unsigned>(dut->dmem_req_idx),
        });
    }

    void consume_response(bool drove_response) {
        if (drove_response)
            responses.pop_front();
    }
};

struct RunResult {
    bool finished = false;
    bool source_stable = true;
    bool saw_source_stall = false;
    int mispredicts = 0;
    std::vector<CommitRecord> commits;
    std::array<uint32_t, 32> last_write{};
    std::array<unsigned, 32> write_count{};
};

static void reset(Vcore_program_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_data = 0;
    dut->dmem_resp_idx = 0;

    for (int cycle = 0; cycle < 10; ++cycle) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
}

static bool drive_fetch(Vcore_program_test_top* dut,
                        const std::vector<Instruction>& program) {
    int first = static_cast<int>((dut->debug_pc - PROGRAM_BASE) >> 2);
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    for (int lane = 0; lane < CORE_WIDTH; ++lane) {
        int index = first + lane;
        if (first >= 0 && index < static_cast<int>(program.size())) {
            dut->fe_valid |= 1U << lane;
            dut->fe_insts[lane] = program[index].inst;
        }
    }
    dut->eval();
    return dut->fe_ready && dut->fe_valid != 0;
}

static RunResult run_program(Vcore_program_test_top* dut,
                             const std::vector<Instruction>& program,
                             DmemModel* memory) {
    reset(dut);
    RunResult result;
    int last_activity = 0;
    uint32_t stalled_pc = 0;
    unsigned stalled_valid = 0;
    std::array<uint32_t, CORE_WIDTH> stalled_insts{};
    bool holding_stalled_packet = false;

    for (int cycle = 0; cycle < 2000; ++cycle) {
        dut->dmem_req_ready = (cycle % 7) >= 2;
        bool drove_response = memory->drive_response(dut, cycle);
        bool fetch_fire = drive_fetch(dut, program);

        if (!dut->fe_ready && dut->fe_valid != 0) {
            result.saw_source_stall = true;
            if (holding_stalled_packet) {
                result.source_stable &= dut->debug_pc == stalled_pc;
                result.source_stable &= dut->fe_valid == stalled_valid;
                for (int lane = 0; lane < CORE_WIDTH; ++lane)
                    result.source_stable &=
                        dut->fe_insts[lane] == stalled_insts[lane];
            }
            holding_stalled_packet = true;
            stalled_pc = dut->debug_pc;
            stalled_valid = dut->fe_valid;
            for (int lane = 0; lane < CORE_WIDTH; ++lane)
                stalled_insts[lane] = dut->fe_insts[lane];
        } else if (dut->fe_ready) {
            holding_stalled_packet = false;
        }

        if (fetch_fire)
            last_activity = cycle;

        unsigned commit_mask = dut->commit_valids;
        if (commit_mask != 0)
            last_activity = cycle;
        for (int lane = 0; lane < CORE_WIDTH; ++lane) {
            if (!(commit_mask & (1U << lane)))
                continue;
            result.commits.push_back({
                packed_word(dut->commit_pcs, lane),
                packed_word(dut->commit_insts, lane),
                packed_field(dut->commit_rob_idx, lane, 6),
            });
        }

        if (dut->br_mispredict)
            ++result.mispredicts;

        unsigned write_mask = dut->rf_write_valid;
        for (int port = 0; port < 5; ++port) {
            if (!(write_mask & (1U << port)))
                continue;
            unsigned ldst = packed_field(dut->rf_write_ldst, port, 5);
            if (ldst == 0)
                continue;
            ++result.write_count[ldst];
            result.last_write[ldst] = dut->rf_write_data[port];
        }

        bool request_fire = dut->dmem_req_valid && dut->dmem_req_ready;
        if (request_fire) {
            memory->accept_request(dut, cycle);
            last_activity = cycle;
        }

        dut->clk = 1;
        dut->eval();
        dut->clk = 0;
        dut->eval();
        memory->consume_response(drove_response);

        int next = static_cast<int>((dut->debug_pc - PROGRAM_BASE) >> 2);
        bool source_finished =
            next < 0 || next >= static_cast<int>(program.size());
        if (source_finished && dut->rob_empty && dut->ldq_empty &&
            dut->stq_empty && memory->responses.empty() &&
            cycle - last_activity > 20) {
            result.finished = true;
            break;
        }
    }

    dut->fe_valid = 0;
    dut->dmem_resp_valid = 0;
    dut->eval();
    return result;
}

static bool check_commit_trace(
    const char* test_name, const RunResult& result,
    const std::vector<Instruction>& program,
    std::initializer_list<int> expected_indices) {
    bool passed = true;
    if (result.commits.size() != expected_indices.size()) {
        std::fprintf(stderr,
                     "%s commit count: got=%zu expected=%zu\n",
                     test_name, result.commits.size(),
                     expected_indices.size());
        passed = false;
    }

    size_t position = 0;
    for (int index : expected_indices) {
        if (position >= result.commits.size())
            break;
        uint32_t expected_pc = PROGRAM_BASE + 4U * index;
        uint32_t expected_inst = program[index].inst;
        const CommitRecord& actual = result.commits[position];
        if (actual.pc != expected_pc || actual.inst != expected_inst) {
            std::fprintf(
                stderr,
                "%s commit[%zu]: pc=0x%08x inst=0x%08x rob=%u, "
                "expected pc=0x%08x inst=0x%08x (%s)\n",
                test_name, position, actual.pc, actual.inst,
                actual.rob_idx, expected_pc, expected_inst,
                program[index].disasm);
            passed = false;
        }
        ++position;
    }
    return passed;
}

static bool test_disassembly_alu_block(Vcore_program_test_top* dut) {
    DmemModel memory;
    memory.clear();

    // Relocated verbatim from test.s, n2_add_w_test at 0x1c04b2e0.
    const std::vector<Instruction> program = {
        {0x1435bdec, "lu12i.w r12, 0x1adef"},
        {0x028c018c, "addi.w r12, r12, 0x300"},
        {0x14a3bacd, "lu12i.w r13, 0x51dd6"},
        {0x02a379ad, "addi.w r13, r13, -1826"},
        {0x14d978ab, "lu12i.w r11, 0x6cbc5"},
        {0x02af796b, "addi.w r11, r11, -1058"},
        {0x0010358a, "add.w r10, r12, r13"},
        {0x5c258d4b, "bne r10, r11, inst_error"},
        {NOP, "andi r0, r0, 0"},
    };
    RunResult result = run_program(dut, program, &memory);

    bool passed = true;
    passed &= check("test.s ALU block reaches quiescence", result.finished);
    passed &= check("test.s ALU block commit trace",
                    check_commit_trace(
                        "test.s ALU block", result, program,
                        {0, 1, 2, 3, 4, 5, 6, 7, 8}));
    passed &= check("test.s ALU block branch remains not taken",
                    result.mispredicts == 0);
    passed &= check("test.s ALU block result",
                    result.last_write[10] == 0x6cbc4bde);
    passed &= check("test.s ALU block expected operand",
                    result.last_write[11] == 0x6cbc4bde);
    passed &= check(
        "test.s ALU block source remains stable if backpressured",
        result.source_stable);

    if (passed)
        std::printf("PASS: test.s ALU basic block\n");
    return passed;
}

static bool test_conditional_control_flow(Vcore_program_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0xdeadbeef);

    const std::vector<Instruction> program = {
        {addi_w(1, 0, 0x100), "addi.w r1, r0, 0x100"},
        {addi_w(2, 0, 0x55), "addi.w r2, r0, 0x55"},
        {addi_w(3, 0, 1), "addi.w r3, r0, 1"},
        {addi_w(4, 0, 1), "addi.w r4, r0, 1"},
        {beq(3, 4, 12), "beq r3, r4, +12"},
        {st_w(2, 1, 0), "st.w r2, r1, 0 (wrong path)"},
        {addi_w(5, 0, 99), "addi.w r5, r0, 99 (wrong path)"},
        {addi_w(5, 0, 7), "addi.w r5, r0, 7"},
        {bne(3, 4, 8), "bne r3, r4, +8"},
        {addi_w(6, 0, 9), "addi.w r6, r0, 9"},
        {ld_w(7, 1, 0), "ld.w r7, r1, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    RunResult result = run_program(dut, program, &memory);

    bool passed = true;
    passed &= check("conditional flow reaches quiescence", result.finished);
    passed &= check("conditional flow commit trace",
                    check_commit_trace(
                        "conditional flow", result, program,
                        {0, 1, 2, 3, 4, 7, 8, 9, 10, 11}));
    passed &= check("conditional flow has one redirect",
                    result.mispredicts == 1);
    passed &= check("conditional target value",
                    result.last_write[5] == 7);
    passed &= check("not-taken fall-through value",
                    result.last_write[6] == 9);
    passed &= check("wrong-path store suppressed",
                    memory.store_requests == 0 &&
                    memory.read_word(0x100) == 0xdeadbeef);
    passed &= check("target load observes original memory",
                    memory.load_requests == 1 &&
                    result.last_write[7] == 0xdeadbeef);

    if (passed)
        std::printf("PASS: conditional PC flow\n");
    return passed;
}

static bool test_unconditional_b(Vcore_program_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0x11223344);

    // 0x50001400 is used repeatedly by n20_b_test in test.s.
    const std::vector<Instruction> program = {
        {addi_w(1, 0, 0x100), "addi.w r1, r0, 0x100"},
        {addi_w(2, 0, 0x66), "addi.w r2, r0, 0x66"},
        {0x50001400, "b +20"},
        {st_w(2, 1, 0), "st.w r2, r1, 0 (wrong path)"},
        {addi_w(10, 0, 0x111), "addi.w r10, r0, 0x111 (wrong path)"},
        {addi_w(10, 0, 0x222), "addi.w r10, r0, 0x222 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {addi_w(10, 0, 7), "addi.w r10, r0, 7"},
        {ld_w(11, 1, 0), "ld.w r11, r1, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    RunResult result = run_program(dut, program, &memory);

    bool passed = true;
    passed &= check("b flow reaches quiescence", result.finished);
    passed &= check("b commit trace",
                    check_commit_trace(
                        "b flow", result, program, {0, 1, 2, 7, 8, 9}));
    passed &= check("b causes one redirect", result.mispredicts == 1);
    passed &= check("b suppresses wrong-path store",
                    memory.store_requests == 0 &&
                    memory.read_word(0x100) == 0x11223344);
    passed &= check("b target executes", result.last_write[10] == 7);
    passed &= check("b target load observes original memory",
                    result.last_write[11] == 0x11223344);

    if (passed)
        std::printf("PASS: unconditional b PC flow\n");
    return passed;
}

static bool test_bl_link(Vcore_program_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0x55667788);

    // 0x54001800 is the first control transfer in n18_bl_test.
    const std::vector<Instruction> program = {
        {addi_w(2, 0, 0x100), "addi.w r2, r0, 0x100"},
        {addi_w(3, 0, 0x77), "addi.w r3, r0, 0x77"},
        {0x54001800, "bl +24"},
        {st_w(3, 2, 0), "st.w r3, r2, 0 (wrong path)"},
        {addi_w(10, 0, 1), "addi.w r10, r0, 1 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {addi_w(10, 1, 0), "addi.w r10, r1, 0"},
        {ld_w(11, 2, 0), "ld.w r11, r2, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    RunResult result = run_program(dut, program, &memory);
    uint32_t expected_link = PROGRAM_BASE + 3 * 4;

    bool passed = true;
    passed &= check("bl flow reaches quiescence", result.finished);
    passed &= check("bl commit trace",
                    check_commit_trace(
                        "bl flow", result, program, {0, 1, 2, 8, 9, 10}));
    passed &= check("bl causes one redirect", result.mispredicts == 1);
    passed &= check("bl writes PC+4 to r1",
                    result.last_write[1] == expected_link);
    passed &= check("bl target observes link",
                    result.last_write[10] == expected_link);
    passed &= check("bl suppresses wrong-path store",
                    memory.store_requests == 0 &&
                    memory.read_word(0x100) == 0x55667788);

    if (passed)
        std::printf("PASS: bl link and PC flow\n");
    return passed;
}

static bool test_jirl_link(Vcore_program_test_top* dut) {
    DmemModel memory;
    memory.clear();
    memory.write_word(0x100, 0xaabbccdd);
    uint32_t target_pc = PROGRAM_BASE + 9 * 4;

    const std::vector<Instruction> program = {
        {addi_w(2, 0, 0x100), "addi.w r2, r0, 0x100"},
        {addi_w(3, 0, 0x66), "addi.w r3, r0, 0x66"},
        {lu12i_w(13, target_pc >> 12), "lu12i.w r13, target[31:12]"},
        {ori(13, 13, target_pc & 0xfff), "ori r13, r13, target[11:0]"},
        {jirl(1, 13, 0), "jirl r1, r13, 0"},
        {st_w(3, 2, 0), "st.w r3, r2, 0 (wrong path)"},
        {addi_w(10, 0, 1), "addi.w r10, r0, 1 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {addi_w(10, 1, 0), "addi.w r10, r1, 0"},
        {ld_w(11, 2, 0), "ld.w r11, r2, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    RunResult result = run_program(dut, program, &memory);
    uint32_t expected_link = PROGRAM_BASE + 5 * 4;

    bool passed = true;
    passed &= check("jirl flow reaches quiescence", result.finished);
    passed &= check("jirl commit trace",
                    check_commit_trace(
                        "jirl flow", result, program,
                        {0, 1, 2, 3, 4, 9, 10, 11}));
    passed &= check("jirl causes one redirect", result.mispredicts == 1);
    passed &= check("jirl writes PC+4 to r1",
                    result.last_write[1] == expected_link);
    passed &= check("jirl target observes link",
                    result.last_write[10] == expected_link);
    passed &= check("jirl suppresses wrong-path store",
                    memory.store_requests == 0 &&
                    memory.read_word(0x100) == 0xaabbccdd);
    passed &= check("jirl target load observes original memory",
                    result.last_write[11] == 0xaabbccdd);

    if (passed)
        std::printf("PASS: jirl link and PC flow\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_program_test_top;

    bool passed = true;
    passed &= test_disassembly_alu_block(dut);
    passed &= test_conditional_control_flow(dut);
    passed &= test_unconditional_b(dut);
    passed &= test_bl_link(dut);
    passed &= test_jirl_link(dut);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_program\n");
    return passed ? 0 : 1;
}
