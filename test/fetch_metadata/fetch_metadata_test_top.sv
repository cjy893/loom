module fetch_metadata_test_top (
    input  logic             clk,
    input  logic             rst_n,
    input  logic             flush,

    input  logic [3:0]       enq_valid,
    input  logic [31:0]      enq_pc0,
    input  logic [31:0]      enq_pc1,
    input  logic [31:0]      enq_pc2,
    input  logic [31:0]      enq_pc3,
    input  logic [31:0]      enq_inst0,
    input  logic [31:0]      enq_inst1,
    input  logic [31:0]      enq_inst2,
    input  logic [31:0]      enq_inst3,
    input  logic [3:0]       enq_ftq_idx0,
    input  logic [3:0]       enq_ftq_idx1,
    input  logic [3:0]       enq_ftq_idx2,
    input  logic [3:0]       enq_ftq_idx3,
    input  logic [3:0]       enq_taken,
    input  logic [31:0]      enq_npc0,
    input  logic [31:0]      enq_npc1,
    input  logic [31:0]      enq_npc2,
    input  logic [31:0]      enq_npc3,
    output logic             enq_ready,

    output logic [1:0]       deq_valid,
    output logic [31:0]      deq_pc0,
    output logic [31:0]      deq_pc1,
    output logic [31:0]      deq_inst0,
    output logic [31:0]      deq_inst1,
    output logic [3:0]       deq_ftq_idx0,
    output logic [3:0]       deq_ftq_idx1,
    output logic [1:0]       deq_taken,
    output logic [31:0]      deq_npc0,
    output logic [31:0]      deq_npc1,
    input  logic             deq_ready
);
    logic [3:0][31:0] enq_pcs;
    logic [3:0][31:0] enq_insts;
    logic [3:0][3:0] enq_ftq_idx;
    logic [3:0][31:0] enq_predicted_npc;
    logic [3:0] enq_xcpt_valid;
    logic [3:0][5:0] enq_xcpt_code;
    logic [1:0][31:0] deq_pcs;
    logic [1:0][31:0] deq_insts;
    logic [1:0][3:0] deq_ftq_idx;
    logic [1:0][31:0] deq_predicted_npc;
    logic [1:0] deq_xcpt_valid;
    logic [1:0][5:0] deq_xcpt_code;

    assign enq_pcs[0] = enq_pc0;
    assign enq_pcs[1] = enq_pc1;
    assign enq_pcs[2] = enq_pc2;
    assign enq_pcs[3] = enq_pc3;
    assign enq_insts[0] = enq_inst0;
    assign enq_insts[1] = enq_inst1;
    assign enq_insts[2] = enq_inst2;
    assign enq_insts[3] = enq_inst3;
    assign enq_ftq_idx[0] = enq_ftq_idx0;
    assign enq_ftq_idx[1] = enq_ftq_idx1;
    assign enq_ftq_idx[2] = enq_ftq_idx2;
    assign enq_ftq_idx[3] = enq_ftq_idx3;
    assign enq_predicted_npc = {enq_npc3, enq_npc2,
                                enq_npc1, enq_npc0};
    assign enq_xcpt_valid = '0;
    assign enq_xcpt_code = '0;

    assign deq_pc0 = deq_pcs[0];
    assign deq_pc1 = deq_pcs[1];
    assign deq_inst0 = deq_insts[0];
    assign deq_inst1 = deq_insts[1];
    assign deq_ftq_idx0 = deq_ftq_idx[0];
    assign deq_ftq_idx1 = deq_ftq_idx[1];
    assign deq_npc0 = deq_predicted_npc[0];
    assign deq_npc1 = deq_predicted_npc[1];

    fetcher_buffer #(
        .FETCH_WIDTH(4),
        .CORE_WIDTH(2),
        .NUM_ENTRIES(8),
        .FTQ_IDX_SZ(4)
    ) dut (
        .clk,
        .rst_n,
        .flush,
        .enq_valid,
        .enq_pcs,
        .enq_insts,
        .enq_ftq_idx,
        .enq_predicted_taken(enq_taken),
        .enq_predicted_npc,
        .enq_ready,
        .enq_xcpt_valid,
        .enq_xcpt_code,
        .deq_valid,
        .deq_pcs,
        .deq_insts,
        .deq_ftq_idx,
        .deq_predicted_taken(deq_taken),
        .deq_predicted_npc,
        .deq_xcpt_valid,
        .deq_xcpt_code,
        .deq_ready
    );
endmodule
