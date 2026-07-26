import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_top_reference #(
    parameter logic [31:0] RESET_PC = 32'h1c00_0000
) (
    input  logic                         clk,
    input  logic                         rst_n,

    output logic                         imem_req_valid,
    input  logic                         imem_req_ready,
    output logic [31:0]                  imem_req_addr,
    input  logic                         imem_resp_valid,
    output logic                         imem_resp_ready,
    input  logic [3:0][31:0]             imem_resp_insts,

    output logic                         dmem_req_valid,
    input  logic                         dmem_req_ready,
    output logic                         dmem_req_is_store,
    output logic [31:0]                  dmem_req_addr,
    output logic [31:0]                  dmem_req_data,
    output logic [3:0]                   dmem_req_mask,
    output logic [1:0]                   dmem_req_size,
    output logic [LSU_ADDR_SZ+1:0]       dmem_req_idx,
    input  logic                         dmem_resp_valid,
    input  logic                         dmem_resp_is_store,
    input  logic [31:0]                  dmem_resp_data,
    input  logic [LSU_ADDR_SZ+1:0]       dmem_resp_idx,

    input  logic [7:0]                   hw_irq,
    input  logic                         ipi_irq,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][4:0]              commit_ldst,

    output logic                         exception_valid,
    output logic [31:0]                  exception_pc,
    output logic [31:0]                  exception_inst,
    output logic [31:0]                  exception_cause,
    output logic [31:0]                  exception_badvaddr
);
    logic [3:0] ifu_fetch_valid;
    logic [3:0][31:0] ifu_fetch_pc;
    logic [3:0][31:0] ifu_fetch_insts;
    logic ifu_fetch_ready;

    logic [1:0] buffer_deq_valid;
    logic [1:0][31:0] buffer_deq_pc;
    logic [1:0][31:0] buffer_deq_insts;
    logic buffer_deq_ready;

    logic core_fe_ready;
    logic core_redirect_valid;
    logic [31:0] core_redirect_pc;
    uop_t dmem_req_uop;
    commit_signal_t core_commit;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(RESET_PC)
    ) frontend (
        .clk,
        .rst_n,
        .redirect_valid(core_redirect_valid),
        .redirect_pc(core_redirect_pc),
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_valid(ifu_fetch_valid),
        .fetch_insts(ifu_fetch_insts),
        .fetch_pc(ifu_fetch_pc),
        .fetch_ready(ifu_fetch_ready)
    );

    fetcher_buffer #(
        .FETCH_WIDTH(4),
        .CORE_WIDTH(2),
        .NUM_ENTRIES(8)
    ) fetch_buffer (
        .clk,
        .rst_n,
        .flush(core_redirect_valid),
        .enq_valid(ifu_fetch_valid),
        .enq_pcs(ifu_fetch_pc),
        .enq_insts(ifu_fetch_insts),
        .enq_ready(ifu_fetch_ready),
        .deq_valid(buffer_deq_valid),
        .deq_pcs(buffer_deq_pc),
        .deq_insts(buffer_deq_insts),
        .deq_ready(buffer_deq_ready)
    );

    assign buffer_deq_ready = core_fe_ready;

    loom_core #(
        .RESET_PC(RESET_PC),
        .USE_EXTERNAL_FE_PCS(1'b1),
        .FETCH_WIDTH(2),
        .CORE_WIDTH(2)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(buffer_deq_valid),
        .fe_insts(buffer_deq_insts),
        .fe_pcs(buffer_deq_pc),
        .fe_ready(core_fe_ready),
        .fe_redirect_valid(core_redirect_valid),
        .fe_redirect_pc(core_redirect_pc),
        .dmem_req_valid,
        .dmem_req_ready,
        .dmem_req_is_store,
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid,
        .dmem_resp_is_store,
        .dmem_resp_data,
        .dmem_resp_idx,
        .hw_irq,
        .ipi_irq,
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty(),
        .debug_pc(),
        .commit_valid_dbg(),
        .commit_valids_dbg(),
        .commit_ldst_dbg(),
        .rf_wr_en_dbg(),
        .rf_wr_pdst_dbg(),
        .rf_wr_ldst_dbg(),
        .rf_wr_data_dbg(),
        .alu_src1_dbg(),
        .alu_imm_dbg(),
        .alu_imm_packed_dbg(),
        .alu_imm_sel_dbg(),
        .rob_ready_dbg(),
        .ren_stalls_dbg(),
        .rn2_mask_dbg(),
        .dis_fire_dbg(),
        .dis_unique_dbg(),
        .alu_iss_valid_dbg(),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg()
    );

    always_comb begin
        commit_valid = core_commit.arch_valids;
        commit_pc = '0;
        commit_inst = '0;
        commit_ldst = '0;
        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] = core_commit.uops[lane].pc[31:0];
            commit_inst[lane] = core_commit.uops[lane].inst;
            commit_ldst[lane] = core_commit.uops[lane].ldst;
        end
    end

    assign exception_valid = core.rob_com_xcpt_w.valid;
    assign exception_pc = core.rob_com_xcpt_w.pc;
    assign exception_inst = core.rob_com_xcpt_w.inst;
    assign exception_cause = core.rob_com_xcpt_w.cause;
    assign exception_badvaddr = core.rob_com_xcpt_w.badvaddr;
endmodule
