module core_top #(
    parameter logic [31:0] RESET_PC = 32'h1c00_0000,
    parameter logic [31:0] CORE_ID = 32'd0
)(
    input logic aclk,
    input logic aresetn,
    input logic [7:0] intrpt,

    output logic [3:0]  arid,
    output logic [31:0] araddr,
    output logic [3:0]  arlen,
    output logic [2:0]  arsize,
    output logic [1:0]  arburst,
    output logic [1:0]  arlock,
    output logic [3:0]  arcache,
    output logic [2:0]  arprot,
    output logic        arvalid,
    input  logic        arready,

    input  logic [3:0]  rid,
    input  logic [31:0] rdata,
    input  logic [1:0]  rresp,
    input  logic        rlast,
    input  logic        rvalid,
    output logic        rready,

    output logic [3:0]  awid,
    output logic [31:0] awaddr,
    output logic [3:0]  awlen,
    output logic [2:0]  awsize,
    output logic [1:0]  awburst,
    output logic [1:0]  awlock,
    output logic [3:0]  awcache,
    output logic [2:0]  awprot,
    output logic        awvalid,
    input  logic        awready,

    output logic [3:0]  wid,
    output logic [31:0] wdata,
    output logic [3:0]  wstrb,
    output logic        wlast,
    output logic        wvalid,
    input  logic        wready,

    input  logic [3:0]  bid,
    input  logic [1:0]  bresp,
    input  logic        bvalid,
    output logic        bready,

    input  logic        break_point,
    input  logic        infor_flag,
    input  logic [4:0]  reg_num,
    output logic        ws_valid,
    output logic [31:0] rf_rdata,

    output logic [31:0] debug0_wb_pc,
    output logic [3:0]  debug0_wb_rf_wen,
    output logic [4:0]  debug0_wb_rf_wnum,
    output logic [31:0] debug0_wb_rf_wdata
);
endmodule