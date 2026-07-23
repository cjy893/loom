module loom_core #(
    parameter int CORE_WIDTH = 2,
    parameter int FETCH_WIDTH = 4,
    parameter int ALU_WIDTH = 3,
    parameter int MEM_WIDTH = 2,
    parameter int LSU_WIDTH = 1,
    parameter int PHYSICAL_REGS = 48,
    parameter int ROB_ENTRIES = 64,
    parameter int ALU_IQ_ENTRIES = 16,
    parameter int MEM_IQ_ENTRIES = 16,
    parameter int UNQ_IQ_ENTRIES = 16,
    parameter int NUM_WAKEUPS = 6,
    parameter int NUM_REGF_READS = 10,
    parameter int NUM_REGF_WRITES = 5
)(
    input logic clk,
    input logic rst_n,

    input logic [FETCH_WIDTH-1:0] fe_valid,
    input uop_t [FETCH_WIDTH-1:0] [31:0] fe_insts,
    output logic fe_ready,

    output logic lsu_agen_valid,
    output logic [31:0] lsu_agen_addr,
    output uop_t lsu_agen_uop,
    output logic lsu_dgen_valid,
    output logic [31:0] lsu_dgen_data,
    output uop_t lsu_dgen_uop,
    input logic lsu_resp_valid,
    input exe_unit_resp_t lsu_resp,

    output logic csr_req_valid,
    output logic [13:0] csr_addr,
    output logic [1:0] csr_cmd,
    output logic [31:0] csr_wdata,
    input logic [31:0] csr_rdata,

    output logic rob_empty,
    output logic [31:0] debug_pc
);
    import loom_params::*;
    import loom_consts::*;
    import loom_types::*;

    logic [CORE_WIDTH-1:0] dec_fire;
    uop_t [CORE_WIDTH-1:0] dec_uops;
    logic [CORE_WIDTH-1:0] dec_valids;
    logic dec_ready;
    logic [CORE_WIDTH-1:0] dec_xcpts;

    for(genvar w = 0; w < CORE_WIDTH; w++) begin: gen_decode
        logic dec_valid;
        assign dec_valid = (w < FETCH_WIDTH) ? fe_valid[w] : 1'b0;

        decode decode_inst(
            .inst(fe_insts[w]),
            .status_prv(2'b00),
            .uop(dec_uops[w])
        );

        assign dec_valids[w] = dec_valid && !dec_uops[w].exception;
    end

    assign dec_fire = dec_valids;
    assign fe_ready = dec_ready;
    assign dec_ready = !(|rn_stalls && rob_ready_w);
endmodule