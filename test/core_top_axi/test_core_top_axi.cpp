#include "Vcore_top.h"
#include "verilated.h"

#include <cstdint>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

namespace {

constexpr uint32_t RESET_PC = 0x1c000000U;
constexpr uint32_t DATA_BASE = 0x00000100U;
constexpr uint32_t NOP = 0x03400000U;

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

constexpr uint32_t st_b(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29000000U, rd, rj, imm12);
}

constexpr uint32_t st_h(unsigned rd, unsigned rj, int imm12) {
    return mem_i12(0x29400000U, rd, rj, imm12);
}

constexpr uint32_t b(int byte_offset) {
    unsigned imm26 =
        static_cast<unsigned>(byte_offset >> 2) & 0x03ffffffU;
    return 0x50000000U | ((imm26 & 0xffffU) << 10) |
           (imm26 >> 16);
}

void tick(Vcore_top* dut) {
    dut->aclk = 1;
    dut->eval();
    dut->aclk = 0;
    dut->eval();
}

void reset(Vcore_top* dut) {
    dut->aclk = 0;
    dut->aresetn = 0;
    dut->intrpt = 0;
    dut->arready = 0;
    dut->rvalid = 0;
    dut->rid = 0;
    dut->rdata = 0;
    dut->rresp = 0;
    dut->rlast = 0;
    dut->awready = 0;
    dut->wready = 0;
    dut->bvalid = 0;
    dut->bid = 0;
    dut->bresp = 0;
    dut->break_point = 0;
    dut->infor_flag = 0;
    dut->reg_num = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->aresetn = 1;
    dut->eval();
}

class AxiMemory {
public:
    explicit AxiMemory(bool stress) : stress_(stress) {
        write_word(RESET_PC + 0, addi_w(1, 0, DATA_BASE));
        write_word(RESET_PC + 4, addi_w(2, 0, 0x5a));
        write_word(RESET_PC + 8, st_b(2, 1, 1));
        write_word(RESET_PC + 12, addi_w(2, 0, 0x345));
        write_word(RESET_PC + 16, st_h(2, 1, 2));
        write_word(RESET_PC + 20, ld_w(3, 1, 8));
        write_word(RESET_PC + 24, addi_w(4, 3, 7));
        write_word(RESET_PC + 28, st_w(4, 1, 4));
        write_word(RESET_PC + 32, b(0));
        write_word(DATA_BASE, 0x11223344);
        write_word(DATA_BASE + 8, 0x20);
    }

    void drive(Vcore_top* dut, int cycle) {
        dut->arready =
            !stress_ || (cycle % 7 != 1 && cycle % 7 != 2);
        dut->awready =
            !stress_ || (cycle % 5 != 1);
        dut->wready =
            !stress_ || (cycle % 6 != 3);

        dut->rvalid = 0;
        dut->rid = 0;
        dut->rdata = 0;
        dut->rresp = 0;
        dut->rlast = 0;
        if (read_pending_ && cycle >= read_due_cycle_) {
            dut->rvalid = 1;
            dut->rid = read_id_;
            dut->rdata = read_word(read_addr_ + read_beat_ * 4);
            dut->rlast = read_beat_ == read_len_;
        }

        dut->bvalid = 0;
        dut->bid = 0;
        dut->bresp = 0;
        if (write_response_pending_ &&
            cycle >= write_response_due_cycle_) {
            dut->bvalid = 1;
            dut->bid = 1;
        }
    }

    void observe_stability(Vcore_top* dut) {
        if (hold_ar_) {
            protocol_ok_ &=
                dut->arvalid &&
                dut->arid == held_arid_ &&
                dut->araddr == held_araddr_ &&
                dut->arlen == held_arlen_;
        }
        if (hold_aw_) {
            protocol_ok_ &=
                dut->awvalid &&
                dut->awaddr == held_awaddr_ &&
                dut->awlen == 0;
        }
        if (hold_w_) {
            protocol_ok_ &=
                dut->wvalid &&
                dut->wdata == held_wdata_ &&
                dut->wstrb == held_wstrb_;
        }

        hold_ar_ = dut->arvalid && !dut->arready;
        hold_aw_ = dut->awvalid && !dut->awready;
        hold_w_ = dut->wvalid && !dut->wready;

        if (hold_ar_) {
            saw_backpressure_ = true;
            held_arid_ = dut->arid;
            held_araddr_ = dut->araddr;
            held_arlen_ = dut->arlen;
        }
        if (hold_aw_) {
            saw_backpressure_ = true;
            held_awaddr_ = dut->awaddr;
        }
        if (hold_w_) {
            saw_backpressure_ = true;
            held_wdata_ = dut->wdata;
            held_wstrb_ = dut->wstrb;
        }
    }

    void advance(Vcore_top* dut, int cycle) {
        bool ar_fire = dut->arvalid && dut->arready;
        bool r_fire = dut->rvalid && dut->rready;
        bool aw_fire = dut->awvalid && dut->awready;
        bool w_fire = dut->wvalid && dut->wready;
        bool b_fire = dut->bvalid && dut->bready;

        if (r_fire) {
            append_trace(cycle, "R", dut->rid, dut->rdata,
                         dut->rlast);
            if (!read_pending_) {
                protocol_ok_ = false;
            } else if (read_beat_ == read_len_) {
                read_pending_ = false;
                read_beat_ = 0;
            } else {
                ++read_beat_;
            }
        }

        if (b_fire) {
            append_trace(cycle, "B", dut->bid, dut->bresp, 0);
            if (!write_response_pending_)
                protocol_ok_ = false;
            write_response_pending_ = false;
            ++completed_writes_;
        }

        if (ar_fire) {
            append_trace(cycle, "AR", dut->arid, dut->araddr,
                         dut->arlen);
            protocol_ok_ &= !read_pending_;
            protocol_ok_ &= dut->arsize == 2;
            protocol_ok_ &= dut->arburst == 1;
            protocol_ok_ &= (dut->araddr & 3U) == 0;

            if (dut->arid == 0) {
                protocol_ok_ &= dut->arlen == 3;
                protocol_ok_ &= (dut->araddr & 15U) == 0;
                ++instruction_reads_;
            } else if (dut->arid == 1) {
                protocol_ok_ &= dut->arlen == 0;
                ++data_reads_;
            } else {
                protocol_ok_ = false;
            }

            read_pending_ = true;
            read_id_ = dut->arid;
            read_addr_ = dut->araddr;
            read_len_ = dut->arlen;
            read_beat_ = 0;
            read_due_cycle_ = cycle + 2;
        }

        if (aw_fire) {
            append_trace(cycle, "AW", dut->awid, dut->awaddr,
                         dut->awlen);
            protocol_ok_ &= !aw_seen_;
            protocol_ok_ &= dut->awid == 1;
            protocol_ok_ &= dut->awlen == 0;
            protocol_ok_ &= dut->awsize == 2;
            protocol_ok_ &= dut->awburst == 1;
            protocol_ok_ &= (dut->awaddr & 3U) == 0;
            aw_seen_ = true;
            aw_addr_ = dut->awaddr;
        }

        if (w_fire) {
            append_trace(cycle, "W", dut->wid, dut->wdata,
                         dut->wstrb);
            protocol_ok_ &= !w_seen_;
            protocol_ok_ &= dut->wid == 1;
            protocol_ok_ &= dut->wlast;
            w_seen_ = true;
            w_data_ = dut->wdata;
            w_strb_ = dut->wstrb;
        }

        if (aw_seen_ && w_seen_) {
            protocol_ok_ &= !write_response_pending_;
            write_strobed(aw_addr_, w_data_, w_strb_);
            aw_seen_ = false;
            w_seen_ = false;
            write_response_pending_ = true;
            write_response_due_cycle_ = cycle + 2;
            ++writes_;
        }
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
            value |= static_cast<uint32_t>(it->second) << (8 * byte);
        }

        if (!found && base >= RESET_PC)
            return NOP;
        return value;
    }

    bool protocol_ok() const { return protocol_ok_; }
    bool saw_backpressure() const { return saw_backpressure_; }
    unsigned instruction_reads() const { return instruction_reads_; }
    unsigned data_reads() const { return data_reads_; }
    unsigned writes() const { return writes_; }
    unsigned completed_writes() const { return completed_writes_; }
    const std::vector<std::string>& trace() const { return trace_; }

private:
    void append_trace(int cycle, const char* channel, unsigned id,
                      uint32_t value, unsigned extra) {
        char line[96];
        std::snprintf(line, sizeof(line),
                      "cycle=%4d %-2s id=%u value=%08x extra=%x",
                      cycle, channel, id, value, extra);
        trace_.emplace_back(line);
    }

    void write_word(uint32_t addr, uint32_t data) {
        write_strobed(addr, data, 0xf);
    }

    void write_strobed(uint32_t addr, uint32_t data,
                       unsigned strobe) {
        uint32_t base = addr & ~3U;
        for (unsigned byte = 0; byte < 4; ++byte) {
            if (strobe & (1U << byte))
                bytes_[base + byte] =
                    static_cast<uint8_t>(data >> (8 * byte));
        }
    }

    bool stress_ = false;
    bool protocol_ok_ = true;
    bool saw_backpressure_ = false;
    std::map<uint32_t, uint8_t> bytes_;

    bool read_pending_ = false;
    unsigned read_id_ = 0;
    uint32_t read_addr_ = 0;
    unsigned read_len_ = 0;
    unsigned read_beat_ = 0;
    int read_due_cycle_ = 0;

    bool aw_seen_ = false;
    bool w_seen_ = false;
    uint32_t aw_addr_ = 0;
    uint32_t w_data_ = 0;
    unsigned w_strb_ = 0;
    bool write_response_pending_ = false;
    int write_response_due_cycle_ = 0;

    bool hold_ar_ = false;
    bool hold_aw_ = false;
    bool hold_w_ = false;
    unsigned held_arid_ = 0;
    uint32_t held_araddr_ = 0;
    unsigned held_arlen_ = 0;
    uint32_t held_awaddr_ = 0;
    uint32_t held_wdata_ = 0;
    unsigned held_wstrb_ = 0;

    unsigned instruction_reads_ = 0;
    unsigned data_reads_ = 0;
    unsigned writes_ = 0;
    unsigned completed_writes_ = 0;
    std::vector<std::string> trace_;
};

bool run_case(Vcore_top* dut, bool stress) {
    reset(dut);
    AxiMemory memory(stress);
    bool finished = false;
    std::vector<std::string> commits;

    for (int cycle = 0; cycle < 4000; ++cycle) {
        memory.drive(dut, cycle);
        dut->eval();
        if (dut->debug0_wb_rf_wen != 0) {
            char line[128];
            std::snprintf(
                line, sizeof(line),
                "cycle=%4d pc=%08x rd=%u data=%08x wen=%x",
                cycle, dut->debug0_wb_pc, dut->debug0_wb_rf_wnum,
                dut->debug0_wb_rf_wdata, dut->debug0_wb_rf_wen);
            commits.emplace_back(line);
        }
        memory.observe_stability(dut);
        memory.advance(dut, cycle);
        tick(dut);

        if (memory.read_word(DATA_BASE + 4) == 0x27 &&
            memory.completed_writes() >= 3) {
            finished = true;
            break;
        }
    }

    bool ok = finished &&
              memory.protocol_ok() &&
              memory.read_word(DATA_BASE) == 0x03455a44 &&
              memory.read_word(DATA_BASE + 4) == 0x27 &&
              memory.instruction_reads() >= 2 &&
              memory.data_reads() >= 1 &&
              memory.writes() == 3 &&
              memory.completed_writes() == 3 &&
              (!stress || memory.saw_backpressure());

    std::printf(
        "%s: core_top AXI%s inst_reads=%u data_reads=%u writes=%u\n",
        ok ? "PASS" : "FAIL",
        stress ? " stress" : "",
        memory.instruction_reads(),
        memory.data_reads(),
        memory.writes());
    if (!ok) {
        std::printf(
            "  finished=%d protocol_ok=%d backpressure=%d "
            "data[0]=%08x data[4]=%08x completed=%u\n",
            finished, memory.protocol_ok(), memory.saw_backpressure(),
            memory.read_word(DATA_BASE),
            memory.read_word(DATA_BASE + 4),
            memory.completed_writes());
        std::puts("  AXI handshakes:");
        for (const auto& line : memory.trace())
            std::printf("    %s\n", line.c_str());
        std::puts("  visible GPR commits:");
        for (const auto& line : commits)
            std::printf("    %s\n", line.c_str());
    }
    return ok;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vcore_top dut;

    bool ok = run_case(&dut, false);
    ok &= run_case(&dut, true);

    if (ok)
        std::puts("PASS: core_top_axi");
    return ok ? 0 : 1;
}
