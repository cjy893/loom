module regfile_test_top (
    input  logic        clk,
    input  logic [2:0]  read_en,
    input  logic [2:0]  read_addr_0,
    input  logic [2:0]  read_addr_1,
    input  logic [2:0]  read_addr_2,
    output logic [31:0] read_data_0,
    output logic [31:0] read_data_1,
    output logic [31:0] read_data_2,
    input  logic [1:0]  write_en,
    input  logic [2:0]  write_addr_0,
    input  logic [2:0]  write_addr_1,
    input  logic [31:0] write_data_0,
    input  logic [31:0] write_data_1
);
    logic [2:0][2:0] read_addr;
    logic [2:0][31:0] read_data;
    logic [1:0][2:0] write_addr;
    logic [1:0][31:0] write_data;

    assign read_addr[0] = read_addr_0;
    assign read_addr[1] = read_addr_1;
    assign read_addr[2] = read_addr_2;
    assign read_data_0 = read_data[0];
    assign read_data_1 = read_data[1];
    assign read_data_2 = read_data[2];
    assign write_addr[0] = write_addr_0;
    assign write_addr[1] = write_addr_1;
    assign write_data[0] = write_data_0;
    assign write_data[1] = write_data_1;

    regfile #(
        .NUM_ENTRIES(8),
        .NUM_READ_PORTS(3),
        .NUM_WRITE_PORTS(2),
        .DATA_WIDTH(32)
    ) dut (
        .clk,
        .read_en,
        .read_addr,
        .read_data,
        .write_en,
        .write_addr,
        .write_data
    );
endmodule
