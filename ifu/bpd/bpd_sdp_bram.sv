module bpd_sdp_bram #(
    parameter int DEPTH = 1024,
    parameter int WIDTH = 4,
    parameter int ADDR_WIDTH = $clog2(DEPTH)
)(
    input  logic                  clk,
    input  logic                  read_en,
    input  logic [ADDR_WIDTH-1:0] read_addr,
    output logic [WIDTH-1:0]      read_data,
    input  logic                  write_en,
    input  logic [ADDR_WIDTH-1:0] write_addr,
    input  logic [WIDTH-1:0]      write_data
);
`ifdef SYNTHESIS
    xpm_memory_sdpram #(
        .ADDR_WIDTH_A       (ADDR_WIDTH),
        .ADDR_WIDTH_B       (ADDR_WIDTH),
        .BYTE_WRITE_WIDTH_A (WIDTH),
        .CLOCKING_MODE      ("common_clock"),
        .MEMORY_PRIMITIVE   ("block"),
        .MEMORY_SIZE        (DEPTH * WIDTH),
        .READ_DATA_WIDTH_B  (WIDTH),
        .READ_LATENCY_B     (1),
        .RST_MODE_B         ("SYNC"),
        .WRITE_DATA_WIDTH_A (WIDTH),
        .WRITE_MODE_B       ("read_first")
    ) mem (
        .clka(clk),
        .clkb(clk),
        .ena(write_en),
        .wea(write_en),
        .addra(write_addr),
        .dina(write_data),
        .enb(read_en),
        .addrb(read_addr),
        .doutb(read_data),
        .rstb(1'b0),
        .regceb(1'b1),
        .sleep(1'b0),
        .injectdbiterra(1'b0),
        .injectsbiterra(1'b0),
        .dbiterrb(),
        .sbiterrb()
    );
`else
    logic [WIDTH-1:0] mem [0:DEPTH-1];

    always_ff @(posedge clk) begin
        if(read_en)
            read_data <= mem[read_addr];
        if(write_en)
            mem[write_addr] <= write_data;
    end
`endif
endmodule
