#include "Vcore_top_recovery_test_top.h"
#include "verilated.h"

#include <algorithm>
#include <cstdint>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

namespace {

constexpr uint32_t RESET_PC = 0x1c000000U;
constexpr uint32_t DATA_BASE = 0x00000100U;
constexpr uint32_t NOP = 0x03400000U;
constexpr uint32_t ERTN = 0x06483800U;
constexpr uint32_t SYSCALL = 0x002b0011U;
constexpr unsigned CSR_CRMD = 0x000;
constexpr unsigned CSR_ECFG = 0x004;
constexpr unsigned CSR_ERA = 0x006;
constexpr unsigned CSR_EENTRY = 0x00c;
constexpr unsigned CRMD_CACHE = 0xa8U;
constexpr unsigned CRMD_CACHE_IE = CRMD_CACHE | (1U << 2);
constexpr unsigned CRMD_ICACHE_DUNCACHED = 0x28U;
constexpr unsigned HW_IRQ0_LIE = 1U << 2;
constexpr unsigned ECODE_SYS = 11;
constexpr unsigned COMMIT_WIDTH = 2;

constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t mem_i12(uint32_t opcode, unsigned rd,
                           unsigned rj, int imm12) {
    return opcode |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t ld_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x28800000U, rd, rj, imm12);
}

constexpr uint32_t st_w(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29800000U, rd, rj, imm12);
}

constexpr uint32_t branch_i26(uint32_t opcode, int byte_offset) {
    unsigned imm26 =
        static_cast<unsigned>(byte_offset >> 2) & 0x03ffffffU;
    return opcode | ((imm26 & 0xffffU) << 10) | (imm26 >> 16);
}

constexpr uint32_t b(int byte_offset) {
    return branch_i26(0x50000000U, byte_offset);
}

constexpr uint32_t bl(int byte_offset) {
    return branch_i26(0x54000000U, byte_offset);
}

constexpr uint32_t bne(unsigned rj, unsigned rd, int byte_offset) {
    return 0x5c000000U |
           ((static_cast<unsigned>(byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t pcaddu12i(unsigned rd, int imm20) {
    return 0x1c000000U |
           ((static_cast<unsigned>(imm20) & 0xfffffU) << 5) |
           (rd & 0x1fU);
}

constexpr uint32_t csr(unsigned rd, unsigned rj, unsigned addr) {
    return 0x04000000U | ((addr & 0x3fffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t csrrd(unsigned rd, unsigned addr) {
    return csr(rd, 0, addr);
}

constexpr uint32_t csrwr(unsigned rd, unsigned addr) {
    return csr(rd, 1, addr);
}

uint32_t packed_word(uint64_t value, unsigned index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

void tick(Vcore_top_recovery_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void reset(Vcore_top_recovery_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->intrpt = 0;
    dut->arready = 0;
    dut->rid = 0;
    dut->rdata = 0;
    dut->rresp = 0;
    dut->rlast = 0;
    dut->rvalid = 0;
    dut->awready = 0;
    dut->wready = 0;
    dut->bid = 0;
    dut->bresp = 0;
    dut->bvalid = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

enum class Scenario {
    Branch,
    Exception,
    Interrupt,
};

struct CaseConfig {
    const char* name = nullptr;
    Scenario scenario = Scenario::Branch;
    std::vector<uint32_t> program;
    std::vector<int> expected_indices;
    int terminal_index = 0;
    unsigned delayed_read_id = 0;
    uint32_t delayed_read_addr = 0;
    uint32_t primary_redirect_pc = 0;
    uint32_t return_pc = 0;
    uint32_t fault_pc = 0;
};

class AxiMemory {
public:
    AxiMemory(const CaseConfig& config, bool stress)
        : stress_(stress),
          delayed_read_id_(config.delayed_read_id),
          delayed_read_addr_(config.delayed_read_addr) {
        for (size_t index = 0; index < config.program.size(); ++index)
            write_word(RESET_PC + static_cast<uint32_t>(index * 4U),
                       config.program[index]);
        write_word(DATA_BASE, 0x11223344U);
        write_word(DATA_BASE + 4U, 0U);
    }

    void drive(Vcore_top_recovery_test_top* dut, uint64_t cycle) {
        bool force_initial_stall = stress_ && !saw_backpressure_;
        bool ar_stall = force_initial_stall ||
            (stress_ &&
             (cycle % 11U == 3U || cycle % 11U == 4U));
        bool aw_stall = stress_ && cycle % 7U == 2U;
        bool w_stall = stress_ && cycle % 9U == 5U;
        dut->arready = !read_pending_ && !ar_stall;
        dut->awready = !aw_seen_ && !write_response_pending_ &&
                       !aw_stall;
        dut->wready = aw_seen_ && !write_response_pending_ &&
                      !w_stall;

        if (read_pending_ && !read_active_ &&
            cycle >= read_due_cycle_ &&
            (!stress_ || cycle % 5U != 1U)) {
            read_active_ = true;
            read_data_q_ = read_word(read_addr_ + read_beat_ * 4U);
        }

        dut->rvalid = read_active_;
        dut->rid = read_id_;
        dut->rdata = read_data_q_;
        dut->rresp = 0;
        dut->rlast = read_active_ && read_beat_ == read_len_;

        if (write_response_pending_ && !write_response_active_ &&
            cycle >= write_response_due_cycle_ &&
            (!stress_ || cycle % 6U != 3U)) {
            write_response_active_ = true;
        }
        dut->bvalid = write_response_active_;
        dut->bid = 1;
        dut->bresp = 0;
    }

    void observe_stability(Vcore_top_recovery_test_top* dut) {
        if (hold_ar_) {
            protocol_ok_ &= dut->arvalid &&
                            dut->arid == held_arid_ &&
                            dut->araddr == held_araddr_ &&
                            dut->arlen == held_arlen_ &&
                            dut->arsize == held_arsize_;
        }
        if (hold_aw_) {
            protocol_ok_ &= dut->awvalid &&
                            dut->awaddr == held_awaddr_ &&
                            dut->awlen == held_awlen_;
        }
        if (hold_w_) {
            protocol_ok_ &= dut->wvalid &&
                            dut->wdata == held_wdata_ &&
                            dut->wstrb == held_wstrb_ &&
                            dut->wlast == held_wlast_;
        }

        hold_ar_ = dut->arvalid && !dut->arready;
        hold_aw_ = dut->awvalid && !dut->awready;
        hold_w_ = dut->wvalid && !dut->wready;
        saw_backpressure_ |= hold_ar_ || hold_aw_ || hold_w_;

        if (hold_ar_) {
            held_arid_ = dut->arid;
            held_araddr_ = dut->araddr;
            held_arlen_ = dut->arlen;
            held_arsize_ = dut->arsize;
        }
        if (hold_aw_) {
            held_awaddr_ = dut->awaddr;
            held_awlen_ = dut->awlen;
        }
        if (hold_w_) {
            held_wdata_ = dut->wdata;
            held_wstrb_ = dut->wstrb;
            held_wlast_ = dut->wlast;
        }
    }

    void advance(Vcore_top_recovery_test_top* dut, uint64_t cycle) {
        bool ar_fire = dut->arvalid && dut->arready;
        bool r_fire = dut->rvalid && dut->rready;
        bool aw_fire = dut->awvalid && dut->awready;
        bool w_fire = dut->wvalid && dut->wready;
        bool b_fire = dut->bvalid && dut->bready;

        if (r_fire) {
            protocol_ok_ &= read_pending_ && read_active_;
            read_active_ = false;
            if (read_beat_ == read_len_) {
                read_pending_ = false;
                read_beat_ = 0;
            } else {
                ++read_beat_;
                read_due_cycle_ = cycle + 1U;
            }
        }

        if (b_fire) {
            protocol_ok_ &= write_response_pending_ &&
                            write_response_active_;
            write_response_pending_ = false;
            write_response_active_ = false;
            ++completed_writes_;
        }

        if (ar_fire) {
            protocol_ok_ &= !read_pending_;
            protocol_ok_ &= dut->arsize == 2 && dut->arburst == 1;
            protocol_ok_ &= (dut->araddr & 3U) == 0;
            if (dut->arid == 0) {
                protocol_ok_ &= dut->arlen == 3 || dut->arlen == 15;
                ++instruction_reads_;
            } else if (dut->arid == 1) {
                protocol_ok_ &= dut->arlen == 0 || dut->arlen == 7;
                ++data_reads_;
            } else {
                protocol_ok_ = false;
            }

            read_pending_ = true;
            read_active_ = false;
            read_id_ = dut->arid;
            read_addr_ = dut->araddr;
            read_len_ = dut->arlen;
            read_beat_ = 0;
            bool delayed = read_id_ == delayed_read_id_ &&
                           read_addr_ == delayed_read_addr_;
            special_read_seen_ |= delayed;
            unsigned response_latency = delayed ? 80U : 2U;
            read_due_cycle_ = cycle + response_latency;
        }

        if (aw_fire) {
            protocol_ok_ &= !aw_seen_ && !write_response_pending_;
            protocol_ok_ &= dut->awid == 1 && dut->awsize == 2 &&
                            dut->awburst == 1;
            aw_seen_ = true;
            write_addr_ = dut->awaddr;
            write_len_ = dut->awlen;
            write_beat_ = 0;
        }

        if (w_fire) {
            protocol_ok_ &= aw_seen_ && dut->wid == 1;
            protocol_ok_ &= dut->wlast == (write_beat_ == write_len_);
            if (aw_seen_) {
                write_strobed(write_addr_ + write_beat_ * 4U,
                              dut->wdata, dut->wstrb);
                if (write_beat_ == write_len_) {
                    aw_seen_ = false;
                    write_response_pending_ = true;
                    write_response_active_ = false;
                    write_response_due_cycle_ = cycle + 2U;
                    ++writes_;
                } else {
                    ++write_beat_;
                }
            }
        }
    }

    bool special_transaction_live(
        const Vcore_top_recovery_test_top* dut) const {
        bool accepted = read_pending_ &&
                        read_id_ == delayed_read_id_ &&
                        read_addr_ == delayed_read_addr_;
        bool address_waiting = dut->arvalid &&
                               dut->arid == delayed_read_id_ &&
                               dut->araddr == delayed_read_addr_;
        return accepted || address_waiting;
    }

    bool special_data_read_pending() const {
        return read_pending_ && read_id_ == 1 &&
               read_addr_ == delayed_read_addr_;
    }

    bool idle() const {
        return !read_pending_ && !read_active_ && !aw_seen_ &&
               !write_response_pending_ && !write_response_active_;
    }

    uint32_t read_word(uint32_t addr) const {
        uint32_t base = addr & ~3U;
        uint32_t value = 0;
        bool found = false;
        for (unsigned byte = 0; byte < 4; ++byte) {
            auto it = bytes_.find(base + byte);
            if (it == bytes_.end())
                continue;
            found = true;
            value |= static_cast<uint32_t>(it->second) << (8U * byte);
        }
        if (!found && base >= RESET_PC)
            return NOP;
        return value;
    }

    bool protocol_ok() const { return protocol_ok_; }
    bool saw_backpressure() const { return saw_backpressure_; }
    bool special_read_seen() const { return special_read_seen_; }
    unsigned instruction_reads() const { return instruction_reads_; }
    unsigned data_reads() const { return data_reads_; }
    unsigned writes() const { return writes_; }
    unsigned completed_writes() const { return completed_writes_; }

private:
    void write_word(uint32_t addr, uint32_t data) {
        write_strobed(addr, data, 0xf);
    }

    void write_strobed(uint32_t addr, uint32_t data,
                       unsigned strobe) {
        uint32_t base = addr & ~3U;
        for (unsigned byte = 0; byte < 4; ++byte) {
            if ((strobe & (1U << byte)) != 0)
                bytes_[base + byte] =
                    static_cast<uint8_t>(data >> (8U * byte));
        }
    }

    bool stress_ = false;
    bool protocol_ok_ = true;
    bool saw_backpressure_ = false;
    std::map<uint32_t, uint8_t> bytes_;
    unsigned delayed_read_id_ = 0;
    uint32_t delayed_read_addr_ = 0;
    bool special_read_seen_ = false;

    bool read_pending_ = false;
    bool read_active_ = false;
    unsigned read_id_ = 0;
    uint32_t read_addr_ = 0;
    unsigned read_len_ = 0;
    unsigned read_beat_ = 0;
    uint64_t read_due_cycle_ = 0;
    uint32_t read_data_q_ = 0;

    bool aw_seen_ = false;
    uint32_t write_addr_ = 0;
    unsigned write_len_ = 0;
    unsigned write_beat_ = 0;
    bool write_response_pending_ = false;
    bool write_response_active_ = false;
    uint64_t write_response_due_cycle_ = 0;

    bool hold_ar_ = false;
    bool hold_aw_ = false;
    bool hold_w_ = false;
    unsigned held_arid_ = 0;
    uint32_t held_araddr_ = 0;
    unsigned held_arlen_ = 0;
    unsigned held_arsize_ = 0;
    uint32_t held_awaddr_ = 0;
    unsigned held_awlen_ = 0;
    uint32_t held_wdata_ = 0;
    unsigned held_wstrb_ = 0;
    unsigned held_wlast_ = 0;

    unsigned instruction_reads_ = 0;
    unsigned data_reads_ = 0;
    unsigned writes_ = 0;
    unsigned completed_writes_ = 0;
};

std::vector<uint32_t> blank_program(size_t words) {
    return std::vector<uint32_t>(words, NOP);
}

CaseConfig branch_case() {
    constexpr int WRONG_FALLTHROUGH = 16;
    constexpr int TARGET = 32;
    CaseConfig config;
    config.name = "branch/I-cache refill";
    config.scenario = Scenario::Branch;
    config.program = blank_program(48);
    config.program[0] = addi_w(10, 0, CRMD_ICACHE_DUNCACHED);
    config.program[1] = csrwr(10, CSR_CRMD);
    config.program[2] = addi_w(1, 0, DATA_BASE);
    config.program[3] = addi_w(2, 0, 7);
    config.program[15] = bne(2, 0, (TARGET - 15) * 4);
    config.program[WRONG_FALLTHROUGH] = addi_w(20, 0, 20);
    config.program[WRONG_FALLTHROUGH + 1] = st_w(20, 1, 4);
    config.program[TARGET] = addi_w(21, 0, 21);
    config.program[TARGET + 1] = st_w(21, 1, 0);
    config.program[TARGET + 2] = b(0);
    for (int index = 0; index <= 15; ++index)
        config.expected_indices.push_back(index);
    config.expected_indices.insert(
        config.expected_indices.end(),
        {TARGET, TARGET + 1, TARGET + 2});
    config.terminal_index = TARGET + 2;
    config.delayed_read_id = 0;
    config.delayed_read_addr = RESET_PC + WRONG_FALLTHROUGH * 4U;
    config.primary_redirect_pc = RESET_PC + TARGET * 4U;
    return config;
}

CaseConfig exception_case() {
    constexpr int HANDLER = 32;
    constexpr int CONTINUE = 18;
    CaseConfig config;
    config.name = "exception/I-cache refill";
    config.scenario = Scenario::Exception;
    config.program = blank_program(48);
    config.program[0] = addi_w(10, 0, CRMD_ICACHE_DUNCACHED);
    config.program[1] = csrwr(10, CSR_CRMD);
    config.program[2] = pcaddu12i(11, 0);
    config.program[3] = addi_w(11, 11, HANDLER * 4);
    config.program[4] = csrwr(11, CSR_EENTRY);
    config.program[5] = addi_w(1, 0, DATA_BASE);
    config.program[15] = SYSCALL;
    config.program[16] = addi_w(20, 0, 20);
    config.program[17] = st_w(20, 1, 4);
    config.program[CONTINUE] = addi_w(21, 0, 9);
    config.program[CONTINUE + 1] = st_w(21, 1, 0);
    config.program[CONTINUE + 2] = b(0);
    config.program[HANDLER] = csrrd(20, CSR_ERA);
    config.program[HANDLER + 1] = addi_w(20, 20, 12);
    config.program[HANDLER + 2] = csrwr(20, CSR_ERA);
    config.program[HANDLER + 3] = ERTN;
    config.program[HANDLER + 4] = addi_w(31, 0, 31);
    for (int index = 0; index <= 14; ++index)
        config.expected_indices.push_back(index);
    config.expected_indices.insert(
        config.expected_indices.end(),
        {HANDLER, HANDLER + 1, HANDLER + 2, HANDLER + 3,
         CONTINUE, CONTINUE + 1, CONTINUE + 2});
    config.terminal_index = CONTINUE + 2;
    config.delayed_read_id = 0;
    config.delayed_read_addr = RESET_PC + 0x40U;
    config.primary_redirect_pc = RESET_PC + HANDLER * 4U;
    config.return_pc = RESET_PC + CONTINUE * 4U;
    config.fault_pc = RESET_PC + 15U * 4U;
    return config;
}

CaseConfig interrupt_case() {
    constexpr int HANDLER = 64;
    constexpr int CONTINUE = 12;
    constexpr int EXIT = 80;
    CaseConfig config;
    config.name = "interrupt/D-cache refill";
    config.scenario = Scenario::Interrupt;
    config.program = blank_program(EXIT + 8);
    config.program[0] = pcaddu12i(10, 0);
    config.program[1] = addi_w(10, 10, HANDLER * 4);
    config.program[2] = csrwr(10, CSR_EENTRY);
    config.program[3] = addi_w(11, 0, HW_IRQ0_LIE);
    config.program[4] = csrwr(11, CSR_ECFG);
    config.program[5] = addi_w(12, 0, CRMD_CACHE_IE);
    config.program[6] = csrwr(12, CSR_CRMD);
    config.program[7] = NOP;
    config.program[8] = addi_w(13, 0, DATA_BASE);
    config.program[9] = ld_w(2, 13, 0);
    config.program[10] = bl((16 - 10) * 4);
    config.program[11] = addi_w(29, 0, 29);
    config.program[CONTINUE] = addi_w(21, 0, 9);
    config.program[CONTINUE + 1] = b((EXIT - (CONTINUE + 1)) * 4);
    config.program[16] = b(0);
    config.program[17] = addi_w(30, 0, 30);
    config.program[HANDLER] = pcaddu12i(20, 0);
    config.program[HANDLER + 1] =
        addi_w(20, 20, (CONTINUE - HANDLER) * 4);
    config.program[HANDLER + 2] = csrwr(20, CSR_ERA);
    config.program[HANDLER + 3] = ERTN;
    config.program[HANDLER + 4] = addi_w(31, 0, 31);
    config.program[EXIT] = addi_w(22, 0, 22);
    config.program[EXIT + 1] = b(0);
    config.expected_indices = {
        0, 1, 2, 3, 4, 5, 6, 7, 8,
        HANDLER, HANDLER + 1, HANDLER + 2, HANDLER + 3,
        CONTINUE, CONTINUE + 1, EXIT, EXIT + 1,
    };
    config.terminal_index = EXIT + 1;
    config.delayed_read_id = 1;
    config.delayed_read_addr = DATA_BASE;
    config.primary_redirect_pc = RESET_PC + HANDLER * 4U;
    config.return_pc = RESET_PC + CONTINUE * 4U;
    return config;
}

bool run_case(Vcore_top_recovery_test_top* dut,
              const CaseConfig& config, bool stress) {
    reset(dut);
    AxiMemory memory(config, stress);
    size_t expected_pos = 0;
    bool commit_ok = true;
    bool completed = false;
    bool irq_asserted = false;
    bool clear_irq_after_tick = false;
    bool primary_redirect_seen = false;
    bool return_redirect_seen = config.return_pc == 0;
    bool redirect_overlapped_special = false;
    bool full_flush_overlapped_special = false;
    bool full_flush_cleared_ftq = true;
    bool full_flush_cleared_ghist = true;
    bool exception_seen = false;
    bool exception_ok = true;
    bool interrupt_trap_seen = false;
    int primary_redirects = 0;
    int return_redirects = 0;
    int full_flushes = 0;
    int terminal_commits = 0;
    uint64_t finish_cycle = 0;

    for (uint64_t cycle = 0; cycle < 16000; ++cycle) {
        memory.drive(dut, cycle);
        dut->eval();

        if (config.scenario == Scenario::Interrupt &&
            !irq_asserted && memory.special_data_read_pending() &&
            dut->ftq_valid_count >= 2 && dut->ghist_nonzero) {
            irq_asserted = true;
            dut->intrpt = 1;
            dut->eval();
        }

        memory.observe_stability(dut);
        bool full_flush_this_cycle = dut->frontend_flush_valid;
        bool special_live = memory.special_transaction_live(dut);

        if (dut->redirect_valid) {
            if (dut->redirect_pc == config.primary_redirect_pc) {
                primary_redirect_seen = true;
                ++primary_redirects;
                redirect_overlapped_special |= special_live;
                if (config.scenario == Scenario::Interrupt)
                    clear_irq_after_tick = true;
            }
            if (config.return_pc != 0 &&
                dut->redirect_pc == config.return_pc) {
                return_redirect_seen = true;
                ++return_redirects;
            }
        }

        if (full_flush_this_cycle) {
            ++full_flushes;
            if (special_live)
                full_flush_overlapped_special = true;
        }

        if (dut->exception_valid) {
            exception_seen = true;
            if (config.scenario == Scenario::Exception) {
                exception_ok &= dut->exception_pc == config.fault_pc &&
                                dut->exception_cause == ECODE_SYS;
            } else if (config.scenario == Scenario::Interrupt) {
                interrupt_trap_seen |= dut->exception_cause == 0;
            } else {
                exception_ok = false;
            }
        }

        for (unsigned lane = 0; lane < COMMIT_WIDTH; ++lane) {
            if ((dut->commit_valid & (1U << lane)) == 0)
                continue;
            uint32_t pc = packed_word(dut->commit_pc, lane);
            uint32_t inst = packed_word(dut->commit_inst, lane);
            int index = static_cast<int>((pc - RESET_PC) / 4U);

            if (pc < RESET_PC ||
                static_cast<size_t>(index) >= config.program.size() ||
                inst != config.program[index]) {
                commit_ok = false;
            } else if (expected_pos < config.expected_indices.size()) {
                if (index != config.expected_indices[expected_pos]) {
                    std::fprintf(
                        stderr,
                        "%s%s commit[%zu]: got index=%d pc=%08x "
                        "expected index=%d\n",
                        config.name, stress ? " stress" : "",
                        expected_pos, index, pc,
                        config.expected_indices[expected_pos]);
                    commit_ok = false;
                } else {
                    ++expected_pos;
                }
            } else if (index != config.terminal_index) {
                commit_ok = false;
            }

            if (index == config.terminal_index)
                ++terminal_commits;
        }

        memory.advance(dut, cycle);
        tick(dut);

        if (full_flush_this_cycle) {
            full_flush_cleared_ftq &= dut->ftq_valid_count == 0;
            full_flush_cleared_ghist &= !dut->ghist_nonzero;
        }
        if (clear_irq_after_tick) {
            dut->intrpt = 0;
            dut->eval();
            clear_irq_after_tick = false;
        }

        bool marker_ok = true;
        if (config.scenario == Scenario::Branch)
            marker_ok = memory.read_word(DATA_BASE) == 21U;
        else if (config.scenario == Scenario::Exception)
            marker_ok = memory.read_word(DATA_BASE) == 9U;

        bool expected_done =
            expected_pos == config.expected_indices.size();
        if (expected_done && terminal_commits != 0 && marker_ok &&
            memory.idle() && !dut->dmem_outstanding) {
            completed = true;
            finish_cycle = cycle;
            break;
        }
    }

    bool scenario_ok = primary_redirect_seen &&
                       primary_redirects == 1 &&
                       return_redirect_seen &&
                       (config.return_pc == 0 || return_redirects == 1);
    if (config.scenario == Scenario::Branch) {
        scenario_ok &= redirect_overlapped_special;
    } else {
        scenario_ok &= full_flush_overlapped_special &&
                       full_flush_cleared_ftq &&
                       full_flush_cleared_ghist;
    }
    if (config.scenario == Scenario::Exception) {
        scenario_ok &= exception_seen && exception_ok;
    } else if (config.scenario == Scenario::Interrupt) {
        scenario_ok &= interrupt_trap_seen;
    } else {
        scenario_ok &= !exception_seen;
    }
    if (config.scenario == Scenario::Interrupt)
        scenario_ok &= irq_asserted;

    bool marker_guard = memory.read_word(DATA_BASE + 4U) == 0;
    bool ok = completed && commit_ok && scenario_ok && marker_guard &&
              memory.protocol_ok() && memory.special_read_seen() &&
              memory.writes() == memory.completed_writes() &&
              (!stress || memory.saw_backpressure());

    std::printf(
        "%s: core_top recovery %s%s cycle=%llu commits=%zu "
        "flushes=%d ifetch=%u dread=%u writes=%u overlap=%d\n",
        ok ? "PASS" : "FAIL", config.name,
        stress ? " stress" : "",
        static_cast<unsigned long long>(finish_cycle), expected_pos,
        full_flushes, memory.instruction_reads(), memory.data_reads(),
        memory.writes(), redirect_overlapped_special);

    if (!ok) {
        std::fprintf(
            stderr,
            "  completed=%d commit_ok=%d expected=%zu/%zu terminal=%d "
            "primary=%d/%d return=%d/%d irq=%d exception=%d/%d "
            "flush_overlap=%d ftq_clear=%d ghist_clear=%d "
            "special=%d protocol=%d backpressure=%d marker=%08x/%08x "
            "idle=%d dmem=%d\n",
            completed, commit_ok, expected_pos,
            config.expected_indices.size(), terminal_commits,
            primary_redirect_seen, primary_redirects,
            return_redirect_seen, return_redirects,
            irq_asserted, exception_seen, exception_ok,
            full_flush_overlapped_special, full_flush_cleared_ftq,
            full_flush_cleared_ghist, memory.special_read_seen(),
            memory.protocol_ok(), memory.saw_backpressure(),
            memory.read_word(DATA_BASE),
            memory.read_word(DATA_BASE + 4U), memory.idle(),
            dut->dmem_outstanding);
    }
    dut->intrpt = 0;
    return ok;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_top_recovery_test_top;
    const std::vector<CaseConfig> cases = {
        branch_case(),
        exception_case(),
        interrupt_case(),
    };

    bool passed = true;
    for (const CaseConfig& config : cases) {
        passed &= run_case(dut, config, false);
        passed &= run_case(dut, config, true);
    }

    dut->final();
    delete dut;
    if (passed)
        std::puts("PASS: core_top_recovery");
    return passed ? 0 : 1;
}
