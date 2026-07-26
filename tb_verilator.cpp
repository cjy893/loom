#include "Vloom_core.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <cstdio>
#include <cstdint>

static constexpr int CORE_WIDTH = 2;
static constexpr uint32_t RESET_PC = 0x1c000000;

static Vloom_core* top;
static VerilatedVcdC* tfp;
static vluint64_t sim_time = 0;

static uint32_t prog_mem[] = {
    0x03400000,  // NOP
    0x028005ad,  // addi.w r13, r13, 1
    0x0400180a,  // csrrd r10, 0x6 (unique in lane 0)
    0x028005ad,  // addi.w r13, r13, 1
    0x03400000,  // NOP
    0x00100019,  // add.w r25, r0, r0
    0x0400180b,  // csrrd r11, 0x6 (unique after an older lane)
    0x0380040c,  // ori r12, r0, 0x1
    0x03400000,  // NOP
    0x0010018c,  // add.w r12, r12, r0
    0x03400000,  // NOP
    0x02be7001,  // addi.w  r1, r0, -100
    0x02801c02,  // addi.w  r2, r0, 7
    0x0020082e,  // div.w   r14, r1, r2
    0x0020882f,  // mod.w   r15, r1, r2
    0x15000005,  // lu12i.w r5, 0x80000
    0x02800806,  // addi.w  r6, r0, 2
    0x001c98b0,  // mulh.w  r16, r5, r6
    0x001d18b1,  // mulh.wu r17, r5, r6
    0x001c0832,  // mul.w   r18, r1, r2
    0x002118b3,  // div.wu  r19, r5, r6
    0x002198b4,  // mod.wu  r20, r5, r6
    0x00006015,  // rdcntvl.w r21
    0x00006416,  // rdcntvh.w r22
    0x000062e0,  // rdcntid.w r23
};
static const int PROG_SIZE = sizeof(prog_mem) / sizeof(prog_mem[0]);

double sc_time_stamp() { return (double)sim_time; }

void tick() {
    top->clk = 0; top->eval(); tfp->dump(sim_time++);
    top->clk = 1; top->eval(); tfp->dump(sim_time++);
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    top = new Vloom_core;

    Verilated::traceEverOn(true);
    tfp = new VerilatedVcdC;
    top->trace(tfp, 99);
    tfp->open("tb.vcd");

    // init
    top->clk   = 0;
    top->rst_n = 0;
    top->fe_valid = 0;
    top->fe_insts[0] = 0;
    top->fe_insts[1] = 0;
    top->dmem_req_ready = 1;
    top->dmem_resp_valid = 0;
    top->dmem_resp_is_store = 0;
    top->dmem_resp_data = 0;
    top->dmem_resp_idx = 0;
    top->hw_irq = 0;
    top->ipi_irq = 0;

    // reset
    for (int i = 0; i < 10; i++) tick();
    top->rst_n = 1;
    top->eval();
    printf("[TB] Reset done @ %lu\n", (unsigned long)sim_time);

    // Drive the instruction packet requested by debug_pc. This also models
    // replay of fall-through instructions after a commit-time refetch.
    auto load_packet = [&](uint32_t packet_pc) {
        top->fe_valid = 0;
        int first = static_cast<int>((packet_pc - RESET_PC) >> 2);
        for (int lane = 0; lane < CORE_WIDTH; lane++) {
            top->fe_insts[lane] = 0;
            if (first >= 0 && first + lane < PROG_SIZE) {
                top->fe_valid |= 1U << lane;
                top->fe_insts[lane] = prog_mem[first + lane];
            }
        }
        return first;
    };

    int last_good = 0;
    int commit_count = 0;
    int unique_dispatch_count = 0;
    int csr_request_count = 0;
    int redirect_count = 0;
    uint32_t arch_regs[32] = {};
    bool passed = false;
    bool saw_dual_dispatch = false;
    bool saw_dual_commit = false;
    bool saw_program_end = false;
    bool unique_violation = false;
    bool redirect_violation = false;
    bool packet_active = false;
    uint32_t packet_pc = 0;
    int packet_first = -1;
    for (int cycle = 0; cycle < 50000; cycle++) {
        uint32_t requested_pc = top->debug_pc;
        if (!packet_active || requested_pc != packet_pc) {
            packet_pc = requested_pc;
            packet_first = load_packet(packet_pc);
            packet_active = top->fe_valid != 0;
        }
        top->eval();

        unsigned input_valid = top->fe_valid;
        bool input_accept = packet_active && top->fe_ready;
        int input_first = packet_first;

        if (top->dis_fire_dbg == 0x3)
            saw_dual_dispatch = true;
        if (top->dis_unique_dbg) {
            unique_dispatch_count++;
            if (__builtin_popcount(
                    static_cast<unsigned>(top->dis_fire_dbg)) != 1 ||
                !top->rob_empty) {
                unique_violation = true;
                printf("[%5d] ERROR: unique dispatch mask=0x%x rob_empty=%d\n",
                       cycle, top->dis_fire_dbg, top->rob_empty);
            }
        }
        if (top->fe_redirect_valid) {
            static constexpr uint32_t EXPECTED_REDIRECTS[] = {
                RESET_PC + 3U * 4U,
                RESET_PC + 7U * 4U,
            };
            uint32_t target = top->fe_redirect_pc;
            if (redirect_count >= 2 ||
                target != EXPECTED_REDIRECTS[redirect_count]) {
                redirect_violation = true;
                printf("[%5d] ERROR: redirect[%d] pc=0x%08x\n",
                       cycle, redirect_count, target);
            } else {
                printf("[%5d] REDIRECT[%d]: pc=0x%08x\n",
                       cycle, redirect_count, target);
            }
            redirect_count++;
        }

        tick();

        if (input_accept) {
            for (int lane = 0; lane < CORE_WIDTH; lane++) {
                if (input_valid & (1U << lane)) {
                    printf("[%5d] Feed lane%d inst[%d] = 0x%08x\n",
                           cycle, lane, input_first + lane,
                           prog_mem[input_first + lane]);
                }
            }
            if (input_first + CORE_WIDTH >= PROG_SIZE)
                saw_program_end = true;
            last_good = cycle;
            packet_active = false;
            top->fe_valid = 0;
        }

        // The current integration program has no memory operations. Keep the
        // memory port ready and require any future response to arrive later.
        top->dmem_resp_valid = 0;
        if (top->csr_req_valid)
            csr_request_count++;

        // 提交监控
        if (top->rf_wr_en_dbg) {
            printf("[%5d] REGWR: r%d pdst=%d data=%d src1=%d imm=%d imm_p=%x imm_s=%d\n", cycle,
                   top->rf_wr_ldst_dbg, top->rf_wr_pdst_dbg, top->rf_wr_data_dbg,
                   top->alu_src1_dbg, top->alu_imm_dbg,
                   top->alu_imm_packed_dbg, top->alu_imm_sel_dbg);
            if (top->rf_wr_ldst_dbg != 0)
                arch_regs[top->rf_wr_ldst_dbg] = top->rf_wr_data_dbg;
        }
        if (top->commit_valids_dbg) {
            int committed = __builtin_popcount(
                static_cast<unsigned>(top->commit_valids_dbg));
            printf("[%5d] COMMIT: mask=0x%x r%d\n",
                   cycle, top->commit_valids_dbg, top->commit_ldst_dbg);
            commit_count += committed;
            if (committed == CORE_WIDTH)
                saw_dual_commit = true;
        }

        // DEBUG: 每 100 拍打印流水线状态
        if (cycle % 100 == 0) {
            printf("[%5d] DEBUG: fe_ready=%d rob_empty=%d rob_ready=%d ren_stalls=%d rn2_mask=%d dis_fire=%d alu_iss=%d alu_res=%d rob_wb=%d\n",
                   cycle,
                   top->fe_ready,
                   top->rob_empty,
                   top->rob_ready_dbg,
                   top->ren_stalls_dbg,
                   top->rn2_mask_dbg,
                   top->dis_fire_dbg,
                   top->alu_iss_valid_dbg,
                   top->alu_res_valid_dbg,
                   top->rob_wb_valid_dbg);
        }

        // 检测死锁
        if (cycle - last_good > 1000 && saw_program_end) {
            printf("[%5d] Pipeline idle for 1000 cycles — stopping\n", cycle);
            break;
        }

        if (top->rob_empty && top->fe_ready && saw_program_end &&
            cycle - last_good > 20) {
            passed = commit_count == PROG_SIZE &&
                     saw_dual_dispatch &&
                     saw_dual_commit &&
                     unique_dispatch_count == 12 &&
                     csr_request_count == 2 &&
                     redirect_count == 2 &&
                     !unique_violation &&
                     !redirect_violation &&
                     arch_regs[13] == 2 &&
                     arch_regs[25] == 0 &&
                     arch_regs[12] == 1 &&
                     arch_regs[10] == 0 &&
                     arch_regs[11] == 0 &&
                     arch_regs[14] == 0xfffffff2 &&
                     arch_regs[15] == 0xfffffffe &&
                     arch_regs[16] == 0xffffffff &&
                     arch_regs[17] == 1 &&
                     arch_regs[18] == 0xfffffd44 &&
                     arch_regs[19] == 0x40000000 &&
                     arch_regs[20] == 0 &&
                     arch_regs[21] != 0 &&
                     arch_regs[22] == 0 &&
                     arch_regs[23] == 0;
            printf("[%5d] ROB empty: commits=%d dual_dis=%d dual_com=%d "
                   "unique=%d csr=%d redirects=%d "
                   "r13=%u r25=%u r12=%u — %s\n",
                   cycle, commit_count, saw_dual_dispatch, saw_dual_commit,
                   unique_dispatch_count, csr_request_count, redirect_count,
                   arch_regs[13], arch_regs[25],
                   arch_regs[12], passed ? "PASS" : "FAIL");
            for (int k = 0; k < 10; k++) tick();
            break;
        }
    }

    printf("[TB] Sim complete @ %lu\n", (unsigned long)sim_time);
    tfp->close();
    delete top;
    delete tfp;
    return passed ? 0 : 1;
}
