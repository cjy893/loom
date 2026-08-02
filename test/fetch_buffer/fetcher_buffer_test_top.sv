module fetcher_buffer_test_top (
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
    input  logic [3:0]       enq_xcpt_valid,
    input  logic [3:0][5:0]  enq_xcpt_code,
    output logic             enq_ready,

    output logic [1:0]       deq_valid,
    output logic [1:0]       deq_xcpt_valid,
    output logic [1:0][5:0]  deq_xcpt_code,
    output logic [31:0]      deq_pc0,
    output logic [31:0]      deq_pc1,
    output logic [31:0]      deq_inst0,
    output logic [31:0]      deq_inst1,
    input  logic             deq_ready
);
    logic [3:0][31:0] enq_pcs;
    logic [3:0][31:0] enq_insts;
    logic [1:0][31:0] deq_pcs;
    logic [1:0][31:0] deq_insts;

    assign enq_pcs[0] = enq_pc0;
    assign enq_pcs[1] = enq_pc1;
    assign enq_pcs[2] = enq_pc2;
    assign enq_pcs[3] = enq_pc3;
    assign enq_insts[0] = enq_inst0;
    assign enq_insts[1] = enq_inst1;
    assign enq_insts[2] = enq_inst2;
    assign enq_insts[3] = enq_inst3;

    assign deq_pc0 = deq_pcs[0];
    assign deq_pc1 = deq_pcs[1];
    assign deq_inst0 = deq_insts[0];
    assign deq_inst1 = deq_insts[1];

    fetcher_buffer #(
        .FETCH_WIDTH(4),
        .CORE_WIDTH(2),
        .NUM_ENTRIES(8)
    ) dut (
        .clk,
        .rst_n,
        .flush,
        .enq_valid,
        .enq_insts,
        .enq_pcs,
        .enq_ftq_idx('0),
        .enq_predicted_taken('0),
        .enq_predicted_npc('0),
        .enq_xcpt_valid,
        .enq_xcpt_code,
        .enq_ready,
        .deq_valid,
        .deq_xcpt_valid,
        .deq_xcpt_code,
        .deq_insts,
        .deq_pcs,
        .deq_ftq_idx(),
        .deq_predicted_taken(),
        .deq_predicted_npc(),
        .deq_ready
    );
endmodule
