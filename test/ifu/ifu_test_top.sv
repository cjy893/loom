import loom_params::*;
import loom_consts::*;

module ifu_test_top (
    input  logic                 clk,
    input  logic                 rst_n,

    input  logic                 redirect_valid,
    input  logic [31:0]          redirect_pc,
    input  logic                 branch_redirect,
    input  logic [FTQ_ADDR_SZ-1:0] branch_redirect_ftq_idx,
    input  logic                 branch_redirect_taken,
    input  logic [$clog2(ICACHE_BLOCK_BYTES)-1:0]
                                branch_redirect_pc_lob,
    input  logic [2:0]           branch_redirect_cfi_type,

    output logic                 xlate_req_valid,
    input  logic                 xlate_req_ready,
    output logic [31:0]          xlate_req_vaddr,
    input  logic                 xlate_resp_valid,
    output logic                 xlate_resp_ready,
    input  logic [31:0]          xlate_resp_vaddr,
    input  logic [31:0]          xlate_resp_paddr,
    input  logic [1:0]           xlate_resp_mat,
    input  logic                 xlate_resp_cacheable,
    input  logic                 xlate_resp_xcpt_valid,
    input  logic [5:0]           xlate_resp_xcpt_code,

    output logic                 imem_req_valid,
    input  logic                 imem_req_ready,
    output logic [31:0]          imem_req_addr,
    output logic [1:0]           imem_req_mat,
    output logic                 imem_req_cacheable,

    input  logic                 imem_resp_valid,
    output logic                 imem_resp_ready,
    input  logic [3:0][31:0]     imem_resp_insts,

    output logic [3:0]           fetch_valid,
    output logic [3:0]           fetch_xcpt_valid,
    output logic [3:0][5:0]      fetch_xcpt_code,
    output logic [3:0][31:0]     fetch_pc,
    output logic [3:0][31:0]     fetch_insts,
    output logic [3:0]           fetch_predicted_taken,
    output logic [3:0][31:0]     fetch_predicted_npc,
    input  logic                 fetch_ready,

    output logic [2:0]           ifu_state_dbg,
    output logic                 bpd_f3_valid_dbg,
    output logic                 bpd_result_valid_dbg,
    output logic                 bpd_requested_dbg,
    output logic                 bpd_ready_dbg,
    output logic [FTQ_ADDR_SZ-1:0] fetch_ftq_idx_dbg,
    output logic                 bpd_f0_valid_dbg,
    output logic                 bpd_first_bank_dbg,
    output logic [NBANKS-1:0]    bank_f0_valid_dbg,
    output logic [GLOBAL_HISTORY_LENGTH-1:0]
                                bank0_f0_ghist_dbg,
    output logic [GLOBAL_HISTORY_LENGTH-1:0]
                                bank1_f0_ghist_dbg,
    output logic                 ftq_ghist_restore_valid_dbg
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;
    logic [3:0][FTQ_ADDR_SZ-1:0] fetch_ftq_idx;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(RESET_PC)
    ) dut (
        .clk,
        .rst_n,
        .redirect_valid,
        .flush_valid(redirect_valid && !branch_redirect),
        .redirect_pc,
        .branch_redirect_ftq_idx,
        .branch_redirect_taken,
        .branch_redirect_pc_lob,
        .branch_redirect_cfi_type,
        .ftq_commit_valid(1'b0),
        .ftq_commit_idx('0),
        .exec_query_valid('0),
        .exec_query_idx('0),
        .exec_query_pc('0),
        .exec_query_resp_valid(),
        .exec_query_next_pc(),
        .exec_query_cfi_match(),
        .xlate_req_valid,
        .xlate_req_ready,
        .xlate_req_vaddr,
        .xlate_resp_valid,
        .xlate_resp_ready,
        .xlate_resp_vaddr,
        .xlate_resp_paddr,
        .xlate_resp_mat,
        .xlate_resp_cacheable,
        .xlate_resp_xcpt_valid,
        .xlate_resp_xcpt_code,
        .imem_req_mat,
        .imem_req_cacheable,
        .fetch_xcpt_valid,
        .fetch_xcpt_code,
        .imem_req_valid,
        .imem_req_ready,
        .imem_req_addr,
        .imem_resp_valid,
        .imem_resp_ready,
        .imem_resp_insts,
        .fetch_valid,
        .fetch_pc,
        .fetch_insts,
        .fetch_ftq_idx,
        .fetch_predicted_taken,
        .fetch_predicted_npc,
        .fetch_ready
    );

    assign ifu_state_dbg = dut.state_q;
    assign bpd_f3_valid_dbg = dut.bpd_f3_valid_q &&
                              dut.bpd_f3_epoch_q == dut.frontend_epoch_q;
    assign bpd_result_valid_dbg = dut.bpd_result_valid_q;
    assign bpd_requested_dbg = dut.bpd_requested_q;
    assign bpd_ready_dbg = dut.bpd_ready;
    assign fetch_ftq_idx_dbg = fetch_ftq_idx[0];
    assign bpd_f0_valid_dbg = dut.bpd_f0_valid;
    assign bpd_first_bank_dbg = dut.bpd_first_bank;
    assign bank_f0_valid_dbg = dut.bank_f0_valid;
    assign bank0_f0_ghist_dbg = dut.bank_f0_ghist[0];
    assign bank1_f0_ghist_dbg = dut.bank_f0_ghist[1];
    assign ftq_ghist_restore_valid_dbg = dut.ftq_ghist_restore_valid;
endmodule
