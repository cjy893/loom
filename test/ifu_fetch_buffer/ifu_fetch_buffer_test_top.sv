module ifu_fetch_buffer_test_top (
    input  logic                 clk,
    input  logic                 rst_n,

    input  logic                 redirect_valid,
    input  logic [31:0]          redirect_pc,

    output logic                 imem_req_valid,
    input  logic                 imem_req_ready,
    output logic [31:0]          imem_req_addr,

    input  logic                 imem_resp_valid,
    output logic                 imem_resp_ready,
    input  logic [3:0][31:0]     imem_resp_insts,

    output logic [1:0]           fetch_valid,
    output logic [31:0]          fetch_pc0,
    output logic [31:0]          fetch_pc1,
    output logic [31:0]          fetch_inst0,
    output logic [31:0]          fetch_inst1,
    input  logic                 fetch_ready,

    output logic [3:0]           ifu_packet_valid_dbg,
    output logic                 buffer_enq_ready_dbg
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

    logic [3:0] ifu_fetch_valid;
    logic [3:0][31:0] ifu_fetch_pcs;
    logic [3:0][31:0] ifu_fetch_insts;
    logic ifu_fetch_ready;
    logic [1:0][31:0] buffer_deq_pcs;
    logic [1:0][31:0] buffer_deq_insts;

    assign fetch_pc0 = buffer_deq_pcs[0];
    assign fetch_pc1 = buffer_deq_pcs[1];
    assign fetch_inst0 = buffer_deq_insts[0];
    assign fetch_inst1 = buffer_deq_insts[1];
    assign ifu_packet_valid_dbg = ifu_fetch_valid;
    assign buffer_enq_ready_dbg = ifu_fetch_ready;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(RESET_PC)
    ) fetcher (
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
    ) buffer (
        .clk,
        .rst_n,
        .flush(redirect_valid),
        .enq_valid(ifu_fetch_valid),
        .enq_insts(ifu_fetch_insts),
        .enq_pcs(ifu_fetch_pcs),
        .enq_ready(ifu_fetch_ready),
        .deq_valid(fetch_valid),
        .deq_insts(buffer_deq_insts),
        .deq_pcs(buffer_deq_pcs),
        .deq_ready(fetch_ready)
    );
endmodule
