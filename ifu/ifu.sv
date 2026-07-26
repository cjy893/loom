import loom_params::*;
import loom_consts::*;
import loom_types::*;

module ifu #(
    parameter int FETCH_WIDTH = 4,
    parameter logic [31:0] RESET_PC = 32'h1c00_0000
)(
    input logic clk,
    input logic rst_n,

    input logic redirect_valid,
    input logic [31:0] redirect_pc,

    output logic imem_req_valid,
    input logic imem_req_ready,
    output logic [31:0] imem_req_addr,

    input logic imem_resp_valid,
    output logic imem_resp_ready,
    input logic [FETCH_WIDTH-1:0] [31:0] imem_resp_insts,

    output logic [FETCH_WIDTH-1:0] fetch_valid,
    output logic [FETCH_WIDTH-1:0] [31:0] fetch_insts,
    output logic [FETCH_WIDTH-1:0] [31:0] fetch_pc,
    input logic fetch_ready
);
    localparam int FETCH_BYTES = FETCH_WIDTH * 4;
    localparam int FETCH_ALIGN_BITS = $clog2(FETCH_BYTES);
    localparam int FETCH_LANE_BITS = (FETCH_WIDTH > 1) ? $clog2(FETCH_WIDTH) : 1;

    typedef enum logic [1:0] {
        S_REQUEST,
        S_RESPONSE,
        S_FETCH,
        S_FAULT
    } state_t;

    state_t state_q;
    logic [31:0] request_pc_q;
    logic request_stale_q;
    logic [31:0] redirect_pc_q;
    logic [FETCH_WIDTH-1:0] fetch_valid_q;
    logic [FETCH_WIDTH-1:0][31:0] fetch_pc_q;
    logic [FETCH_WIDTH-1:0][31:0] fetch_insts_q;
    logic [FETCH_LANE_BITS-1:0] request_lane;
    logic request_adef;

    function automatic logic [31:0] align_bundle(input logic [31:0] pc);
        align_bundle = (pc >> FETCH_ALIGN_BITS) << FETCH_ALIGN_BITS;
    endfunction

    always_comb begin
        request_lane = FETCH_LANE_BITS'(request_pc_q >> 2);

        imem_req_valid = (state_q == S_REQUEST) && !request_adef;
        imem_req_addr = align_bundle(request_pc_q);
        imem_resp_ready = state_q == S_RESPONSE;

        fetch_valid = '0;
        fetch_pc = fetch_pc_q;
        fetch_insts = fetch_insts_q;
        if (state_q == S_FETCH && !redirect_valid) fetch_valid = fetch_valid_q;
    end

    assign request_adef = |request_pc_q[1:0];

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state_q <= S_REQUEST;
            request_pc_q <= RESET_PC;
            request_stale_q <= 1'b0;
            redirect_pc_q <= '0;
            fetch_valid_q <= '0;
            fetch_pc_q <= '0;
            fetch_insts_q <= '0;
        end else begin
            case (state_q)
                S_REQUEST: begin
                    if(request_adef) begin
                        if(redirect_valid) begin
                            request_pc_q <= redirect_pc;
                            request_stale_q <= 1'b0;
                            fetch_valid_q <= '0;
                        end else begin
                            state_q <= S_FETCH;
                            request_stale_q <= 1'b0;

                            for(int lane = 0; lane < FETCH_WIDTH; lane++) begin
                                fetch_valid_q[lane] <= lane == 0;
                                fetch_pc_q[lane] <= lane == 0 ? request_pc_q : '0;
                                fetch_insts_q[lane] <= '0;
                            end
                        end
                    end else if (redirect_valid) begin
                            request_stale_q <= 1'b1;
                            redirect_pc_q <= redirect_pc;
                        end

                    if (imem_req_valid && imem_req_ready)
                        state_q <= S_RESPONSE;
                end

                S_RESPONSE: begin
                    if (redirect_valid) begin
                        request_stale_q <= 1'b1;
                        redirect_pc_q <= redirect_pc;
                    end

                    if (imem_resp_valid && imem_resp_ready) begin
                        if (request_stale_q || redirect_valid) begin
                            state_q <= S_REQUEST;
                            request_pc_q <= redirect_valid ? redirect_pc : redirect_pc_q;
                            request_stale_q <= 1'b0;
                        end else begin
                            state_q <= S_FETCH;
                            for (int lane = 0; lane < FETCH_WIDTH; lane++) begin
                                if (lane + int'(request_lane) < FETCH_WIDTH) begin
                                    fetch_valid_q[lane] <= 1'b1;
                                    fetch_pc_q[lane] <= request_pc_q + lane * 4;
                                    fetch_insts_q[lane] <= imem_resp_insts[lane + int'(request_lane)];
                                end else begin
                                    fetch_valid_q[lane] <= 1'b0;
                                    fetch_pc_q[lane] <= '0;
                                    fetch_insts_q[lane] <= '0;
                                end
                            end
                        end
                    end
                end

                S_FETCH: begin
                    if (redirect_valid) begin
                        state_q <= S_REQUEST;
                        request_pc_q <= redirect_pc;
                        request_stale_q <= 1'b0;
                        fetch_valid_q <= '0;
                    end else if (fetch_ready && |fetch_valid_q) begin
                        fetch_valid_q <= '0;

                        if(request_adef) begin
                            state_q <= S_FAULT;
                        end else begin
                            state_q <= S_REQUEST;
                            request_pc_q <= align_bundle(request_pc_q) + FETCH_BYTES;
                            request_stale_q <= 1'b0;
                        end
                    end
                end

                S_FAULT: begin
                    if (redirect_valid) begin
                        state_q <= S_REQUEST;
                        request_pc_q <= redirect_pc;
                        request_stale_q <= 1'b0;
                        fetch_valid_q <= '0;
                    end
                end

                default: begin
                    state_q <= S_REQUEST;
                    request_pc_q <= RESET_PC;
                    request_stale_q <= 1'b0;
                    fetch_valid_q <= '0;
                end
            endcase
        end
    end
endmodule
