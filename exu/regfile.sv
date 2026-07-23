module regfile #(
    parameter int NUM_ENTRIES = 48,
    parameter int NUM_READ_PORTS = 10,
    parameter int NUM_WRITE_PORTS = 6,
    parameter int DATA_WIDTH = 32
)(
    input logic clk,

    input logic [NUM_READ_PORTS-1:0] read_en,
    input logic [NUM_READ_PORTS-1:0] [$clog2(NUM_ENTRIES)-1:0] read_addr,
    output logic [NUM_READ_PORTS-1:0] [DATA_WIDTH-1:0] read_data,

    input logic [NUM_WRITE_PORTS-1:0] write_en,
    input logic [NUM_WRITE_PORTS-1:0] [$clog2(NUM_ENTRIES)-1:0] write_addr,
    input logic [NUM_WRITE_PORTS-1:0] [DATA_WIDTH-1:0] write_data
);
    localparam int ADDR_SZ = $clog2(NUM_ENTRIES);

    logic [DATA_WIDTH-1:0] rf [NUM_ENTRIES-1:0];

    always_ff @(posedge clk) begin
        for(int i = 0; i < NUM_WRITE_PORTS; i++) begin
            if(write_en[i] && write_addr[i] != '0) rf[write_addr[i]] <= write_data[i];
        end
    end

    always_comb begin
        for(int r = 0; r < NUM_READ_PORTS; r++) begin
            read_data[r] = (read_addr[r] == '0) ? '0 : rf[read_addr[r]];

            for(int w = 0; w < NUM_WRITE_PORTS; w++) begin
                if(write_en[w] && write_addr[w] == read_addr[r] && read_addr[r] != '0) read_data[r] = write_data[w];
            end
        end
    end
endmodule