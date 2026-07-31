#include "Vcore_ifu_test_top.h"
#include "verilated.h"

#include <algorithm>
#include <array>
#include <cstdint>
#include <cstdio>
#include <deque>
#include <string>
#include <vector>

static constexpr int FETCH_WIDTH = 4;
static constexpr int COMMIT_WIDTH = 2;
static constexpr uint32_t PROGRAM_BASE = 0x1c050000U;
static constexpr uint32_t NOP = 0x03400000U;

static constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t mem_i12(uint32_t opcode, unsigned rd,
                                  unsigned rj, int imm12) {
    return opcode |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t ld_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28800000U, rd, rj, imm12);
}

static constexpr uint32_t st_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29800000U, rd, rj, imm12);
}

static constexpr uint32_t r_op(uint32_t opcode, unsigned rd,
                               unsigned rj, unsigned rk) {
    return opcode | ((rk & 0x1fU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t mul_w(unsigned rd, unsigned rj, unsigned rk) {
    return r_op(0x001c0000U, rd, rj, rk);
}

static constexpr uint32_t div_w(unsigned rd, unsigned rj, unsigned rk) {
    return r_op(0x00200000U, rd, rj, rk);
}

static constexpr uint32_t branch_i26(uint32_t opcode, int byte_offset) {
    unsigned imm26 =
        static_cast<unsigned>(byte_offset >> 2) & 0x03ffffffU;
    return opcode | ((imm26 & 0xffffU) << 10) | (imm26 >> 16);
}

static constexpr uint32_t b(int byte_offset) {
    return branch_i26(0x50000000U, byte_offset);
}

static constexpr uint32_t beq(unsigned rj, unsigned rd,
                              int byte_offset) {
    return 0x58000000U |
           ((static_cast<unsigned>(byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) & ((1U << width) - 1U);
}

static uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

static void tick(Vcore_ifu_test_top* dut) {
    dut->clk = 0;
    dut->eval();
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

static void reset(Vcore_ifu_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->imem_req_ready = 0;
    dut->imem_resp_valid = 0;
    dut->dmem_req_ready = 0;
    dut->dmem_resp_valid = 0;
    dut->dmem_resp_is_store = 0;
    dut->dmem_resp_data = 0;
    dut->dmem_resp_idx = 0;
    for (int lane = 0; lane < FETCH_WIDTH; ++lane)
        dut->imem_resp_insts[lane] = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
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

class ImemModel {
public:
    ImemModel(const std::vector<Instruction>& program,
              bool delay_first_second_bundle)
        : program_(program),
          delay_first_second_bundle_(delay_first_second_bundle) {}

    void drive(Vcore_ifu_test_top* dut, int cycle) {
        dut->imem_req_ready =
            ((cycle % 7) != 1) && ((cycle % 7) != 2);

        if (pending_ && !response_active_ && delay_ == 0) {
            response_active_ = true;
            for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
                uint32_t pc = pending_addr_ + lane * 4U;
                int index = static_cast<int>((pc - PROGRAM_BASE) >> 2);
                response_[lane] =
                    index >= 0 && index < static_cast<int>(program_.size())
                        ? program_[index].inst
                        : NOP;
            }
        }

        dut->imem_resp_valid = response_active_;
        for (int lane = 0; lane < FETCH_WIDTH; ++lane)
            dut->imem_resp_insts[lane] = response_[lane];
    }

    void advance(bool request_fire, uint32_t request_addr,
                 bool response_fire) {
        if (response_fire) {
            response_active_ = false;
            pending_ = false;
        }

        bool accepted_new_request = false;
        if (request_fire) {
            accepted_new_request = true;
            requests.push_back(request_addr);

            uint32_t end_pc =
                PROGRAM_BASE + static_cast<uint32_t>(program_.size() * 4U);
            if (request_addr >= end_pc) {
                eof_requested = true;
            } else {
                pending_ = true;
                pending_addr_ = request_addr;
                int occurrence = static_cast<int>(
                    std::count(requests.begin(), requests.end(),
                               request_addr));
                if (delay_first_second_bundle_ &&
                    request_addr == PROGRAM_BASE + 16U &&
                    occurrence == 1) {
                    delay_ = 20;
                } else {
                    delay_ = 1 + static_cast<int>(requests.size() % 3U);
                }
            }
        }

        if (!accepted_new_request && pending_ && !response_active_ &&
            delay_ > 0) {
            --delay_;
        }
    }

    std::vector<uint32_t> requests;
    bool eof_requested = false;

private:
    const std::vector<Instruction>& program_;
    bool delay_first_second_bundle_ = false;
    bool pending_ = false;
    bool response_active_ = false;
    uint32_t pending_addr_ = 0;
    int delay_ = 0;
    std::array<uint32_t, FETCH_WIDTH> response_{};
};

struct DmemResponse {
    int due_cycle = 0;
    bool is_store = false;
    uint32_t data = 0;
    unsigned idx = 0;
};

struct DmemRequest {
    bool is_store = false;
    uint32_t addr = 0;
    uint32_t data = 0;
    unsigned mask = 0;
    unsigned idx = 0;
};

class DmemModel {
public:
    static constexpr unsigned MEMORY_SIZE = 4096;

    void clear() {
        bytes.fill(0);
        responses.clear();
        load_requests = 0;
        store_requests = 0;
        ready_low_until = 0;
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
        for (unsigned byte = 0; byte < 4; ++byte)
            bytes[(base + byte) % MEMORY_SIZE] =
                static_cast<uint8_t>(value >> (8 * byte));
    }

    void drive(Vcore_ifu_test_top* dut, int cycle) {
        dut->dmem_req_ready =
            cycle >= ready_low_until && (cycle % 5) != 2;
        dut->dmem_resp_valid = 0;
        dut->dmem_resp_is_store = 0;
        dut->dmem_resp_data = 0;
        dut->dmem_resp_idx = 0;

        if (!responses.empty() && responses.front().due_cycle <= cycle) {
            const DmemResponse& response = responses.front();
            dut->dmem_resp_valid = 1;
            dut->dmem_resp_is_store = response.is_store;
            dut->dmem_resp_data = response.data;
            dut->dmem_resp_idx = response.idx;
        }
    }

    void advance(int cycle, bool request_fire,
                 const DmemRequest& request, bool response_sent) {
        if (response_sent)
            responses.pop_front();

        if (!request_fire)
            return;

        if (request.is_store) {
            ++store_requests;
            uint32_t old = read_word(request.addr);
            uint32_t next = old;
            for (unsigned byte = 0; byte < 4; ++byte) {
                if (request.mask & (1U << byte)) {
                    next &= ~(0xffU << (8 * byte));
                    next |= ((request.data >> (8 * byte)) & 0xffU)
                            << (8 * byte);
                }
            }
            write_word(request.addr, next);
            responses.push_back(
                {cycle + 2, true, 0, request.idx});
        } else {
            ++load_requests;
            responses.push_back(
                {cycle + 2, false, read_word(request.addr),
                 request.idx});
        }
    }

    bool idle() const {
        return responses.empty();
    }

    bool forcing_backpressure(int cycle) const {
        return cycle < ready_low_until;
    }

    std::array<uint8_t, MEMORY_SIZE> bytes{};
    std::deque<DmemResponse> responses;
    int load_requests = 0;
    int store_requests = 0;
    int ready_low_until = 0;
};

struct RunResult {
    bool finished = false;
    int redirects = 0;
    std::vector<CommitRecord> commits;
    std::array<uint32_t, 32> last_write{};
    std::vector<uint32_t> imem_requests;
    int unique_dispatches = 0;
    int unique_multi_lane_dispatches = 0;
    int unique_nonempty_rob_dispatches = 0;
    bool unique_dispatch_violation = false;
    bool packet_stable_while_stalled = true;
    int packet_stall_cycles = 0;
    int partial_packet_stall_cycles = 0;
    int dmem_backpressure_packet_stall_cycles = 0;
    int max_packet_stall_cycles = 0;
    bool redirect_with_buffered_packet = false;
    bool flush_with_buffered_packet = false;
};

static RunResult run_program(Vcore_ifu_test_top* dut,
                             const std::vector<Instruction>& program,
                             DmemModel* dmem,
                             bool delay_first_second_bundle) {
    reset(dut);
    ImemModel imem(program, delay_first_second_bundle);
    RunResult result;
    int quiet_cycles = 0;
    bool tracking_stalled_packet = false;
    int current_packet_stall_cycles = 0;
    unsigned stalled_packet_valid = 0;
    std::array<uint32_t, FETCH_WIDTH> stalled_packet_pc{};
    std::array<uint32_t, FETCH_WIDTH> stalled_packet_inst{};

    for (int cycle = 0; cycle < 2000; ++cycle) {
        imem.drive(dut, cycle);
        dmem->drive(dut, cycle);
        dut->eval();

        bool imem_request_fire =
            dut->imem_req_valid && dut->imem_req_ready;
        uint32_t imem_request_addr = dut->imem_req_addr;
        bool imem_response_fire =
            dut->imem_resp_valid && dut->imem_resp_ready;
        bool dmem_request_fire =
            dut->dmem_req_valid && dut->dmem_req_ready;
        DmemRequest dmem_request = {
            static_cast<bool>(dut->dmem_req_is_store),
            dut->dmem_req_addr,
            dut->dmem_req_data,
            dut->dmem_req_mask,
            dut->dmem_req_idx,
        };
        bool dmem_response_sent = dut->dmem_resp_valid;

        if (dut->redirect_valid)
            ++result.redirects;
        if (dut->redirect_valid &&
            (dut->core_packet_valid != 0 ||
             dut->core_packet_partial))
            result.redirect_with_buffered_packet = true;
        if (dut->core_flush_valid && dut->core_packet_valid != 0)
            result.flush_with_buffered_packet = true;

        if (dut->core_dis_unique) {
            ++result.unique_dispatches;
            unsigned fired = dut->core_dis_fire;
            if (__builtin_popcount(fired) != 1)
                ++result.unique_multi_lane_dispatches;
            if (!dut->rob_empty)
                ++result.unique_nonempty_rob_dispatches;
            if (__builtin_popcount(fired) != 1 || !dut->rob_empty)
                result.unique_dispatch_violation = true;
        }

        bool packet_stalled =
            dut->core_packet_valid != 0 &&
            dut->core_dec_fire == 0 &&
            !dut->redirect_valid && !dut->core_flush_valid;
        if (packet_stalled) {
            ++result.packet_stall_cycles;
            ++current_packet_stall_cycles;
            result.max_packet_stall_cycles =
                std::max(result.max_packet_stall_cycles,
                         current_packet_stall_cycles);
            if (dut->core_packet_valid != 0xf)
                ++result.partial_packet_stall_cycles;
            if (dmem->forcing_backpressure(cycle))
                ++result.dmem_backpressure_packet_stall_cycles;

            if (tracking_stalled_packet) {
                result.packet_stable_while_stalled &=
                    stalled_packet_valid ==
                    static_cast<unsigned>(dut->core_packet_valid);
                for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
                    result.packet_stable_while_stalled &=
                        stalled_packet_pc[lane] ==
                        dut->core_packet_pc[lane];
                    result.packet_stable_while_stalled &=
                        stalled_packet_inst[lane] ==
                        dut->core_packet_inst[lane];
                }
            }

            stalled_packet_valid = dut->core_packet_valid;
            for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
                stalled_packet_pc[lane] = dut->core_packet_pc[lane];
                stalled_packet_inst[lane] =
                    dut->core_packet_inst[lane];
            }
            tracking_stalled_packet = true;
        } else {
            tracking_stalled_packet = false;
            current_packet_stall_cycles = 0;
        }

        for (int lane = 0; lane < COMMIT_WIDTH; ++lane) {
            if ((dut->commit_valid & (1U << lane)) == 0)
                continue;
            result.commits.push_back(
                {packed_word(dut->commit_pc, lane),
                 packed_word(dut->commit_inst, lane),
                 packed_field(dut->commit_rob_idx, lane, 6)});
        }

        for (int port = 0; port < 5; ++port) {
            if ((dut->rf_write_valid & (1U << port)) == 0)
                continue;
            unsigned ldst =
                packed_field(dut->rf_write_ldst, port, 5);
            if (ldst != 0)
                result.last_write[ldst] = dut->rf_write_data[port];
        }

        unsigned commit_mask = dut->commit_valid;

        tick(dut);

        imem.advance(imem_request_fire, imem_request_addr,
                     imem_response_fire);
        dmem->advance(cycle, dmem_request_fire, dmem_request,
                      dmem_response_sent);

        bool quiet = imem.eof_requested && dut->rob_empty &&
                     dmem->idle() && commit_mask == 0;
        quiet_cycles = quiet ? quiet_cycles + 1 : 0;
        if (quiet_cycles >= 30) {
            result.finished = true;
            break;
        }
    }

    result.imem_requests = imem.requests;
    return result;
}

static bool check_commit_trace(
    const char* name, const RunResult& result,
    const std::vector<Instruction>& program,
    const std::vector<int>& expected_indices) {
    bool passed = true;
    if (result.commits.size() != expected_indices.size()) {
        std::fprintf(stderr,
                     "%s commit count: got=%zu expected=%zu\n",
                     name, result.commits.size(), expected_indices.size());
        passed = false;
    }

    size_t count =
        std::min(result.commits.size(), expected_indices.size());
    for (size_t i = 0; i < count; ++i) {
        int index = expected_indices[i];
        uint32_t expected_pc = PROGRAM_BASE + index * 4U;
        uint32_t expected_inst = program[index].inst;
        if (result.commits[i].pc != expected_pc ||
            result.commits[i].inst != expected_inst) {
            std::fprintf(
                stderr,
                "%s commit[%zu]: pc=0x%08x inst=0x%08x rob=%u, "
                "expected pc=0x%08x inst=0x%08x (%s)\n",
                name, i, result.commits[i].pc,
                result.commits[i].inst, result.commits[i].rob_idx,
                expected_pc, expected_inst, program[index].disasm);
            passed = false;
        }
    }
    return passed;
}

static bool test_four_wide_sequential(Vcore_ifu_test_top* dut) {
    const std::vector<Instruction> program = {
        {addi_w(1, 0, 1), "addi.w r1, r0, 1"},
        {addi_w(2, 0, 2), "addi.w r2, r0, 2"},
        {addi_w(3, 0, 3), "addi.w r3, r0, 3"},
        {addi_w(4, 0, 4), "addi.w r4, r0, 4"},
        {addi_w(5, 0, 5), "addi.w r5, r0, 5"},
        {addi_w(6, 0, 6), "addi.w r6, r0, 6"},
        {addi_w(7, 0, 7), "addi.w r7, r0, 7"},
        {addi_w(8, 0, 8), "addi.w r8, r0, 8"},
        {addi_w(9, 0, 9), "addi.w r9, r0, 9"},
        {addi_w(10, 0, 10), "addi.w r10, r0, 10"},
        {addi_w(11, 0, 11), "addi.w r11, r0, 11"},
        {addi_w(12, 0, 12), "addi.w r12, r0, 12"},
    };
    DmemModel dmem;
    dmem.clear();
    RunResult result = run_program(dut, program, &dmem, false);

    bool passed = true;
    passed &= check("four-wide sequential reaches quiescence",
                    result.finished);
    passed &= check(
        "four-wide sequential commit trace",
        check_commit_trace("four-wide sequential", result, program,
                           {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}));
    passed &= check("four-wide sequential preserves lane 2",
                    result.last_write[3] == 3);
    passed &= check("four-wide sequential preserves lane 3",
                    result.last_write[4] == 4);
    passed &= check("four-wide sequential reaches final result",
                    result.last_write[12] == 12);

    if (passed)
        std::printf("PASS: core_ifu four-wide sequential flow\n");
    return passed;
}

static bool test_redirect_and_stale_response(
    Vcore_ifu_test_top* dut) {
    const std::vector<Instruction> program = {
        {addi_w(1, 0, 0x100), "addi.w r1, r0, 0x100"},
        {ld_w(2, 1, 0), "ld.w r2, r1, 0"},
        {beq(2, 2, 20), "beq r2, r2, +20"},
        {st_w(0, 1, 0), "st.w r0, r1, 0 (wrong path)"},
        {addi_w(5, 0, 2), "addi.w r5, r0, 2 (wrong path)"},
        {addi_w(5, 0, 3), "addi.w r5, r0, 3 (wrong path)"},
        {addi_w(5, 0, 4), "addi.w r5, r0, 4 (wrong path)"},
        {addi_w(10, 0, 7), "addi.w r10, r0, 7"},
        {ld_w(11, 1, 0), "ld.w r11, r1, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    dmem.write_word(0x100, 0x12345678U);
    RunResult result = run_program(dut, program, &dmem, true);

    int second_bundle_requests = static_cast<int>(
        std::count(result.imem_requests.begin(),
                   result.imem_requests.end(), PROGRAM_BASE + 16U));

    bool passed = true;
    passed &= check("core IFU redirect reaches quiescence",
                    result.finished);
    passed &= check(
        "core IFU redirect commit trace",
        check_commit_trace("core IFU redirect", result, program,
                           {0, 1, 2, 7, 8, 9, 10, 11}));
    passed &= check("core IFU observes one redirect",
                    result.redirects == 1);
    passed &= check("core IFU re-requests stale target bundle",
                    second_bundle_requests == 2);
    passed &= check("core IFU suppresses wrong-path store",
                    dmem.store_requests == 0 &&
                    dmem.read_word(0x100) == 0x12345678U);
    passed &= check("core IFU executes compacted target lane",
                    result.last_write[10] == 7);
    bool load_passed =
        dmem.load_requests == 2 &&
        result.last_write[11] == 0x12345678U;
    if (!load_passed) {
        std::fprintf(stderr,
                     "core IFU target load: requests=%d r11=0x%08x "
                     "memory=0x%08x\n",
                     dmem.load_requests, result.last_write[11],
                     dmem.read_word(0x100));
    }
    passed &= check("core IFU target load receives memory data",
                    load_passed);

    if (passed)
        std::printf("PASS: core_ifu redirect and stale response\n");
    return passed;
}

static bool test_unique_in_trailing_lanes(
    Vcore_ifu_test_top* dut) {
    const std::vector<Instruction> program = {
        {addi_w(1, 0, 6), "addi.w r1, r0, 6"},
        {addi_w(2, 0, 7), "addi.w r2, r0, 7"},
        {mul_w(3, 1, 2), "mul.w r3, r1, r2 (unique lane2)"},
        {addi_w(4, 3, 1), "addi.w r4, r3, 1"},
        {addi_w(5, 0, 2), "addi.w r5, r0, 2"},
        {addi_w(6, 0, 3), "addi.w r6, r0, 3"},
        {addi_w(7, 0, 4), "addi.w r7, r0, 4"},
        {div_w(8, 3, 1), "div.w r8, r3, r1 (unique lane3)"},
        {addi_w(9, 8, 1), "addi.w r9, r8, 1"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    RunResult result = run_program(dut, program, &dmem, false);

    bool passed = true;
    passed &= check("trailing unique reaches quiescence",
                    result.finished);
    passed &= check(
        "trailing unique commit trace",
        check_commit_trace("trailing unique", result, program,
                           {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11}));
    passed &= check("lane2/lane3 unique dispatch exactly twice",
                    result.unique_dispatches == 2);
    if (result.unique_dispatch_violation) {
        std::fprintf(
            stderr,
            "trailing unique violations: multi_lane=%d nonempty_rob=%d\n",
            result.unique_multi_lane_dispatches,
            result.unique_nonempty_rob_dispatches);
    }
    passed &= check("unique dispatch remains exclusive with empty ROB",
                    !result.unique_dispatch_violation);
    passed &= check("trailing packet stalls after prefix drains",
                    result.partial_packet_stall_cycles > 0 &&
                    result.max_packet_stall_cycles >= 2);
    passed &= check("trailing packet remains stable while unique waits",
                    result.packet_stable_while_stalled);
    passed &= check("lane2 multiply result", result.last_write[3] == 42);
    passed &= check("lane2 younger dependency", result.last_write[4] == 43);
    passed &= check("lane3 divide result", result.last_write[8] == 7);
    passed &= check("lane3 younger dependency", result.last_write[9] == 8);

    if (passed)
        std::printf("PASS: core_ifu trailing unique lanes\n");
    return passed;
}

static bool test_lane2_branch_flush(
    Vcore_ifu_test_top* dut) {
    const std::vector<Instruction> program = {
        {addi_w(1, 0, 0x100), "addi.w r1, r0, 0x100"},
        {addi_w(2, 0, 0x55), "addi.w r2, r0, 0x55"},
        {b(16), "b +16 (lane2)"},
        {st_w(2, 1, 0), "st.w r2, r1, 0 (same-packet wrong path)"},
        {addi_w(12, 0, 1), "addi.w r12, r0, 1 (wrong path)"},
        {addi_w(12, 0, 2), "addi.w r12, r0, 2 (wrong path)"},
        {addi_w(10, 0, 7), "addi.w r10, r0, 7"},
        {ld_w(11, 1, 0), "ld.w r11, r1, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    dmem.write_word(0x100, 0xa5a55a5aU);
    RunResult result = run_program(dut, program, &dmem, false);

    bool passed = true;
    passed &= check("lane2 branch reaches quiescence", result.finished);
    passed &= check(
        "lane2 branch commit trace",
        check_commit_trace("lane2 branch", result, program,
                           {0, 1, 2, 6, 7, 8, 9, 10, 11}));
    passed &= check("lane2 branch redirects once", result.redirects == 1);
    passed &= check("lane2 branch suppresses same-packet store",
                    dmem.store_requests == 0 &&
                    dmem.read_word(0x100) == 0xa5a55a5aU);
    passed &= check("lane2 branch suppresses younger register writes",
                    result.last_write[12] == 0);
    passed &= check("lane2 branch target executes",
                    result.last_write[10] == 7 &&
                    result.last_write[11] == 0xa5a55a5aU);

    if (passed)
        std::printf("PASS: core_ifu lane2 branch flush\n");
    return passed;
}

static bool test_redirect_clears_buffered_suffix(
    Vcore_ifu_test_top* dut) {
    const std::vector<Instruction> program = {
        {b(16), "b +16 (lane0)"},
        {mul_w(20, 0, 0), "mul.w r20, r0, r0 (buffered wrong path)"},
        {st_w(0, 0, 0), "st.w r0, r0, 0 (buffered wrong path)"},
        {addi_w(21, 0, 99), "addi.w r21, r0, 99 (wrong path)"},
        {addi_w(10, 0, 7), "addi.w r10, r0, 7"},
        {addi_w(11, 10, 1), "addi.w r11, r10, 1"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    dmem.write_word(0, 0x12345678U);
    RunResult result = run_program(dut, program, &dmem, false);

    bool passed = true;
    passed &= check("buffered suffix redirect reaches quiescence",
                    result.finished);
    passed &= check(
        "buffered suffix redirect commit trace",
        check_commit_trace("buffered suffix redirect", result, program,
                           {0, 4, 5, 6, 7}));
    if (!result.redirect_with_buffered_packet ||
        result.unique_dispatches != 0) {
        std::fprintf(
            stderr,
            "buffered suffix observation: redirects=%d "
            "unique_dispatches=%d packet_stalls=%d\n",
            result.redirects, result.unique_dispatches,
            result.packet_stall_cycles);
    }
    passed &= check("redirect occurs while suffix remains buffered",
                    result.redirect_with_buffered_packet);
    passed &= check("buffered wrong-path unique never dispatches",
                    result.unique_dispatches == 0);
    passed &= check("buffered wrong-path store has no side effect",
                    dmem.store_requests == 0 &&
                    dmem.read_word(0) == 0x12345678U);
    passed &= check("buffered wrong-path ALU write is suppressed",
                    result.last_write[21] == 0);
    passed &= check("redirect target executes",
                    result.last_write[10] == 7 &&
                    result.last_write[11] == 8);

    if (passed)
        std::printf("PASS: core_ifu buffered suffix redirect\n");
    return passed;
}

static bool test_backend_backpressure_packet_stability(
    Vcore_ifu_test_top* dut) {
    std::vector<Instruction> program = {
        {addi_w(1, 0, 0x100), "addi.w r1, r0, 0x100"},
    };
    for (int index = 0; index < 24; ++index) {
        program.push_back({
            ld_w(3 + index, 1, index * 4),
            "ld.w pressure stream",
        });
    }
    program.push_back({NOP, "andi r0, r0, 0"});
    program.push_back({NOP, "andi r0, r0, 0"});
    program.push_back({NOP, "andi r0, r0, 0"});

    DmemModel dmem;
    dmem.clear();
    dmem.ready_low_until = 160;
    for (int index = 0; index < 24; ++index)
        dmem.write_word(0x100 + index * 4,
                        0x1000U + static_cast<uint32_t>(index));

    RunResult result = run_program(dut, program, &dmem, false);
    std::vector<int> expected_indices;
    for (int index = 0; index < static_cast<int>(program.size()); ++index)
        expected_indices.push_back(index);

    bool passed = true;
    passed &= check("backend pressure reaches quiescence",
                    result.finished);
    passed &= check(
        "backend pressure commit trace",
        check_commit_trace("backend pressure", result, program,
                           expected_indices));
    passed &= check("backend pressure stalls a buffered fetch packet",
                    result.dmem_backpressure_packet_stall_cycles > 0 &&
                    result.max_packet_stall_cycles >= 2);
    passed &= check("fetch packet is stable across backend pressure",
                    result.packet_stable_while_stalled);
    passed &= check("backend pressure does not duplicate loads",
                    dmem.load_requests == 24);
    passed &= check("backend pressure preserves final load result",
                    result.last_write[26] == 0x1017U);

    if (passed)
        std::printf("PASS: core_ifu backend backpressure stability\n");
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_ifu_test_top;

    bool passed = true;
    passed &= test_four_wide_sequential(dut);
    passed &= test_redirect_and_stale_response(dut);
    passed &= test_unique_in_trailing_lanes(dut);
    passed &= test_lane2_branch_flush(dut);
    passed &= test_redirect_clears_buffered_suffix(dut);
    passed &= test_backend_backpressure_packet_stability(dut);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_ifu\n");
    return passed ? 0 : 1;
}
