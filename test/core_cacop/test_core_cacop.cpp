#include "Vcore_cacop_test_top.h"
#include "verilated.h"

#include <array>
#include <cstdint>
#include <cstdio>
#include <map>
#include <string>
#include <vector>

namespace {

constexpr uint32_t RESET_PC = 0x1c00'0000U;
constexpr uint32_t NOP = 0x0340'0000U;

constexpr uint32_t lu12i_w(unsigned rd, uint32_t imm20) {
    return 0x1400'0000U | ((imm20 & 0xfffffU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t addi_w(unsigned rd, unsigned rj, int imm12) {
    return 0x0280'0000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (rd & 0x1fU);
}

constexpr uint32_t csrwr(unsigned rd, unsigned addr) {
    return 0x0400'0000U | ((addr & 0x3fffU) << 10) | (1U << 5) |
           (rd & 0x1fU);
}

constexpr uint32_t cacop(unsigned code, unsigned rj, int imm12) {
    return 0x0600'0000U |
           ((static_cast<unsigned>(imm12) & 0xfffU) << 10) |
           ((rj & 0x1fU) << 5) | (code & 0x1fU);
}

struct MaintEvent {
    bool icache;
    unsigned mode;
    unsigned op;
    uint32_t vaddr;
    uint32_t paddr;
};

bool check(const std::string& name, bool condition) {
    if (!condition)
        std::fprintf(stderr, "FAIL: %s\n", name.c_str());
    return condition;
}

void reset(Vcore_cacop_test_top* dut) {
    dut->clk = 0;
    dut->rst_n = 0;
    dut->fe_valid = 0;
    dut->icache_maint_ready = 0;
    dut->icache_maint_done = 0;
    dut->dcache_maint_ready = 0;
    dut->dcache_maint_done = 0;
    for (int lane = 0; lane < 4; ++lane)
        dut->fe_insts[lane] = 0;

    for (int cycle = 0; cycle < 8; ++cycle) {
        dut->clk = 0;
        dut->eval();
        dut->clk = 1;
        dut->eval();
    }
    dut->clk = 0;
    dut->rst_n = 1;
    dut->eval();
}

}  // namespace

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    auto* dut = new Vcore_cacop_test_top;
    reset(dut);

    constexpr unsigned R_ADDR = 5;
    constexpr unsigned R_CRMD = 6;
    constexpr uint32_t BASE = 0x1234'5000U;
    constexpr uint32_t CSR_CRMD = 0;

    const std::map<uint32_t, uint32_t> program{
        {RESET_PC + 0x00, lu12i_w(R_ADDR, BASE >> 12)},
        {RESET_PC + 0x04, addi_w(R_CRMD, 0, 0x10)},
        {RESET_PC + 0x08, csrwr(R_CRMD, CSR_CRMD)},
        {RESET_PC + 0x0c, cacop(0, R_ADDR, 0x34)},
        {RESET_PC + 0x10, cacop(9, R_ADDR, -0x20)},
        {RESET_PC + 0x14, cacop(16, R_ADDR, 0x40)},
        {RESET_PC + 0x18, NOP},
    };

    std::vector<MaintEvent> events;
    std::array<int, 2> valid_age{};
    std::array<int, 2> done_due{{-1, -1}};
    std::array<bool, 2> held_valid{};
    std::array<uint32_t, 2> held_vaddr{};
    std::array<uint32_t, 2> held_paddr{};
    std::array<unsigned, 2> held_mode{};
    bool stable = true;
    bool saw_ready_stall = false;
    bool saw_mode2_exception = false;
    bool unexpected_dmem = false;
    unsigned commits = 0;

    for (int cycle = 0; cycle < 1200 && !saw_mode2_exception; ++cycle) {
        dut->fe_valid = 0;
        for (int lane = 0; lane < 4; ++lane)
            dut->fe_insts[lane] = 0;
        for (int lane = 0; lane < 2; ++lane) {
            const uint32_t pc = dut->debug_pc + 4U * lane;
            auto it = program.find(pc);
            if (it != program.end()) {
                dut->fe_valid |= 1U << lane;
                dut->fe_insts[lane] = it->second;
            }
        }

        dut->icache_maint_done = done_due[0] == cycle;
        dut->dcache_maint_done = done_due[1] == cycle;

        const bool valids[2] = {
            static_cast<bool>(dut->icache_maint_valid),
            static_cast<bool>(dut->dcache_maint_valid),
        };
        for (int target = 0; target < 2; ++target) {
            if (valids[target]) {
                ++valid_age[target];
                if (valid_age[target] <= 3)
                    saw_ready_stall = true;
            } else {
                valid_age[target] = 0;
                held_valid[target] = false;
            }
        }
        dut->icache_maint_ready = valids[0] && valid_age[0] > 3;
        dut->dcache_maint_ready = valids[1] && valid_age[1] > 3;

        dut->eval();

        for (int target = 0; target < 2; ++target) {
            const bool valid = target == 0 ? dut->icache_maint_valid
                                           : dut->dcache_maint_valid;
            const uint32_t vaddr = target == 0 ? dut->icache_maint_vaddr
                                                : dut->dcache_maint_vaddr;
            const uint32_t paddr = target == 0 ? dut->icache_maint_paddr
                                                : dut->dcache_maint_paddr;
            const unsigned mode = target == 0 ? dut->icache_maint_mode
                                               : dut->dcache_maint_mode;
            if (valid && held_valid[target]) {
                stable &= vaddr == held_vaddr[target];
                stable &= paddr == held_paddr[target];
                stable &= mode == held_mode[target];
            }
            if (valid) {
                held_valid[target] = true;
                held_vaddr[target] = vaddr;
                held_paddr[target] = paddr;
                held_mode[target] = mode;
            }
        }

        const bool i_fire = dut->icache_maint_valid &&
                            dut->icache_maint_ready;
        const bool d_fire = dut->dcache_maint_valid &&
                            dut->dcache_maint_ready;
        if (i_fire) {
            events.push_back({true, static_cast<unsigned>(dut->icache_maint_mode),
                              0, dut->icache_maint_vaddr,
                              dut->icache_maint_paddr});
            done_due[0] = cycle + 3;
        }
        if (d_fire) {
            events.push_back({false, static_cast<unsigned>(dut->dcache_maint_mode),
                              static_cast<unsigned>(dut->dcache_maint_op),
                              dut->dcache_maint_vaddr,
                              dut->dcache_maint_paddr});
            done_due[1] = cycle + 3;
        }

        unexpected_dmem |= dut->dmem_req_valid;
        dut->clk = 1;
        dut->eval();
        for (int lane = 0; lane < 2; ++lane)
            if (dut->commit_valids & (1U << lane))
                ++commits;

        if (dut->redirect_valid && dut->redirect_pc == 0)
            saw_mode2_exception = true;

        dut->clk = 0;
        dut->eval();
    }

    bool ok = true;
    ok &= check("cache request survives ready backpressure", saw_ready_stall);
    ok &= check("maintenance payload stays stable", stable);
    ok &= check("only mode-0 ICache and mode-1 DCache reach caches",
                events.size() == 2);
    if (events.size() >= 2) {
        ok &= check("first command is ICache mode 0",
                    events[0].icache && events[0].mode == 0);
        ok &= check("mode 0 uses VA and bypasses translation",
                    events[0].vaddr == BASE + 0x34 && events[0].paddr == 0);
        ok &= check("second command is DCache mode 1 flush",
                    !events[1].icache && events[1].mode == 1 &&
                    events[1].op == 2);
        ok &= check("mode 1 uses signed-offset VA",
                    events[1].vaddr == BASE - 0x20 && events[1].paddr == 0);
    }
    ok &= check("mode-2 TLB miss raises a precise exception",
                saw_mode2_exception);
    ok &= check("CACOP path emits no ordinary data-memory request",
                !unexpected_dmem);
    ok &= check("setup and two successful CACOP instructions commit",
                commits >= 5);

    delete dut;
    if (!ok)
        return 1;
    std::printf("PASS: core CACOP bypass, translation fault, backpressure, and completion\n");
    return 0;
}
