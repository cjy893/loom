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
static constexpr uint32_t ERTN = 0x06483800U;
static constexpr uint32_t SYSCALL = 0x002b0011U;
static constexpr unsigned CSR_CRMD = 0x000;
static constexpr unsigned CSR_ECFG = 0x004;
static constexpr unsigned CSR_ERA = 0x006;
static constexpr unsigned CSR_EENTRY = 0x00c;
static constexpr unsigned CRMD_DA = 1U << 3;
static constexpr unsigned CRMD_IE = 1U << 2;
static constexpr unsigned HW_IRQ0_LIE = 1U << 2;

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

static constexpr uint32_t bl(int byte_offset) {
    return branch_i26(0x54000000U, byte_offset);
}

static constexpr uint32_t pcaddu12i(unsigned rd, int imm20) {
    return 0x1c000000U |
           ((static_cast<unsigned>(imm20) & 0xfffffU) << 5) |
           (rd & 0x1fU);
}

static constexpr uint32_t jirl(unsigned rd, unsigned rj,
                               int byte_offset) {
    unsigned imm16 =
        static_cast<unsigned>(byte_offset >> 2) & 0xffffU;
    return 0x4c000000U | (imm16 << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t csr(unsigned rd, unsigned rj,
                              unsigned addr) {
    return 0x04000000U | ((addr & 0x3fffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t csrrd(unsigned rd, unsigned addr) {
    return csr(rd, 0, addr);
}

static constexpr uint32_t csrwr(unsigned rd, unsigned addr) {
    return csr(rd, 1, addr);
}

static constexpr uint32_t beq(unsigned rj, unsigned rd,
                              int byte_offset) {
    return 0x58000000U |
           ((static_cast<unsigned>(byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t bne(unsigned rj, unsigned rd,
                              int byte_offset) {
    return 0x5c000000U |
           ((static_cast<unsigned>(byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static constexpr uint32_t blt(unsigned rj, unsigned rd,
                              int byte_offset) {
    return 0x60000000U |
           ((static_cast<unsigned>(byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

static unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) & ((1U << width) - 1U);
}

static uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

static uint32_t mix32(uint32_t value) {
    value ^= value >> 16;
    value *= 0x7feb352dU;
    value ^= value >> 15;
    value *= 0x846ca68bU;
    value ^= value >> 16;
    return value;
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
    dut->fetch_allow = 1;
    dut->hw_irq = 0;
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

struct PredictionRecord {
    uint32_t pc = 0;
    uint32_t next_pc = 0;
};

struct BpdUpdateRecord {
    uint32_t pc = 0;
    uint32_t target = 0;
    bool is_mispredict = false;
    bool is_repair = false;
    bool is_jirl = false;
};

class ImemModel {
public:
    ImemModel(const std::vector<Instruction>& program,
              bool delay_first_second_bundle)
        : program_(program),
          delay_first_second_bundle_(delay_first_second_bundle) {}

    void drive(Vcore_ifu_test_top* dut, int cycle) {
        if (randomized_timing_) {
            uint32_t sample = mix32(
                timing_seed_ ^ (uint32_t(cycle) * 0x9e3779b9U));
            dut->imem_req_ready = (sample % 4U) != 0;
        } else {
            dut->imem_req_ready =
                ((cycle % 7) != 1) && ((cycle % 7) != 2);
        }

        if (pending_ && !eof_pending_ && !response_active_ &&
            delay_ == 0) {
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
            eof_pending_ = false;
        }

        bool accepted_new_request = false;
        if (request_fire) {
            accepted_new_request = true;
            requests.push_back(request_addr);

            uint32_t end_pc =
                PROGRAM_BASE + static_cast<uint32_t>(program_.size() * 4U);
            if (request_addr >= end_pc) {
                eof_requested = true;
                pending_ = true;
                pending_addr_ = request_addr;
                eof_pending_ = true;
            } else {
                pending_ = true;
                pending_addr_ = request_addr;
                eof_pending_ = false;
                int occurrence = static_cast<int>(
                    std::count(requests.begin(), requests.end(),
                               request_addr));
                if (delay_first_second_bundle_ &&
                    request_addr == PROGRAM_BASE + 16U &&
                    occurrence == 1) {
                    delay_ = 20;
                } else if (randomized_timing_) {
                    uint32_t sample = mix32(
                        timing_seed_ ^
                        (uint32_t(requests.size()) * 0x85ebca6bU));
                    delay_ = 1 + static_cast<int>(sample % 12U);
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

    bool idle() const {
        return (!pending_ || eof_pending_) && !response_active_;
    }

    void release_stale_eof() {
        if (!pending_ || !eof_pending_ || response_active_)
            return;

        response_.fill(NOP);
        response_active_ = true;
    }

    void set_randomized_timing(uint32_t seed) {
        randomized_timing_ = true;
        timing_seed_ = seed;
    }

private:
    const std::vector<Instruction>& program_;
    bool delay_first_second_bundle_ = false;
    bool pending_ = false;
    bool eof_pending_ = false;
    bool response_active_ = false;
    bool randomized_timing_ = false;
    uint32_t timing_seed_ = 0;
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
        response_latency = 2;
    }

    void set_response_latency(int cycles) {
        response_latency = cycles;
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
                {cycle + response_latency, true, 0, request.idx});
        } else {
            ++load_requests;
            responses.push_back(
                {cycle + response_latency, false, read_word(request.addr),
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
    int response_latency = 2;
};

struct IrqControl {
    bool enabled = false;
    uint32_t handler_pc = 0;
    int min_ftq_entries = 0;
    bool require_ghist = false;
    bool require_pending_imem = false;
    bool require_load_request = false;
};

struct RunResult {
    bool finished = false;
    bool predictor_ready = false;
    int redirects = 0;
    std::vector<uint32_t> redirect_pcs;
    std::vector<CommitRecord> commits;
    std::vector<PredictionRecord> taken_predictions;
    std::vector<BpdUpdateRecord> bpd_updates;
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
    bool redirect_with_pending_imem = false;
    int forced_fetch_stall_cycles = 0;
    int ftq_backpressure_cycles = 0;
    int max_ftq_entries = 0;
    int full_flushes = 0;
    bool full_flush_with_nonempty_ftq = false;
    bool full_flush_with_pending_imem = false;
    bool full_flush_cleared_ftq = true;
    bool full_flush_cleared_ghist = true;
    bool irq_asserted = false;
    bool irq_pending_seen = false;
    bool irq_asserted_with_pending_imem = false;
    bool irq_asserted_with_ghist = false;
    int irq_assert_ftq_entries = 0;
};

static RunResult run_program(Vcore_ifu_test_top* dut,
                             const std::vector<Instruction>& program,
                             DmemModel* dmem,
                             bool delay_first_second_bundle,
                             bool warm_predictor = false,
                             bool randomized_frontend = false,
                             uint32_t random_seed = 0,
                             const IrqControl* irq_control = nullptr) {
    reset(dut);
    ImemModel imem(program, delay_first_second_bundle);
    RunResult result;
    if (randomized_frontend)
        imem.set_randomized_timing(random_seed);

    if (warm_predictor) {
        dut->imem_req_ready = 0;
        dut->imem_resp_valid = 0;
        for (int cycle = 0; cycle < 4096 && !dut->bpd_ready_dbg;
             ++cycle) {
            tick(dut);
        }
        result.predictor_ready = dut->bpd_ready_dbg;
    }

    int quiet_cycles = 0;
    bool tracking_stalled_packet = false;
    bool clear_irq_after_tick = false;
    int current_packet_stall_cycles = 0;
    unsigned stalled_packet_valid = 0;
    std::array<uint32_t, FETCH_WIDTH> stalled_packet_pc{};
    std::array<uint32_t, FETCH_WIDTH> stalled_packet_inst{};

    for (int cycle = 0; cycle < 2000; ++cycle) {
        // Once a packet has partially entered Decode, valid must remain
        // asserted until the core accepts the remaining lanes.
        dut->fetch_allow = !randomized_frontend ||
            dut->core_packet_partial ||
            (mix32(random_seed ^
                   (uint32_t(cycle) * 0xc2b2ae35U)) % 5U) != 0;
        imem.drive(dut, cycle);
        dmem->drive(dut, cycle);
        dut->eval();

        bool irq_trigger_ready =
            irq_control != nullptr && irq_control->enabled &&
            !result.irq_asserted &&
            dut->ftq_valid_count_dbg >= irq_control->min_ftq_entries &&
            (!irq_control->require_ghist || dut->ghist_nonzero_dbg) &&
            (!irq_control->require_pending_imem || !imem.idle()) &&
            (!irq_control->require_load_request ||
             dmem->load_requests != 0);
        if (irq_trigger_ready) {
            result.irq_asserted = true;
            result.irq_asserted_with_pending_imem = !imem.idle();
            result.irq_asserted_with_ghist = dut->ghist_nonzero_dbg;
            result.irq_assert_ftq_entries = dut->ftq_valid_count_dbg;
            dut->hw_irq = 1;
            dut->eval();
        }
        result.irq_pending_seen |= dut->interrupt_pending_dbg;

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
        bool full_flush_this_cycle = dut->core_flush_valid;

        if (dut->redirect_valid) {
            ++result.redirects;
            result.redirect_pcs.push_back(dut->redirect_pc);
            result.redirect_with_pending_imem |= !imem.idle();
            imem.release_stale_eof();
            if (irq_control != nullptr && result.irq_asserted &&
                dut->redirect_pc == irq_control->handler_pc) {
                clear_irq_after_tick = true;
            }
        }
        if (full_flush_this_cycle) {
            ++result.full_flushes;
            result.full_flush_with_nonempty_ftq |=
                dut->ftq_nonempty_dbg;
            result.full_flush_with_pending_imem |= !imem.idle();
        }
        result.irq_pending_seen |= dut->interrupt_pending_dbg;

        if (!dut->fetch_allow && dut->core_packet_valid != 0)
            ++result.forced_fetch_stall_cycles;
        if (dut->ftq_backpressure_dbg)
            ++result.ftq_backpressure_cycles;
        result.max_ftq_entries = std::max(
            result.max_ftq_entries,
            static_cast<int>(dut->ftq_valid_count_dbg));

        for (int lane = 0; lane < FETCH_WIDTH; ++lane) {
            if (dut->core_fe_ready &&
                (dut->ifu_fetch_valid & (1U << lane)) != 0 &&
                (dut->ifu_fetch_predicted_taken_dbg &
                 (1U << lane)) != 0) {
                result.taken_predictions.push_back(
                    {dut->ifu_fetch_pc[lane],
                     dut->ifu_fetch_predicted_npc_dbg[lane]});
            }
        }
        if (dut->bpd_update_valid_dbg) {
            result.bpd_updates.push_back(
                {dut->bpd_update_pc_dbg,
                 dut->bpd_update_target_dbg,
                 static_cast<bool>(
                     dut->bpd_update_is_mispredict_dbg),
                 static_cast<bool>(dut->bpd_update_is_repair_dbg),
                 static_cast<bool>(dut->bpd_update_cfi_is_jirl_dbg)});
        }
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

        if (full_flush_this_cycle) {
            result.full_flush_cleared_ftq &=
                !dut->ftq_nonempty_dbg;
            result.full_flush_cleared_ghist &=
                !dut->ghist_nonzero_dbg;
        }
        if (clear_irq_after_tick) {
            dut->hw_irq = 0;
            dut->eval();
            clear_irq_after_tick = false;
        }

        imem.advance(imem_request_fire, imem_request_addr,
                     imem_response_fire);
        dmem->advance(cycle, dmem_request_fire, dmem_request,
                      dmem_response_sent);

        bool quiet = imem.eof_requested && imem.idle() &&
                     dut->rob_empty && dmem->idle() &&
                     dut->core_packet_valid == 0 &&
                     !dut->core_packet_partial &&
                     !dut->imem_req_valid &&
                     !dut->imem_resp_valid && commit_mask == 0;
        quiet_cycles = quiet ? quiet_cycles + 1 : 0;
        if (quiet_cycles >= 30) {
            result.finished = true;
            break;
        }
    }

    result.imem_requests = imem.requests;
    dut->fetch_allow = 1;
    dut->hw_irq = 0;
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

static bool test_lane2_predicted_branch(
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
    passed &= check("lane2 predicted branch does not redirect",
                    result.redirects == 0);
    passed &= check("lane2 branch suppresses same-packet store",
                    dmem.store_requests == 0 &&
                    dmem.read_word(0x100) == 0xa5a55a5aU);
    passed &= check("lane2 branch suppresses younger register writes",
                    result.last_write[12] == 0);
    passed &= check("lane2 branch target executes",
                    result.last_write[10] == 7 &&
                    result.last_write[11] == 0xa5a55a5aU);

    if (passed)
        std::printf("PASS: core_ifu lane2 predicted branch\n");
    return passed;
}

static bool test_redirect_clears_buffered_suffix(
    Vcore_ifu_test_top* dut) {
    const std::vector<Instruction> program = {
        {beq(0, 0, 16), "beq r0, r0, +16 (lane0)"},
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

static bool test_jirl_training_and_target_validation(
    Vcore_ifu_test_top* dut) {
    const uint32_t jirl_pc = PROGRAM_BASE + 8U;
    const uint32_t jirl_target = PROGRAM_BASE + 16U;
    const std::vector<Instruction> program = {
        {addi_w(2, 0, 3), "addi.w r2, r0, 3"},
        {pcaddu12i(5, 0), "pcaddu12i r5, 0"},
        {jirl(0, 5, 12), "jirl r0, r5, 12"},
        {addi_w(20, 0, 99), "addi.w r20, r0, 99 (wrong path)"},
        {addi_w(3, 3, 1), "addi.w r3, r3, 1"},
        {addi_w(2, 2, -1), "addi.w r2, r2, -1"},
        {mul_w(6, 2, 2), "mul.w r6, r2, r2 (commit barrier)"},
        {bne(6, 0, -20), "bne r6, r0, -20"},
        {addi_w(4, 0, 9), "addi.w r4, r0, 9"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    RunResult result = run_program(dut, program, &dmem, false, true);

    int target_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        jirl_target));
    bool saw_correct_prediction = std::any_of(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == jirl_pc &&
                   prediction.next_pc == jirl_target;
        });
    bool saw_jirl_commit_update = std::any_of(
        result.bpd_updates.begin(), result.bpd_updates.end(),
        [=](const BpdUpdateRecord& update) {
            return update.pc == PROGRAM_BASE &&
                   update.target == jirl_target && update.is_jirl &&
                   !update.is_mispredict && !update.is_repair;
        });

    bool passed = true;
    passed &= check("JIRL test waits for predictor initialization",
                    result.predictor_ready);
    passed &= check("JIRL training reaches quiescence", result.finished);
    passed &= check(
        "JIRL training commit trace",
        check_commit_trace(
            "JIRL training", result, program,
            {0, 1, 2, 4, 5, 6, 7,
             2, 4, 5, 6, 7,
             2, 4, 5, 6, 7, 8, 9, 10, 11}));
    passed &= check("JIRL predictor supplies the resolved target",
                    saw_correct_prediction);
    passed &= check("committed JIRL trains the target predictor",
                    saw_jirl_commit_update);
    passed &= check("only the first JIRL redirects to its target",
                    target_redirects == 1);
    passed &= check("JIRL loop reaches its exit",
                    result.last_write[4] == 9);

    if (!passed) {
        std::fprintf(
            stderr,
            "JIRL observations: redirects=%d target_redirects=%d "
            "taken_predictions=%zu bpd_updates=%zu\n",
            result.redirects, target_redirects,
            result.taken_predictions.size(), result.bpd_updates.size());
        for (const BpdUpdateRecord& update : result.bpd_updates) {
            std::fprintf(
                stderr,
                "  BPD update pc=0x%08x target=0x%08x "
                "mispredict=%d repair=%d jirl=%d\n",
                update.pc, update.target, update.is_mispredict,
                update.is_repair, update.is_jirl);
        }
    } else {
        std::printf("PASS: core_ifu JIRL training and target validation\n");
    }
    return passed;
}

static bool test_ras_call_return(Vcore_ifu_test_top* dut) {
    const uint32_t return_pc = PROGRAM_BASE + 4U;
    const uint32_t return_inst_pc = PROGRAM_BASE + 20U;
    const std::vector<Instruction> program = {
        {bl(16), "bl +16"},
        {addi_w(10, 0, 7), "addi.w r10, r0, 7"},
        {b(24), "b +24"},
        {addi_w(20, 0, 3), "addi.w r20, r0, 3 (wrong path)"},
        {addi_w(11, 0, 5), "addi.w r11, r0, 5"},
        {jirl(0, 1, 0), "jirl r0, r1, 0"},
        {addi_w(20, 0, 6), "addi.w r20, r0, 6 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {addi_w(12, 0, 9), "addi.w r12, r0, 9"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    RunResult result = run_program(dut, program, &dmem, false);

    bool saw_return_prediction = std::any_of(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == return_inst_pc &&
                   prediction.next_pc == return_pc;
        });

    bool passed = true;
    passed &= check("RAS call/return reaches quiescence", result.finished);
    passed &= check(
        "RAS call/return commit trace",
        check_commit_trace("RAS call/return", result, program,
                           {0, 4, 5, 1, 2, 8, 9, 10, 11}));
    passed &= check("RAS supplies the BL return address",
                    saw_return_prediction);
    passed &= check("correctly predicted call/return does not redirect",
                    result.redirects == 0);
    passed &= check("BL writes its architectural link",
                    result.last_write[1] == return_pc);
    passed &= check("RAS call/return reaches the continuation and exit",
                    result.last_write[10] == 7 &&
                    result.last_write[11] == 5 &&
                    result.last_write[12] == 9);

    if (passed)
        std::printf("PASS: core_ifu RAS call/return\n");
    return passed;
}

static bool test_ras_wrong_path_repair(Vcore_ifu_test_top* dut) {
    const uint32_t branch_target = PROGRAM_BASE + 32U;
    const uint32_t wrong_call_pc = PROGRAM_BASE + 12U;
    const uint32_t wrong_call_target = PROGRAM_BASE + 48U;
    const uint32_t correct_return_pc = PROGRAM_BASE + 36U;
    const uint32_t correct_return_inst_pc = PROGRAM_BASE + 68U;
    const std::vector<int> expected_indices = {
        0, 1, 2, 8, 16, 17, 9, 10, 20, 21, 22, 23,
    };
    const std::vector<Instruction> program = {
        {addi_w(10, 0, 0x100), "addi.w r10, r0, 0x100"},
        {ld_w(2, 10, 0), "ld.w r2, r10, 0"},
        {bne(2, 0, 24), "bne r2, r0, +24"},
        {bl(36), "bl +36 (wrong-path call)"},
        {addi_w(20, 0, 4), "addi.w r20, r0, 4 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {bl(32), "bl +32"},
        {addi_w(21, 0, 9), "addi.w r21, r0, 9"},
        {b(40), "b +40"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {addi_w(30, 0, 12), "addi.w r30, r0, 12 (wrong function)"},
        {jirl(0, 1, 0), "jirl r0, r1, 0 (wrong function)"},
        {NOP, "andi r0, r0, 0 (wrong function)"},
        {NOP, "andi r0, r0, 0 (wrong function)"},
        {addi_w(22, 0, 22), "addi.w r22, r0, 22"},
        {jirl(0, 1, 0), "jirl r0, r1, 0"},
        {addi_w(30, 0, 18), "addi.w r30, r0, 18 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {addi_w(23, 0, 23), "addi.w r23, r0, 23"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    dmem.write_word(0x100, 1);
    dmem.set_response_latency(40);
    RunResult result = run_program(dut, program, &dmem, false);

    bool saw_wrong_path_call = std::any_of(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == wrong_call_pc &&
                   prediction.next_pc == wrong_call_target;
        });
    bool saw_repaired_return = std::any_of(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == correct_return_inst_pc &&
                   prediction.next_pc == correct_return_pc;
        });
    int branch_target_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        branch_target));

    bool passed = true;
    passed &= check("RAS repair reaches quiescence", result.finished);
    passed &= check(
        "RAS repair commit trace",
        check_commit_trace("RAS repair", result, program,
                           expected_indices));
    passed &= check("wrong-path BL actually updates speculative RAS",
                    saw_wrong_path_call);
    passed &= check("branch rewind restores the return address",
                    saw_repaired_return);
    passed &= check("only the older conditional branch redirects",
                    result.redirects == 1 &&
                    branch_target_redirects == 1);
    passed &= check("RAS repair test issues one delayed load",
                    dmem.load_requests == 1);
    passed &= check("RAS repair reaches correct function and continuation",
                    result.last_write[21] == 9 &&
                    result.last_write[22] == 22 &&
                    result.last_write[23] == 23);

    if (!passed) {
        std::fprintf(
            stderr,
            "RAS repair observations: redirects=%d "
            "branch_target_redirects=%d predictions=%zu loads=%d\n",
            result.redirects, branch_target_redirects,
            result.taken_predictions.size(), dmem.load_requests);
    } else {
        std::printf("PASS: core_ifu RAS wrong-path repair\n");
    }

    std::vector<Instruction> stress_program = program;
    while (stress_program.size() < 96) {
        stress_program.push_back(
            {NOP, "andi r0, r0, 0 (frontend pressure)"});
    }

    std::vector<int> stress_expected = {
        0, 1, 2, 8, 16, 17, 9, 10,
    };
    for (int index = 20;
         index < static_cast<int>(stress_program.size()); ++index) {
        stress_expected.push_back(index);
    }

    constexpr std::array<uint32_t, 4> stress_seeds = {
        0x13579bdfU,
        0x2468ace0U,
        0xdeadbeefU,
        0x10203040U,
    };
    int total_forced_fetch_stalls = 0;
    int total_ftq_backpressure = 0;
    int redirects_with_pending_imem = 0;

    for (uint32_t seed : stress_seeds) {
        DmemModel stress_dmem;
        stress_dmem.clear();
        stress_dmem.write_word(0x100, 1);
        stress_dmem.set_response_latency(180);
        RunResult stress = run_program(
            dut, stress_program, &stress_dmem, false, false, true, seed);

        char prefix[96];
        std::snprintf(prefix, sizeof(prefix),
                      "random frontend seed 0x%08x", seed);
        const std::string test_prefix(prefix);
        const std::string trace_name = test_prefix + " commit trace";
        passed &= check(test_prefix + " reaches quiescence",
                        stress.finished);
        passed &= check(
            trace_name,
            check_commit_trace(trace_name.c_str(), stress,
                               stress_program, stress_expected));

        int stress_branch_redirects = static_cast<int>(std::count(
            stress.redirect_pcs.begin(), stress.redirect_pcs.end(),
            branch_target));
        bool stress_saw_wrong_path_call = std::any_of(
            stress.taken_predictions.begin(),
            stress.taken_predictions.end(),
            [=](const PredictionRecord& prediction) {
                return prediction.pc == wrong_call_pc &&
                       prediction.next_pc == wrong_call_target;
            });
        bool stress_saw_repaired_return = std::any_of(
            stress.taken_predictions.begin(),
            stress.taken_predictions.end(),
            [=](const PredictionRecord& prediction) {
                return prediction.pc == correct_return_inst_pc &&
                       prediction.next_pc == correct_return_pc;
            });

        passed &= check(test_prefix + " redirects only at older branch",
                        stress.redirects == 1 &&
                        stress_branch_redirects == 1);
        passed &= check(test_prefix + " reaches wrong-path call",
                        stress_saw_wrong_path_call);
        passed &= check(test_prefix + " repairs RAS return",
                        stress_saw_repaired_return);
        passed &= check(test_prefix + " keeps stalled packet stable",
                        stress.packet_stable_while_stalled);
        passed &= check(test_prefix + " issues one delayed load",
                        stress_dmem.load_requests == 1);

        total_forced_fetch_stalls += stress.forced_fetch_stall_cycles;
        total_ftq_backpressure += stress.ftq_backpressure_cycles;
        redirects_with_pending_imem +=
            stress.redirect_with_pending_imem ? 1 : 0;
    }

    passed &= check("random frontend forces fetch backpressure",
                    total_forced_fetch_stalls > 0);
    passed &= check("random frontend fills and backpressures FTQ",
                    total_ftq_backpressure > 0);
    if (passed) {
        std::printf(
            "PASS: core_ifu randomized frontend recovery "
            "(fetch_stalls=%d ftq_backpressure=%d "
            "pending_redirect_seeds=%d)\n",
            total_forced_fetch_stalls, total_ftq_backpressure,
            redirects_with_pending_imem);
    }
    return passed;
}

static bool test_exception_ertn_full_frontend_flush(
    Vcore_ifu_test_top* dut) {
    constexpr int HANDLER_INDEX = 64;
    constexpr int EXIT_INDEX = 80;
    const uint32_t fault_pc = PROGRAM_BASE + 6U * 4U;
    const uint32_t wrong_call_pc = PROGRAM_BASE + 7U * 4U;
    const uint32_t wrong_call_target = PROGRAM_BASE + 16U * 4U;
    const uint32_t wrong_call_packet_pc = PROGRAM_BASE + 4U * 4U;
    const uint32_t wrong_loop_packet_pc = PROGRAM_BASE + 16U * 4U;
    const uint32_t handler_pc = PROGRAM_BASE + HANDLER_INDEX * 4U;

    std::vector<Instruction> program(
        EXIT_INDEX + 4,
        {NOP, "andi r0, r0, 0 (unused)"});
    program[0] = {pcaddu12i(10, 0), "pcaddu12i r10, 0"};
    program[1] = {
        addi_w(10, 10, HANDLER_INDEX * 4),
        "addi.w r10, r10, handler offset",
    };
    program[2] = {csrwr(10, CSR_EENTRY), "csrwr r10, EENTRY"};
    program[3] = {NOP, "andi r0, r0, 0"};
    program[4] = {addi_w(11, 0, 0x100), "addi.w r11, r0, 0x100"};
    program[5] = {ld_w(2, 11, 0), "ld.w r2, r11, 0 (delayed)"};
    program[6] = {SYSCALL, "syscall 0x11"};
    program[7] = {bl((16 - 7) * 4), "bl wrong-path loop"};
    program[8] = {addi_w(21, 0, 9), "addi.w r21, r0, 9"};
    program[9] = {b((EXIT_INDEX - 9) * 4), "b exit"};
    program[16] = {b(0), "b 0 (wrong-path self loop)"};
    program[17] = {
        addi_w(30, 0, 30),
        "addi.w r30, r0, 30 (suppressed wrong path)",
    };
    program[18] = {NOP, "andi r0, r0, 0 (wrong path)"};
    program[19] = {NOP, "andi r0, r0, 0 (wrong path)"};

    program[HANDLER_INDEX + 0] = {csrrd(20, CSR_ERA), "csrrd r20, ERA"};
    program[HANDLER_INDEX + 1] = {
        addi_w(20, 20, 8),
        "addi.w r20, r20, 8",
    };
    program[HANDLER_INDEX + 2] = {csrwr(20, CSR_ERA), "csrwr r20, ERA"};
    program[HANDLER_INDEX + 3] = {ERTN, "ertn"};
    program[HANDLER_INDEX + 4] = {
        addi_w(31, 0, 31),
        "addi.w r31, r0, 31 (post-ERTN wrong path)",
    };
    program[EXIT_INDEX + 0] = {addi_w(22, 0, 22), "addi.w r22, r0, 22"};
    program[EXIT_INDEX + 1] = {NOP, "andi r0, r0, 0"};
    program[EXIT_INDEX + 2] = {NOP, "andi r0, r0, 0"};
    program[EXIT_INDEX + 3] = {NOP, "andi r0, r0, 0"};

    DmemModel dmem;
    dmem.clear();
    dmem.write_word(0x100, 1);
    dmem.set_response_latency(400);
    RunResult result = run_program(
        dut, program, &dmem, false, false, true, 0x5eed1234U);

    const std::vector<int> expected_indices = {
        0, 1, 2, 3, 4, 5,
        HANDLER_INDEX + 0,
        HANDLER_INDEX + 1,
        HANDLER_INDEX + 2,
        HANDLER_INDEX + 3,
        8, 9,
        EXIT_INDEX + 0,
        EXIT_INDEX + 1,
        EXIT_INDEX + 2,
        EXIT_INDEX + 3,
    };
    bool saw_wrong_path_call = std::any_of(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == wrong_call_pc &&
                   prediction.next_pc == wrong_call_target;
        });
    bool trained_flushed_path = std::any_of(
        result.bpd_updates.begin(), result.bpd_updates.end(),
        [=](const BpdUpdateRecord& update) {
            return update.pc == wrong_call_packet_pc ||
                   update.pc == wrong_loop_packet_pc ||
                   update.is_repair;
        });
    int handler_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        handler_pc));
    int return_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        fault_pc + 8U));

    bool passed = true;
    passed &= check("full flush test reaches quiescence", result.finished);
    passed &= check(
        "full flush commit trace",
        check_commit_trace("full flush", result, program,
                           expected_indices));
    passed &= check("wrong-path BL reaches speculative frontend state",
                    saw_wrong_path_call);
    passed &= check("CSR, exception, and ERTN full flush count",
                    result.full_flushes == 5 &&
                    handler_redirects == 1 && return_redirects == 1);
    passed &= check("full flush sees allocated speculative FTQ entries",
                    result.full_flush_with_nonempty_ftq);
    passed &= check("full flush clears every FTQ entry",
                    result.full_flush_cleared_ftq);
    passed &= check("full flush clears GHist and logical RAS state",
                    result.full_flush_cleared_ghist);
    passed &= check("full flush overlaps an outstanding imem request",
                    result.full_flush_with_pending_imem);
    passed &= check("flushed FTQ entries never train the predictor",
                    !trained_flushed_path);
    passed &= check("wrong-path instructions have no architectural writes",
                    result.last_write[30] == 0 &&
                    result.last_write[31] == 0);
    passed &= check("ERTN resumes after the skipped syscall and BL",
                    result.last_write[21] == 9 &&
                    result.last_write[22] == 22);
    passed &= check("full flush sees multiple speculative FTQ entries",
                    result.max_ftq_entries >= 2);
    passed &= check("full flush test issues one delayed load",
                    dmem.load_requests == 1);

    if (!passed) {
        std::fprintf(
            stderr,
            "full flush observations: flushes=%d handler=%d return=%d "
            "ftq_nonempty=%d ftq_clear=%d ghist_clear=%d "
            "pending_imem=%d max_ftq=%d ftq_backpressure=%d redirects=%d "
            "commits=%zu updates=%zu\n",
            result.full_flushes, handler_redirects, return_redirects,
            result.full_flush_with_nonempty_ftq,
            result.full_flush_cleared_ftq,
            result.full_flush_cleared_ghist,
            result.full_flush_with_pending_imem,
            result.max_ftq_entries, result.ftq_backpressure_cycles,
            result.redirects,
            result.commits.size(), result.bpd_updates.size());
    } else {
        std::printf(
            "PASS: core_ifu exception/ERTN full frontend flush "
            "(flushes=%d max_ftq=%d pending_imem=%d)\n",
            result.full_flushes, result.max_ftq_entries,
            result.full_flush_with_pending_imem);
    }
    return passed;
}

static bool test_interrupt_ertn_full_frontend_flush(
    Vcore_ifu_test_top* dut) {
    constexpr int HANDLER_INDEX = 64;
    constexpr int EXIT_INDEX = 80;
    constexpr int CONTINUE_INDEX = 12;
    const uint32_t handler_pc = PROGRAM_BASE + HANDLER_INDEX * 4U;
    const uint32_t continue_pc = PROGRAM_BASE + CONTINUE_INDEX * 4U;
    const uint32_t wrong_call_pc = PROGRAM_BASE + 10U * 4U;
    const uint32_t wrong_call_target = PROGRAM_BASE + 16U * 4U;
    const uint32_t body_packet_pc = PROGRAM_BASE + 8U * 4U;
    const uint32_t wrong_loop_packet_pc = PROGRAM_BASE + 16U * 4U;

    std::vector<Instruction> program(
        EXIT_INDEX + 4,
        {NOP, "andi r0, r0, 0 (unused)"});
    program[0] = {pcaddu12i(10, 0), "pcaddu12i r10, 0"};
    program[1] = {
        addi_w(10, 10, HANDLER_INDEX * 4),
        "addi.w r10, r10, handler offset",
    };
    program[2] = {csrwr(10, CSR_EENTRY), "csrwr r10, EENTRY"};
    program[3] = {addi_w(11, 0, HW_IRQ0_LIE), "addi.w r11, r0, IRQ0 LIE"};
    program[4] = {csrwr(11, CSR_ECFG), "csrwr r11, ECFG"};
    program[5] = {
        addi_w(12, 0, CRMD_DA | CRMD_IE),
        "addi.w r12, r0, DA|IE",
    };
    program[6] = {csrwr(12, CSR_CRMD), "csrwr r12, CRMD"};
    program[7] = {NOP, "andi r0, r0, 0"};

    program[8] = {addi_w(13, 0, 0x100), "addi.w r13, r0, 0x100"};
    program[9] = {ld_w(2, 13, 0), "ld.w r2, r13, 0 (delayed)"};
    program[10] = {bl((16 - 10) * 4), "bl speculative loop"};
    program[11] = {
        addi_w(29, 0, 29),
        "addi.w r29, r0, 29 (suppressed wrong path)",
    };
    program[CONTINUE_INDEX] = {addi_w(21, 0, 9), "addi.w r21, r0, 9"};
    program[CONTINUE_INDEX + 1] = {
        b((EXIT_INDEX - (CONTINUE_INDEX + 1)) * 4),
        "b exit",
    };
    program[16] = {b(0), "b 0 (speculative self loop)"};
    program[17] = {
        addi_w(30, 0, 30),
        "addi.w r30, r0, 30 (suppressed wrong path)",
    };

    program[HANDLER_INDEX + 0] = {pcaddu12i(20, 0), "pcaddu12i r20, 0"};
    program[HANDLER_INDEX + 1] = {
        addi_w(20, 20,
               CONTINUE_INDEX * 4 - HANDLER_INDEX * 4),
        "addi.w r20, r20, continuation offset",
    };
    program[HANDLER_INDEX + 2] = {csrwr(20, CSR_ERA), "csrwr r20, ERA"};
    program[HANDLER_INDEX + 3] = {ERTN, "ertn"};
    program[HANDLER_INDEX + 4] = {
        addi_w(31, 0, 31),
        "addi.w r31, r0, 31 (post-ERTN wrong path)",
    };
    program[EXIT_INDEX + 0] = {addi_w(22, 0, 22), "addi.w r22, r0, 22"};
    program[EXIT_INDEX + 1] = {NOP, "andi r0, r0, 0"};
    program[EXIT_INDEX + 2] = {NOP, "andi r0, r0, 0"};
    program[EXIT_INDEX + 3] = {NOP, "andi r0, r0, 0"};

    DmemModel dmem;
    dmem.clear();
    dmem.write_word(0x100, 1);
    dmem.set_response_latency(400);
    const IrqControl irq_control = {
        .enabled = true,
        .handler_pc = handler_pc,
        .min_ftq_entries = 2,
        .require_ghist = true,
        .require_pending_imem = true,
        .require_load_request = true,
    };
    RunResult result = run_program(
        dut, program, &dmem, false, false, true,
        0x1a2b3c4dU, &irq_control);

    const std::vector<int> expected_indices = {
        0, 1, 2, 3, 4, 5, 6, 7, 8,
        HANDLER_INDEX + 0,
        HANDLER_INDEX + 1,
        HANDLER_INDEX + 2,
        HANDLER_INDEX + 3,
        CONTINUE_INDEX,
        CONTINUE_INDEX + 1,
        EXIT_INDEX + 0,
        EXIT_INDEX + 1,
        EXIT_INDEX + 2,
        EXIT_INDEX + 3,
    };
    bool saw_wrong_path_call = std::any_of(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == wrong_call_pc &&
                   prediction.next_pc == wrong_call_target;
        });
    bool trained_flushed_path = std::any_of(
        result.bpd_updates.begin(), result.bpd_updates.end(),
        [=](const BpdUpdateRecord& update) {
            return update.pc == body_packet_pc ||
                   update.pc == wrong_loop_packet_pc ||
                   update.is_repair;
        });
    int handler_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        handler_pc));
    int return_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        continue_pc));

    bool passed = true;
    passed &= check("interrupt full flush reaches quiescence",
                    result.finished);
    passed &= check(
        "interrupt full flush commit trace",
        check_commit_trace("interrupt full flush", result, program,
                           expected_indices));
    passed &= check("IRQ is asserted after speculative frontend activity",
                    result.irq_asserted && result.irq_pending_seen &&
                    result.irq_assert_ftq_entries >= 2 &&
                    result.irq_asserted_with_ghist &&
                    result.irq_asserted_with_pending_imem);
    passed &= check("speculative BL updates frontend RAS state",
                    saw_wrong_path_call);
    passed &= check("interrupt enters EENTRY exactly once",
                    handler_redirects == 1);
    passed &= check("ERTN returns to the programmed continuation once",
                    return_redirects == 1);
    passed &= check("interrupt path performs all expected full flushes",
                    result.full_flushes == 6);
    passed &= check("interrupt full flush clears every FTQ entry",
                    result.full_flush_cleared_ftq);
    passed &= check("interrupt full flush clears GHist and logical RAS",
                    result.full_flush_cleared_ghist);
    passed &= check("interrupt flush overlaps outstanding instruction fetch",
                    result.full_flush_with_pending_imem);
    passed &= check("interrupt-flushed entries never train the predictor",
                    !trained_flushed_path);
    passed &= check("late load and speculative paths do not write registers",
                    result.last_write[2] == 0 &&
                    result.last_write[29] == 0 &&
                    result.last_write[30] == 0 &&
                    result.last_write[31] == 0);
    passed &= check("ERTN continuation executes exactly once",
                    result.last_write[21] == 9 &&
                    result.last_write[22] == 22);
    passed &= check("interrupt test issues one delayed load",
                    dmem.load_requests == 1);

    if (!passed) {
        std::fprintf(
            stderr,
            "interrupt flush observations: irq=%d pending=%d "
            "irq_ftq=%d irq_ghist=%d irq_imem=%d flushes=%d "
            "handler=%d return=%d max_ftq=%d pending_flush=%d "
            "commits=%zu redirects=%d updates=%zu loads=%d\n",
            result.irq_asserted, result.irq_pending_seen,
            result.irq_assert_ftq_entries,
            result.irq_asserted_with_ghist,
            result.irq_asserted_with_pending_imem,
            result.full_flushes, handler_redirects, return_redirects,
            result.max_ftq_entries,
            result.full_flush_with_pending_imem,
            result.commits.size(), result.redirects,
            result.bpd_updates.size(), dmem.load_requests);
    } else {
        std::printf(
            "PASS: core_ifu interrupt/ERTN full frontend flush "
            "(flushes=%d irq_ftq=%d max_ftq=%d pending_imem=%d)\n",
            result.full_flushes, result.irq_assert_ftq_entries,
            result.max_ftq_entries,
            result.irq_asserted_with_pending_imem);
    }
    return passed;
}

static bool test_conditional_direction_training(
    Vcore_ifu_test_top* dut) {
    const uint32_t branch_pc = PROGRAM_BASE + 60U;
    const uint32_t branch_target = PROGRAM_BASE + 16U;
    const uint32_t branch_fallthrough = PROGRAM_BASE + 64U;
    const std::vector<Instruction> program = {
        {addi_w(2, 0, 0), "addi.w r2, r0, 0"},
        {addi_w(3, 0, 3), "addi.w r3, r0, 3"},
        {addi_w(4, 0, 4), "addi.w r4, r0, 4"},
        {NOP, "andi r0, r0, 0"},
        {addi_w(2, 2, 1), "addi.w r2, r2, 1"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {blt(2, 3, -44), "blt r2, r3, -44"},
        {addi_w(4, 4, -1), "addi.w r4, r4, -1"},
        {bne(4, 0, 12), "bne r4, r0, +12"},
        {b(40), "b +40"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {b(-92), "b -92"},
        {addi_w(5, 0, 9), "addi.w r5, r0, 9"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    RunResult result = run_program(dut, program, &dmem, false, true);

    int predicted_taken = static_cast<int>(std::count_if(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == branch_pc &&
                   prediction.next_pc == branch_target;
        }));
    int target_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        branch_target));
    int fallthrough_redirects = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(),
        branch_fallthrough));

    std::vector<int> expected_indices = {0, 1, 2, 3};
    for (int visit = 0; visit < 6; ++visit) {
        for (int index = 4; index <= 15; ++index)
            expected_indices.push_back(index);

        if (visit < 2)
            continue;

        expected_indices.push_back(16);
        expected_indices.push_back(17);
        if (visit < 5) {
            for (int index = 20; index <= 27; ++index)
                expected_indices.push_back(index);
        } else {
            expected_indices.push_back(18);
            for (int index = 28; index <= 31; ++index)
                expected_indices.push_back(index);
        }
    }

    bool passed = true;
    passed &= check("conditional training waits for BIM initialization",
                    result.predictor_ready);
    passed &= check("conditional training reaches quiescence",
                    result.finished);
    passed &= check(
        "conditional training commit trace",
        check_commit_trace("conditional training", result, program,
                           expected_indices));
    // The F2 fast path can fetch two dynamic instances before the first one
    // commits. Both are therefore cold; later predictions still exercise the
    // committed T,T,N,N counter sequence through BIM's write bypass.
    passed &= check("two in-flight cold branches redirect before training",
                    target_redirects == 2);
    passed &= check("commit-trained branch predicts taken before direction change",
                    predicted_taken == 2);
    passed &= check("two taken predictions are corrected after N transition",
                    fallthrough_redirects == 2);
    passed &= check("conditional direction sequence reaches its exit",
                    result.last_write[2] == 6 &&
                    result.last_write[4] == 0 &&
                    result.last_write[5] == 9);

    if (!passed) {
        std::fprintf(
            stderr,
            "conditional observations: predictions=%d "
            "target_redirects=%d fallthrough_redirects=%d "
            "all_redirects=%d\n",
            predicted_taken, target_redirects,
            fallthrough_redirects, result.redirects);
    } else {
        std::printf("PASS: core_ifu conditional direction training\n");
    }
    return passed;
}

static bool test_jirl_dynamic_target_retraining(
    Vcore_ifu_test_top* dut) {
    const uint32_t jirl_pc = PROGRAM_BASE + 16U;
    const uint32_t target_a = PROGRAM_BASE + 64U;
    const uint32_t target_b = PROGRAM_BASE + 128U;
    const std::vector<Instruction> program = {
        {pcaddu12i(6, 0), "pcaddu12i r6, 0"},
        {addi_w(5, 6, 64), "addi.w r5, r6, 64"},
        {addi_w(2, 0, 2), "addi.w r2, r0, 2"},
        {addi_w(3, 0, 2), "addi.w r3, r0, 2"},
        {jirl(0, 5, 0), "jirl r0, r5, 0"},
        {addi_w(20, 0, 5), "addi.w r20, r0, 5 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {addi_w(10, 10, 1), "addi.w r10, r10, 1"},
        {addi_w(2, 2, -1), "addi.w r2, r2, -1"},
        {bne(2, 0, 24), "bne r2, r0, +24"},
        {addi_w(5, 6, 128), "addi.w r5, r6, 128"},
        {b(16), "b +16"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {b(-108), "b -108"},
        {addi_w(11, 11, 1), "addi.w r11, r11, 1"},
        {addi_w(3, 3, -1), "addi.w r3, r3, -1"},
        {bne(3, 0, 24), "bne r3, r0, +24"},
        {b(52), "b +52"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0 (wrong path)"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {b(-172), "b -172"},
        {addi_w(12, 0, 9), "addi.w r12, r0, 9"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
        {NOP, "andi r0, r0, 0"},
    };
    DmemModel dmem;
    dmem.clear();
    RunResult result = run_program(dut, program, &dmem, false, true);

    int predictions_to_a = static_cast<int>(std::count_if(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == jirl_pc &&
                   prediction.next_pc == target_a;
        }));
    int predictions_to_b = static_cast<int>(std::count_if(
        result.taken_predictions.begin(),
        result.taken_predictions.end(),
        [=](const PredictionRecord& prediction) {
            return prediction.pc == jirl_pc &&
                   prediction.next_pc == target_b;
        }));
    int redirects_to_a = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(), target_a));
    int redirects_to_b = static_cast<int>(std::count(
        result.redirect_pcs.begin(), result.redirect_pcs.end(), target_b));
    bool saw_target_b_commit_update = std::any_of(
        result.bpd_updates.begin(), result.bpd_updates.end(),
        [=](const BpdUpdateRecord& update) {
            return update.pc == jirl_pc && update.target == target_b &&
                   update.is_jirl && !update.is_mispredict &&
                   !update.is_repair;
        });

    std::vector<int> expected_indices = {0, 1, 2, 3, 4};
    expected_indices.insert(expected_indices.end(),
                            {16, 17, 18});
    for (int index = 24; index <= 31; ++index)
        expected_indices.push_back(index);
    expected_indices.push_back(4);
    expected_indices.insert(expected_indices.end(),
                            {16, 17, 18, 19, 20});
    for (int index = 24; index <= 31; ++index)
        expected_indices.push_back(index);
    expected_indices.push_back(4);
    expected_indices.insert(expected_indices.end(),
                            {32, 33, 34});
    for (int index = 40; index <= 47; ++index)
        expected_indices.push_back(index);
    expected_indices.push_back(4);
    expected_indices.insert(expected_indices.end(),
                            {32, 33, 34, 35});
    for (int index = 48; index <= 51; ++index)
        expected_indices.push_back(index);

    bool passed = true;
    passed &= check("dynamic JIRL waits for predictor initialization",
                    result.predictor_ready);
    passed &= check("dynamic JIRL reaches quiescence", result.finished);
    passed &= check(
        "dynamic JIRL commit trace",
        check_commit_trace("dynamic JIRL", result, program,
                           expected_indices));
    passed &= check("dynamic JIRL predicts old target twice",
                    predictions_to_a == 2);
    passed &= check("dynamic JIRL predicts retrained target",
                    predictions_to_b == 1);
    passed &= check("cold and changed targets each redirect once",
                    redirects_to_a == 1 && redirects_to_b == 1);
    passed &= check("changed JIRL target reaches a commit update",
                    saw_target_b_commit_update);
    passed &= check("dynamic JIRL executes only committed target paths",
                    result.last_write[12] == 9);

    if (!passed) {
        std::fprintf(
            stderr,
            "dynamic JIRL observations: pred_a=%d pred_b=%d "
            "redirect_a=%d redirect_b=%d updates=%zu\n",
            predictions_to_a, predictions_to_b,
            redirects_to_a, redirects_to_b,
            result.bpd_updates.size());
    } else {
        std::printf("PASS: core_ifu JIRL dynamic target retraining\n");
    }
    return passed;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_ifu_test_top;

    bool passed = true;
    passed &= test_four_wide_sequential(dut);
    passed &= test_redirect_and_stale_response(dut);
    passed &= test_unique_in_trailing_lanes(dut);
    passed &= test_lane2_predicted_branch(dut);
    passed &= test_redirect_clears_buffered_suffix(dut);
    passed &= test_backend_backpressure_packet_stability(dut);
    passed &= test_jirl_training_and_target_validation(dut);
    passed &= test_ras_call_return(dut);
    passed &= test_ras_wrong_path_repair(dut);
    passed &= test_exception_ertn_full_frontend_flush(dut);
    passed &= test_interrupt_ertn_full_frontend_flush(dut);
    passed &= test_conditional_direction_training(dut);
    passed &= test_jirl_dynamic_target_retraining(dut);

    dut->final();
    delete dut;

    if (passed)
        std::printf("PASS: core_ifu\n");
    return passed ? 0 : 1;
}
