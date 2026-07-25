module ifu_test_top (
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

    output logic [3:0]           fetch_valid,
    output logic [3:0][31:0]     fetch_pc,
    output logic [3:0][31:0]     fetch_insts,
    input  logic                 fetch_ready
);
    localparam logic [31:0] RESET_PC = 32'h1c00_0000;

    ifu #(
        .FETCH_WIDTH(4),
        .RESET_PC(RESET_PC)
    ) dut (
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
        .fetch_valid,
        .fetch_pc,
        .fetch_insts,
        .fetch_ready
    );
endmodule
