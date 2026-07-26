import loom_params::*;
import loom_consts::*;
import loom_types::*;

module core_fetch_buffer_test_top (
    input  logic                         clk,
    input  logic                         rst_n,
    input  logic                         frontend_enable,

    output logic                         imem_req_valid,
    input  logic                         imem_req_ready,
    output logic [31:0]                  imem_req_addr,
    input  logic                         imem_resp_valid,
    output logic                         imem_resp_ready,
    input  logic [3:0][31:0]             imem_resp_insts,

    output logic [3:0]                   ifu_packet_valid_dbg,
    output logic                         buffer_enq_ready_dbg,
    output logic [1:0]                   buffer_deq_valid_dbg,
    output logic [31:0]                  buffer_deq_pc0_dbg,
    output logic [31:0]                  buffer_deq_pc1_dbg,
    output logic [31:0]                  buffer_deq_inst0_dbg,
    output logic [31:0]                  buffer_deq_inst1_dbg,
    output logic                         core_fe_ready_dbg,
    output logic                         frontend_fire_dbg,

    output logic                         redirect_valid,
    output logic [31:0]                  redirect_pc,
    output logic                         rob_empty,
    output logic [1:0]                   core_dis_fire,
    output logic                         core_dis_unique,

    output logic [1:0]                   commit_valid,
    output logic [1:0][31:0]             commit_pc,
    output logic [1:0][31:0]             commit_inst,
    output logic [1:0][ROB_ADDR_SZ-1:0]  commit_rob_idx
);
    localparam logic [31:0] PROGRAM_BASE = 32'h1c06_0000;

    logic [3:0] ifu_fetch_valid;
    logic [3:0][31:0] ifu_fetch_pcs;
    logic [3:0][31:0] ifu_fetch_insts;
    logic ifu_fetch_ready;

    logic [1:0] buffer_deq_valid;
    logic [1:0][31:0] buffer_deq_pcs;
    logic [1:0][31:0] buffer_deq_insts;
    logic buffer_deq_ready;

    logic [1:0] core_fe_valid;
    logic [1:0][31:0] core_fe_pcs;
    logic [1:0][31:0] core_fe_insts;
    logic core_fe_ready;
    commit_signal_t core_commit;

    logic                         dmem_req_valid;
    logic                         dmem_req_is_store;
    logic [31:0]                  dmem_req_addr;
    logic [31:0]                  dmem_req_data;
    logic [3:0]                   dmem_req_mask;
    logic [1:0]                   dmem_req_size;
    logic [LSU_ADDR_SZ+1:0]       dmem_req_idx;
    uop_t                         dmem_req_uop;

    assign ifu_packet_valid_dbg = ifu_fetch_valid;
    assign buffer_enq_ready_dbg = ifu_fetch_ready;
    assign buffer_deq_valid_dbg = buffer_deq_valid;
    assign buffer_deq_pc0_dbg = buffer_deq_pcs[0];
    assign buffer_deq_pc1_dbg = buffer_deq_pcs[1];
    assign buffer_deq_inst0_dbg = buffer_deq_insts[0];
    assign buffer_deq_inst1_dbg = buffer_deq_insts[1];
    assign core_fe_ready_dbg = core_fe_ready;
    assign frontend_fire_dbg =
        buffer_deq_ready && (|buffer_deq_valid);

    assign core_fe_valid =
        frontend_enable ? buffer_deq_valid : '0;
    assign core_fe_pcs = buffer_deq_pcs;
    assign core_fe_insts = buffer_deq_insts;
    assign buffer_deq_ready =
        frontend_enable && core_fe_ready;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(PROGRAM_BASE)
    ) frontend (
        .clk,
        .rst_n,
        .redirect_valid,
        .redirect_pc,
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_valid(ifu_fetch_valid),
        .fetch_insts(ifu_fetch_insts),
        .fetch_pc(ifu_fetch_pcs),
        .fetch_ready(ifu_fetch_ready)
    );

    fetcher_buffer #(
        .FETCH_WIDTH(4),
        .CORE_WIDTH(2),
        .NUM_ENTRIES(8)
    ) fetch_buffer (
        .clk,
        .rst_n,
        .flush(redirect_valid),
        .enq_valid(ifu_fetch_valid),
        .enq_insts(ifu_fetch_insts),
        .enq_pcs(ifu_fetch_pcs),
        .enq_ready(ifu_fetch_ready),
        .deq_valid(buffer_deq_valid),
        .deq_insts(buffer_deq_insts),
        .deq_pcs(buffer_deq_pcs),
        .deq_ready(buffer_deq_ready)
    );

    boom_core #(
        .RESET_PC(PROGRAM_BASE),
        .USE_EXTERNAL_FE_PCS(1'b1),
        .FETCH_WIDTH(2),
        .CORE_WIDTH(2)
    ) core (
        .clk,
        .rst_n,
        .fe_valid(core_fe_valid),
        .fe_insts(core_fe_insts),
        .fe_pcs(core_fe_pcs),
        .fe_ready(core_fe_ready),
        .fe_redirect_valid(redirect_valid),
        .fe_redirect_pc(redirect_pc),
        .dmem_req_valid,
        .dmem_req_ready(1'b1),
        .dmem_req_is_store,
        .dmem_req_addr,
        .dmem_req_data,
        .dmem_req_mask,
        .dmem_req_size,
        .dmem_req_idx,
        .dmem_req_uop,
        .dmem_resp_valid(1'b0),
        .dmem_resp_is_store(1'b0),
        .dmem_resp_data('0),
        .dmem_resp_idx('0),
        .hw_irq('0),
        .ipi_irq(1'b0),
        .csr_req_valid(),
        .csr_addr(),
        .csr_cmd(),
        .csr_wdata(),
        .csr_wmask(),
        .commit(core_commit),
        .rob_empty,
        .debug_pc(),
        .commit_valid_dbg(),
        .commit_valids_dbg(),
        .commit_ldst_dbg(),
        .rf_wr_en_dbg(),
        .rf_wr_pdst_dbg(),
        .rf_wr_ldst_dbg(),
        .rf_wr_data_dbg(),
        .alu_rs1_dbg(),
        .alu_imm_dbg(),
        .alu_imm_packed_dbg(),
        .alu_imm_sel_dbg(),
        .rob_ready_dbg(),
        .ren_stalls_dbg(),
        .rn2_mask_dbg(),
        .dis_fire_dbg(core_dis_fire),
        .dis_unique_dbg(core_dis_unique),
        .alu_iss_valid_dbg(),
        .alu_res_valid_dbg(),
        .rob_wb_valid_dbg()
    );

    always_comb begin
        commit_valid = core_commit.arch_valids;
        commit_pc = '0;
        commit_inst = '0;
        commit_rob_idx = '0;
        for (int lane = 0; lane < 2; lane++) begin
            commit_pc[lane] =
                core_commit.uops[lane].pc[31:0];
            commit_inst[lane] =
                core_commit.uops[lane].inst;
            commit_rob_idx[lane] =
                core_commit.uops[lane].rob_idx;
        end
    end
endmodule
