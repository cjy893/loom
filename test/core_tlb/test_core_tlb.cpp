#include "Vcore_tlb_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

namespace {

constexpr int CORE_WIDTH = 2;
constexpr uint32_t RESET_PC = 0x1c000000;

constexpr uint32_t TLBSRCH = 0x06482800;
constexpr uint32_t TLBRD = 0x06482c00;
constexpr uint32_t TLBWR = 0x06483000;
constexpr uint32_t TLBFILL = 0x06483400;

constexpr unsigned CSR_TLBIDX = 0x010;
constexpr unsigned CSR_TLBEHI = 0x011;
constexpr unsigned CSR_TLBELO0 = 0x012;
constexpr unsigned CSR_TLBELO1 = 0x013;
constexpr unsigned CSR_ASID = 0x018;
constexpr unsigned CSR_CRMD = 0x000;

constexpr uint32_t TLBIDX_NE = 0x80000000;
constexpr uint32_t CSR_UPDATE_TLBIDX = 0x01;
constexpr uint32_t CSR_UPDATE_ALL = 0x1f;
constexpr uint32_t ASID_BITS_VALUE = 10U << 16;

constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x02800000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t lu12i_w(unsigned rd, uint32_t imm20) {
    return 0x14000000U | ((imm20 & 0xfffffU) << 5) |
           (rd & 0x1fU);
}

constexpr uint32_t ori(unsigned rd, unsigned rj, unsigned imm12) {
    return 0x03800000U | ((imm12 & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t beq(unsigned rj, unsigned rd, int byte_offset) {
    return 0x58000000U |
           ((static_cast<unsigned>(byte_offset >> 2) & 0xffffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
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

constexpr uint32_t invtlb(unsigned op, unsigned asid_reg,
                          unsigned vaddr_reg) {
    return 0x06498000U | ((vaddr_reg & 0x1fU) << 10) |
           ((asid_reg & 0x1fU) << 5) | (op & 0x1fU);
}

constexpr uint32_t make_tlbidx(unsigned index, unsigned ps, bool ne) {
    return (static_cast<uint32_t>(ne) << 31) |
           ((ps & 0x3fU) << 24) | (index & 0x1fU);
}

constexpr uint32_t make_tlbelo(unsigned ppn, bool global, unsigned mat,
                               unsigned plv, bool dirty, bool valid) {
    return ((ppn & 0xfffffU) << 8) |
           (static_cast<uint32_t>(global) << 6) |
           ((mat & 3U) << 4) | ((plv & 3U) << 2) |
           (static_cast<uint32_t>(dirty) << 1) |
           static_cast<uint32_t>(valid);
}

static_assert(invtlb(5, 12, 13) ==
              (0x06498000U | (13U << 10) | (12U << 5) | 5U));

unsigned packed_field(const VlWide<5>& value, int index, int width) {
    unsigned bit = static_cast<unsigned>(index * width);
    unsigned word = bit / 32;
    unsigned shift = bit % 32;
    uint64_t chunk = value[word];
    if (shift + width > 32)
        chunk |= static_cast<uint64_t>(value[word + 1]) << 32;
    return static_cast<unsigned>(
        (chunk >> shift) & ((uint64_t{1} << width) - 1));
}

unsigned packed_field(uint32_t value, int index, int width) {
    return (value >> (index * width)) & ((1U << width) - 1U);
}

uint32_t packed_word(uint64_t value, int index) {
    return static_cast<uint32_t>(value >> (index * 32));
}

bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

bool check_eq(const std::string& name, uint32_t actual,
              uint32_t expected) {
    if (actual == expected)
        return true;
    std::fprintf(stderr, "FAIL: %s: got=0x%08x expected=0x%08x\n",
                 name.c_str(), actual, expected);
    return false;
}

using Program = std::map<uint32_t, uint32_t>;

class ProgramBuilder {
public:
    uint32_t emit(uint32_t inst) {
        uint32_t emitted_pc = pc_;
        program_[pc_] = inst;
        pc_ += 4;
        return emitted_pc;
    }

    void li32(unsigned rd, uint32_t value) {
        emit(lu12i_w(rd, value >> 12));
        emit(ori(rd, rd, value & 0xfffU));
    }

    uint32_t write_csr(unsigned addr, unsigned temp_reg,
                       uint32_t value) {
        li32(temp_reg, value);
        return emit(csrwr(temp_reg, addr));
    }

    const Program& program() const {
        return program_;
    }

    uint32_t pc() const {
        return pc_;
    }

private:
    Program program_;
    uint32_t pc_ = RESET_PC;
};

struct CommitRecord {
    int cycle;
    uint32_t pc;
    uint32_t inst;
};

struct WriteEvent {
    int cycle;
    unsigned idx;
    bool enabled;
    uint32_t vppn;
    uint32_t asid;
    bool global;
    uint32_t ps;
    uint32_t ppn0;
    uint32_t ppn1;
    uint32_t mat0;
    uint32_t mat1;
    uint32_t plv0;
    uint32_t plv1;
    bool d0;
    bool d1;
    bool v0;
    bool v1;
};

struct InvEvent {
    int cycle;
    unsigned op;
    uint32_t asid;
    uint32_t vaddr;
};

struct CsrUpdateEvent {
    int cycle;
    unsigned mask;
    uint32_t tlbidx;
};

struct SearchEvent {
    int cycle;
    uint32_t vaddr;
    uint32_t asid;
};

struct RunResult {
    bool finished = false;
    bool unexpected_dmem = false;
    int req_count = 0;
    int resp_count = 0;
    int xlate_req_count = 0;
    int xlate_resp_count = 0;
    int itlb_tlb_resp_count = 0;
    int q0_collision_count = 0;
    bool q0_collision_blocked = false;
    std::vector<CommitRecord> commits;
    std::vector<WriteEvent> writes;
    std::vector<InvEvent> invalidates;
    std::vector<CsrUpdateEvent> csr_updates;
    std::vector<SearchEvent> searches;
    std::array<uint32_t, 32> last_write{};
    std::array<unsigned, 32> write_count{};
    uint32_t final_tlbidx = 0;
    uint32_t final_tlbehi = 0;
    uint32_t final_tlbelo0 = 0;
    uint32_t final_tlbelo1 = 0;
    uint32_t final_asid = 0;
    uint32_t xlate_resp_vaddr = 0;
    uint32_t xlate_resp_paddr = 0;
    uint32_t xlate_resp_mat = 0;
    uint32_t xlate_resp_xcpt_code = 0;
    uint32_t xlate_resp_badvaddr = 0;
    bool xlate_resp_cacheable = false;
    bool xlate_resp_xcpt_valid = false;
};

void tick(Vcore_tlb_test_top* dut) {
    dut->clk = 1;
    dut->eval();
    dut->clk = 0;
    dut->eval();
}

void reset(Vcore_tlb_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    dut->ifu_xlate_req_valid = 0;
    dut->ifu_xlate_req_vaddr = 0;
    dut->ifu_xlate_resp_ready = 1;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    for (int cycle = 0; cycle < 10; ++cycle)
        tick(dut);

    dut->rst_n = 1;
    dut->eval();
}

bool drive_fetch(Vcore_tlb_test_top* dut, const Program& program) {
    dut->fe_valid = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    uint32_t first_pc = dut->debug_pc;
    for (int lane = 0; lane < CORE_WIDTH; ++lane) {
        auto it = program.find(first_pc + 4U * lane);
        if (it == program.end())
            continue;
        dut->fe_valid |= 1U << lane;
        dut->fe_insts[lane] = it->second;
    }

    dut->eval();
    return dut->fe_ready && dut->fe_valid != 0;
}

bool has_instruction_at(const Program& program, uint32_t pc) {
    return program.find(pc) != program.end();
}

RunResult run_program(Vcore_tlb_test_top* dut, const Program& program,
                      int xlate_start_cycle = -1,
                      uint32_t xlate_vaddr = 0) {
    reset(dut);
    RunResult result;
    int last_activity = 0;
    bool xlate_pending = xlate_start_cycle >= 0;

    for (int cycle = 0; cycle < 4000; ++cycle) {
        dut->ifu_xlate_req_valid =
            xlate_pending && cycle >= xlate_start_cycle;
        dut->ifu_xlate_req_vaddr = xlate_vaddr;
        if (drive_fetch(dut, program))
            last_activity = cycle;

        bool xlate_req_fire =
            dut->ifu_xlate_req_valid && dut->ifu_xlate_req_ready;
        if (xlate_req_fire) {
            ++result.xlate_req_count;
            last_activity = cycle;
        }
        if (dut->tlb_search_req_valid && dut->itlb_tlb_req_valid) {
            ++result.q0_collision_count;
            result.q0_collision_blocked |= !dut->itlb_tlb_req_ready;
            last_activity = cycle;
        }
        if (dut->itlb_tlb_resp_valid) {
            ++result.itlb_tlb_resp_count;
            last_activity = cycle;
        }
        if (dut->ifu_xlate_resp_valid) {
            ++result.xlate_resp_count;
            result.xlate_resp_vaddr = dut->ifu_xlate_resp_vaddr;
            result.xlate_resp_paddr = dut->ifu_xlate_resp_paddr;
            result.xlate_resp_mat = dut->ifu_xlate_resp_mat;
            result.xlate_resp_cacheable = dut->ifu_xlate_resp_cacheable;
            result.xlate_resp_xcpt_valid = dut->ifu_xlate_resp_xcpt_valid;
            result.xlate_resp_xcpt_code = dut->ifu_xlate_resp_xcpt_code;
            result.xlate_resp_badvaddr = dut->ifu_xlate_resp_badvaddr;
            last_activity = cycle;
        }

        unsigned commit_mask = dut->commit_valids;
        for (int lane = 0; lane < CORE_WIDTH; ++lane) {
            if (!(commit_mask & (1U << lane)))
                continue;
            result.commits.push_back({
                cycle,
                packed_word(dut->commit_pcs, lane),
                packed_word(dut->commit_insts, lane),
            });
            last_activity = cycle;
        }

        unsigned rf_mask = dut->rf_write_valid;
        for (int port = 0; port < 5; ++port) {
            if (!(rf_mask & (1U << port)))
                continue;
            unsigned ldst =
                packed_field(dut->rf_write_ldst, port, 5);
            if (ldst == 0)
                continue;
            ++result.write_count[ldst];
            result.last_write[ldst] =
                packed_field(dut->rf_write_data, port, 32);
            last_activity = cycle;
        }

        if (dut->tlb_req_fire) {
            ++result.req_count;
            last_activity = cycle;
        }
        if (dut->tlb_resp_valid) {
            ++result.resp_count;
            last_activity = cycle;
        }
        if (dut->tlb_search_req_valid) {
            result.searches.push_back({
                cycle,
                dut->tlb_search_req_vaddr,
                dut->tlb_search_req_asid,
            });
            last_activity = cycle;
        }
        if (dut->tlb_wr_valid) {
            result.writes.push_back({
                cycle,
                dut->tlb_wr_idx,
                static_cast<bool>(dut->tlb_wr_e),
                dut->tlb_wr_vppn,
                dut->tlb_wr_asid,
                static_cast<bool>(dut->tlb_wr_g),
                dut->tlb_wr_ps,
                dut->tlb_wr_ppn0,
                dut->tlb_wr_ppn1,
                dut->tlb_wr_mat0,
                dut->tlb_wr_mat1,
                dut->tlb_wr_plv0,
                dut->tlb_wr_plv1,
                static_cast<bool>(dut->tlb_wr_d0),
                static_cast<bool>(dut->tlb_wr_d1),
                static_cast<bool>(dut->tlb_wr_v0),
                static_cast<bool>(dut->tlb_wr_v1),
            });
            last_activity = cycle;
        }
        if (dut->tlb_inv_valid) {
            result.invalidates.push_back({
                cycle,
                dut->tlb_inv_op,
                dut->tlb_inv_asid,
                dut->tlb_inv_vaddr,
            });
            last_activity = cycle;
        }
        if (dut->tlb_csr_update_valid) {
            result.csr_updates.push_back({
                cycle,
                dut->tlb_csr_update_mask,
                dut->tlb_csr_tlbidx_wdata,
            });
            last_activity = cycle;
        }

        result.unexpected_dmem |= dut->dmem_req_valid;
        tick(dut);
        if (xlate_req_fire)
            xlate_pending = false;

        bool source_finished =
            !has_instruction_at(program, dut->debug_pc);
        if (source_finished && dut->rob_empty &&
            cycle - last_activity > 20) {
            result.finished = true;
            break;
        }
    }

    result.final_tlbidx = dut->csr_tlbidx;
    result.final_tlbehi = dut->csr_tlbehi;
    result.final_tlbelo0 = dut->csr_tlbelo0;
    result.final_tlbelo1 = dut->csr_tlbelo1;
    result.final_asid = dut->csr_asid;

    dut->fe_valid = 0;
    dut->ifu_xlate_req_valid = 0;
    dut->eval();
    return result;
}

int commit_cycle(const RunResult& result, uint32_t pc) {
    for (const auto& commit : result.commits) {
        if (commit.pc == pc)
            return commit.cycle;
    }
    return -1;
}

unsigned commit_count(const RunResult& result, uint32_t pc) {
    unsigned count = 0;
    for (const auto& commit : result.commits) {
        if (commit.pc == pc)
            ++count;
    }
    return count;
}

bool check_common(const std::string& tag, const RunResult& result,
                  int expected_requests) {
    bool passed = true;
    passed &= check(tag + " reaches quiescence", result.finished);
    passed &= check(tag + " emits no data-memory request",
                    !result.unexpected_dmem);
    passed &= check_eq(tag + " TLB request count", result.req_count,
                       expected_requests);
    passed &= check_eq(tag + " TLB response count", result.resp_count,
                       expected_requests);
    return passed;
}

bool check_event_at_commit(const std::string& tag, int event_cycle,
                           const RunResult& result, uint32_t pc) {
    int expected_cycle = commit_cycle(result, pc);
    return check(tag + " occurs in its commit cycle",
                 expected_cycle >= 0 && event_cycle == expected_cycle);
}

bool test_write_read_search(Vcore_tlb_test_top* dut) {
    constexpr unsigned index = 3;
    constexpr unsigned ps = 12;
    constexpr uint32_t asid = 0x155;
    constexpr uint32_t tlbehi = 0x41234000;
    constexpr uint32_t tlbelo0 =
        make_tlbelo(0x12345, false, 2, 3, true, true);
    constexpr uint32_t tlbelo1 =
        make_tlbelo(0x54321, false, 1, 1, false, true);
    constexpr uint32_t tlbidx = make_tlbidx(index, ps, false);

    ProgramBuilder builder;
    builder.write_csr(CSR_TLBIDX, 1, tlbidx);
    builder.write_csr(CSR_TLBEHI, 2, tlbehi);
    builder.write_csr(CSR_TLBELO0, 3, tlbelo0);
    builder.write_csr(CSR_TLBELO1, 4, tlbelo1);
    builder.write_csr(CSR_ASID, 5, asid);
    uint32_t tlbwr_pc = builder.emit(TLBWR);

    // Poison the CSR payload while preserving the read index. TLBRD must
    // restore the entry captured by TLBWR, not retain these values.
    builder.write_csr(CSR_TLBIDX, 6,
                      make_tlbidx(index, 22, true));
    builder.write_csr(CSR_TLBEHI, 7, 0);
    builder.write_csr(CSR_TLBELO0, 8, 0);
    builder.write_csr(CSR_TLBELO1, 9, 0);
    builder.write_csr(CSR_ASID, 10, 0);
    uint32_t tlbrd_pc = builder.emit(TLBRD);
    builder.emit(csrrd(20, CSR_TLBIDX));
    builder.emit(csrrd(21, CSR_TLBEHI));
    builder.emit(csrrd(22, CSR_TLBELO0));
    builder.emit(csrrd(23, CSR_TLBELO1));
    builder.emit(csrrd(24, CSR_ASID));
    uint32_t tlbsrch_pc = builder.emit(TLBSRCH);
    builder.emit(csrrd(25, CSR_TLBIDX));

    RunResult result = run_program(dut, builder.program());
    bool passed = check_common("TLBWR/TLBRD/TLBSRCH", result, 3);

    passed &= check("TLBWR commits exactly once",
                    commit_count(result, tlbwr_pc) == 1);
    passed &= check("TLBRD commits exactly once",
                    commit_count(result, tlbrd_pc) == 1);
    passed &= check("TLBSRCH commits exactly once",
                    commit_count(result, tlbsrch_pc) == 1);

    passed &= check("TLBWR emits one write event",
                    result.writes.size() == 1);
    if (!result.writes.empty()) {
        const WriteEvent& event = result.writes.front();
        passed &= check_event_at_commit(
            "TLBWR write", event.cycle, result, tlbwr_pc);
        passed &= check_eq("TLBWR index", event.idx, index);
        passed &= check("TLBWR enables entry", event.enabled);
        passed &= check_eq("TLBWR VPPN", event.vppn, tlbehi >> 13);
        passed &= check_eq("TLBWR ASID", event.asid, asid);
        passed &= check("TLBWR non-global entry", !event.global);
        passed &= check_eq("TLBWR page size", event.ps, ps);
        passed &= check_eq("TLBWR PPN0", event.ppn0, 0x12345);
        passed &= check_eq("TLBWR PPN1", event.ppn1, 0x54321);
        passed &= check_eq("TLBWR MAT0", event.mat0, 2);
        passed &= check_eq("TLBWR MAT1", event.mat1, 1);
        passed &= check_eq("TLBWR PLV0", event.plv0, 3);
        passed &= check_eq("TLBWR PLV1", event.plv1, 1);
        passed &= check("TLBWR D/V attributes",
                        event.d0 && !event.d1 &&
                        event.v0 && event.v1);
    }

    passed &= check("TLBRD and TLBSRCH emit two CSR updates",
                    result.csr_updates.size() == 2);
    if (result.csr_updates.size() >= 2) {
        passed &= check_event_at_commit(
            "TLBRD CSR update", result.csr_updates[0].cycle,
            result, tlbrd_pc);
        passed &= check_eq("TLBRD CSR update mask",
                           result.csr_updates[0].mask,
                           CSR_UPDATE_ALL);
        passed &= check_event_at_commit(
            "TLBSRCH CSR update", result.csr_updates[1].cycle,
            result, tlbsrch_pc);
        passed &= check_eq("TLBSRCH CSR update mask",
                           result.csr_updates[1].mask,
                           CSR_UPDATE_TLBIDX);
        passed &= check_eq("TLBSRCH hit index",
                           result.csr_updates[1].tlbidx,
                           tlbidx);
    }

    passed &= check("TLBSRCH emits one query",
                    result.searches.size() == 1);
    if (!result.searches.empty()) {
        passed &= check_eq("TLBSRCH query address",
                           result.searches[0].vaddr,
                           tlbehi & 0xffffe000U);
        passed &= check_eq("TLBSRCH query ASID",
                           result.searches[0].asid, asid);
    }

    passed &= check_eq("TLBRD reads TLBIDX",
                       result.last_write[20], tlbidx);
    passed &= check_eq("TLBRD reads TLBEHI",
                       result.last_write[21],
                       tlbehi & 0xffffe000U);
    passed &= check_eq("TLBRD reads TLBELO0",
                       result.last_write[22],
                       tlbelo0 & 0x0fffff7fU);
    passed &= check_eq("TLBRD reads TLBELO1",
                       result.last_write[23],
                       tlbelo1 & 0x0fffff7fU);
    passed &= check_eq("TLBRD reads ASID and ASIDBITS",
                       result.last_write[24],
                       ASID_BITS_VALUE | asid);
    passed &= check_eq("TLBSRCH result is readable",
                       result.last_write[25], tlbidx);
    passed &= check("write/read/search emits no invalidate",
                    result.invalidates.empty());

    if (passed)
        std::printf("PASS: integrated TLBWR, TLBRD and TLBSRCH\n");
    return passed;
}

bool test_fill_replacement(Vcore_tlb_test_top* dut) {
    constexpr uint32_t asid_a = 0x21;
    constexpr uint32_t asid_b = 0x22;
    constexpr uint32_t hi_a = 0x20000000;
    constexpr uint32_t hi_b = 0x30000000;
    constexpr uint32_t elo0 =
        make_tlbelo(0x11111, false, 1, 0, true, true);
    constexpr uint32_t elo1 =
        make_tlbelo(0x22222, false, 2, 3, true, true);

    ProgramBuilder builder;
    builder.write_csr(CSR_TLBIDX, 1,
                      make_tlbidx(17, 12, true));
    builder.write_csr(CSR_TLBEHI, 2, hi_a);
    builder.write_csr(CSR_TLBELO0, 3, elo0);
    builder.write_csr(CSR_TLBELO1, 4, elo1);
    builder.write_csr(CSR_ASID, 5, asid_a);
    uint32_t fill_a_pc = builder.emit(TLBFILL);

    builder.write_csr(CSR_TLBEHI, 6, hi_b);
    builder.write_csr(CSR_ASID, 7, asid_b);
    uint32_t fill_b_pc = builder.emit(TLBFILL);
    uint32_t search_b_pc = builder.emit(TLBSRCH);
    builder.emit(csrrd(20, CSR_TLBIDX));

    RunResult result = run_program(dut, builder.program());
    bool passed = check_common("TLBFILL replacement", result, 3);
    passed &= check("two TLBFILL commands emit two writes",
                    result.writes.size() == 2);
    if (result.writes.size() >= 2) {
        passed &= check_event_at_commit(
            "first TLBFILL", result.writes[0].cycle,
            result, fill_a_pc);
        passed &= check_event_at_commit(
            "second TLBFILL", result.writes[1].cycle,
            result, fill_b_pc);
        passed &= check_eq("first TLBFILL index",
                           result.writes[0].idx, 0);
        passed &= check_eq("second TLBFILL index",
                           result.writes[1].idx, 1);
        passed &= check("TLBFILL ignores TLBIDX.NE",
                        result.writes[0].enabled &&
                        result.writes[1].enabled);
        passed &= check_eq("first TLBFILL VPPN",
                           result.writes[0].vppn, hi_a >> 13);
        passed &= check_eq("second TLBFILL VPPN",
                           result.writes[1].vppn, hi_b >> 13);
    }
    passed &= check("TLBFILL search emits one CSR update",
                    result.csr_updates.size() == 1);
    if (!result.csr_updates.empty()) {
        passed &= check_event_at_commit(
            "TLBFILL mapping search",
            result.csr_updates[0].cycle, result, search_b_pc);
        passed &= check_eq("second fill is searchable at index 1",
                           result.csr_updates[0].tlbidx,
                           make_tlbidx(1, 12, false));
    }
    passed &= check_eq("TLBFILL search CSR readback",
                       result.last_write[20],
                       make_tlbidx(1, 12, false));

    if (passed)
        std::printf("PASS: integrated TLBFILL replacement\n");
    return passed;
}

bool test_invalidate_operands(Vcore_tlb_test_top* dut) {
    constexpr uint32_t asid = 0x2a5;
    constexpr uint32_t tlbehi = 0x60004000;
    constexpr uint32_t vaddr = 0x60004789;
    constexpr uint32_t elo0 =
        make_tlbelo(0x34567, false, 1, 0, true, true);
    constexpr uint32_t elo1 =
        make_tlbelo(0x45678, false, 1, 0, true, true);

    ProgramBuilder builder;
    builder.write_csr(CSR_TLBIDX, 1,
                      make_tlbidx(4, 12, false));
    builder.write_csr(CSR_TLBEHI, 2, tlbehi);
    builder.write_csr(CSR_TLBELO0, 3, elo0);
    builder.write_csr(CSR_TLBELO1, 4, elo1);
    builder.write_csr(CSR_ASID, 5, asid);
    builder.emit(TLBWR);
    builder.li32(12, asid);
    builder.li32(13, vaddr);
    uint32_t inv_pc = builder.emit(invtlb(5, 12, 13));
    uint32_t search_pc = builder.emit(TLBSRCH);
    builder.emit(csrrd(20, CSR_TLBIDX));

    RunResult result = run_program(dut, builder.program());
    bool passed = check_common("INVTLB operands", result, 3);
    passed &= check("INVTLB emits one invalidate",
                    result.invalidates.size() == 1);
    if (!result.invalidates.empty()) {
        const InvEvent& event = result.invalidates.front();
        passed &= check_event_at_commit(
            "INVTLB", event.cycle, result, inv_pc);
        passed &= check_eq("INVTLB operation", event.op, 5);
        passed &= check_eq("INVTLB ASID operand", event.asid, asid);
        passed &= check_eq("INVTLB virtual-address operand",
                           event.vaddr, vaddr);
    }
    passed &= check("post-INVTLB search emits one update",
                    result.csr_updates.size() == 1);
    if (!result.csr_updates.empty()) {
        passed &= check_event_at_commit(
            "post-INVTLB search", result.csr_updates[0].cycle,
            result, search_pc);
        passed &= check("post-INVTLB search reports miss",
                        (result.csr_updates[0].tlbidx &
                         TLBIDX_NE) != 0);
    }
    passed &= check("post-INVTLB CSR read reports miss",
                    (result.last_write[20] & TLBIDX_NE) != 0);

    if (passed)
        std::printf("PASS: integrated INVTLB operands and invalidation\n");
    return passed;
}

bool test_wrong_path_invalidate(Vcore_tlb_test_top* dut) {
    constexpr uint32_t asid = 0x33;
    constexpr uint32_t tlbehi = 0x70002000;
    constexpr uint32_t elo0 =
        make_tlbelo(0x56789, false, 1, 0, true, true);
    constexpr uint32_t elo1 =
        make_tlbelo(0x6789a, false, 1, 0, true, true);

    ProgramBuilder builder;
    builder.write_csr(CSR_TLBIDX, 1,
                      make_tlbidx(6, 12, false));
    builder.write_csr(CSR_TLBEHI, 2, tlbehi);
    builder.write_csr(CSR_TLBELO0, 3, elo0);
    builder.write_csr(CSR_TLBELO1, 4, elo1);
    builder.write_csr(CSR_ASID, 5, asid);
    builder.emit(TLBWR);
    builder.li32(12, asid);
    builder.li32(13, tlbehi);
    builder.emit(addi_w(14, 0, 1));
    uint32_t branch_pc = builder.pc();
    builder.emit(beq(14, 14, 8));
    uint32_t wrong_inv_pc =
        builder.emit(invtlb(5, 12, 13));
    uint32_t search_pc = builder.emit(TLBSRCH);
    builder.emit(csrrd(20, CSR_TLBIDX));

    RunResult result = run_program(dut, builder.program());
    bool passed = check_common("wrong-path INVTLB", result, 2);
    passed &= check("taken branch commits",
                    commit_count(result, branch_pc) == 1);
    passed &= check("wrong-path INVTLB does not commit",
                    commit_count(result, wrong_inv_pc) == 0);
    passed &= check("wrong-path INVTLB has no side effect",
                    result.invalidates.empty());
    passed &= check("surviving TLBSRCH commits",
                    commit_count(result, search_pc) == 1);
    passed &= check("surviving search reports hit",
                    result.csr_updates.size() == 1 &&
                    (result.csr_updates[0].tlbidx & TLBIDX_NE) == 0);
    passed &= check_eq("wrong-path invalidate preserves index",
                       result.last_write[20],
                       make_tlbidx(6, 12, false));

    if (passed)
        std::printf("PASS: wrong-path INVTLB suppression\n");
    return passed;
}

bool test_immu_search_arbitration(Vcore_tlb_test_top* dut) {
    constexpr unsigned index = 9;
    constexpr unsigned ps = 12;
    constexpr uint32_t asid = 0x12a;
    constexpr uint32_t tlbehi = 0x40000000;
    constexpr uint32_t vaddr = 0x40001234;
    constexpr uint32_t ppn0 = 0x12345;
    constexpr uint32_t ppn1 = 0x54321;
    constexpr uint32_t tlbelo0 =
        make_tlbelo(ppn0, false, 2, 0, true, true);
    constexpr uint32_t tlbelo1 =
        make_tlbelo(ppn1, false, 1, 0, true, true);
    constexpr uint32_t expected_paddr = (ppn1 << 12) | (vaddr & 0xfffU);

    ProgramBuilder setup;
    setup.write_csr(CSR_TLBIDX, 1,
                    make_tlbidx(index, ps, false));
    setup.write_csr(CSR_TLBEHI, 2, tlbehi);
    setup.write_csr(CSR_TLBELO0, 3, tlbelo0);
    setup.write_csr(CSR_TLBELO1, 4, tlbelo1);
    setup.write_csr(CSR_ASID, 5, asid);
    setup.emit(TLBWR);
    setup.write_csr(CSR_CRMD, 6, 0x10);
    setup.emit(addi_w(7, 0, 1));

    RunResult setup_baseline = run_program(dut, setup.program());
    bool passed = check("integrated IMMU setup reaches quiescence",
                        setup_baseline.finished);
    passed &= check("integrated IMMU setup has committed work",
                    !setup_baseline.commits.empty());
    if (setup_baseline.commits.empty())
        return false;

    const int idle_xlate_cycle = setup_baseline.commits.back().cycle + 2;
    RunResult idle_result = run_program(
        dut, setup.program(), idle_xlate_cycle, vaddr);
    passed &= check_common("integrated IMMU idle translation",
                           idle_result, 1);
    passed &= check_eq("idle IMMU request handshake count",
                       idle_result.xlate_req_count, 1);
    passed &= check_eq("idle IMMU routed TLB response count",
                       idle_result.itlb_tlb_resp_count, 1);
    passed &= check_eq("idle IMMU response count",
                       idle_result.xlate_resp_count, 1);
    passed &= check_eq("idle IMMU response virtual address",
                       idle_result.xlate_resp_vaddr, vaddr);
    passed &= check_eq("idle IMMU translated physical address",
                       idle_result.xlate_resp_paddr, expected_paddr);
    passed &= check_eq("idle IMMU translated MAT",
                       idle_result.xlate_resp_mat, 1);
    passed &= check("idle IMMU response is cacheable",
                    idle_result.xlate_resp_cacheable);
    passed &= check("idle IMMU response has no exception",
                    !idle_result.xlate_resp_xcpt_valid);

    ProgramBuilder collision;
    collision.write_csr(CSR_TLBIDX, 1,
                        make_tlbidx(index, ps, false));
    collision.write_csr(CSR_TLBEHI, 2, tlbehi);
    collision.write_csr(CSR_TLBELO0, 3, tlbelo0);
    collision.write_csr(CSR_TLBELO1, 4, tlbelo1);
    collision.write_csr(CSR_ASID, 5, asid);
    collision.emit(TLBWR);
    collision.write_csr(CSR_CRMD, 6, 0x10);
    collision.emit(addi_w(7, 0, 1));
    uint32_t search_pc = collision.emit(TLBSRCH);
    collision.emit(csrrd(20, CSR_TLBIDX));

    RunResult collision_baseline = run_program(dut, collision.program());
    passed &= check("q0 arbitration baseline reaches quiescence",
                    collision_baseline.finished);
    passed &= check("q0 arbitration baseline observes TLBSRCH",
                    collision_baseline.searches.size() == 1);
    if (collision_baseline.searches.size() != 1)
        return false;

    const int collision_xlate_cycle =
        collision_baseline.searches.front().cycle - 1;
    passed &= check("q0 arbitration has a request setup cycle",
                    collision_xlate_cycle >= 0);
    if (collision_xlate_cycle < 0)
        return false;

    RunResult result = run_program(
        dut, collision.program(), collision_xlate_cycle, vaddr);
    passed &= check_common("IMMU/TLBSRCH q0 arbitration", result, 2);
    passed &= check("TLBSRCH still commits exactly once",
                    commit_count(result, search_pc) == 1);
    passed &= check("TLBSRCH keeps q0 priority on collision",
                    result.q0_collision_count == 1 &&
                    result.q0_collision_blocked);
    passed &= check_eq("IMMU request handshake count",
                       result.xlate_req_count, 1);
    passed &= check_eq("IMMU receives one routed TLB response",
                       result.itlb_tlb_resp_count, 1);
    passed &= check_eq("refetch flush cancels stale IMMU response",
                       result.xlate_resp_count, 0);
    passed &= check("TLBSRCH response is not stolen by IMMU",
                    result.csr_updates.size() == 1 &&
                    result.csr_updates[0].tlbidx ==
                        make_tlbidx(index, ps, false));

    if (passed)
        std::printf("PASS: IMMU/TLBSRCH q0 arbitration\n");
    return passed;
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_tlb_test_top;

    bool passed = true;
    passed &= test_write_read_search(dut);
    passed &= test_fill_replacement(dut);
    passed &= test_invalidate_operands(dut);
    passed &= test_wrong_path_invalidate(dut);
    passed &= test_immu_search_arbitration(dut);

    delete dut;
    if (!passed)
        return 1;

    std::printf("PASS: loom_core TLB-management integration\n");
    return 0;
}
