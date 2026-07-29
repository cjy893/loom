module divider_reference (
    input  logic        clk,
    input  logic        rst_n,

    input  logic        req_valid,
    output logic        req_ready,
    input  logic        req_signed,
    input  logic        req_remainder,
    input  logic [31:0] req_dividend,
    input  logic [31:0] req_divisor,

    input  logic        kill,

    output logic        resp_valid,
    input  logic        resp_ready,
    output logic [31:0] resp_data
);
    typedef enum logic [1:0] {
        S_IDLE,
        S_BUSY,
        S_RESP
    } state_t;

    state_t state;
    logic [2:0] cycles_left;

    function automatic logic [31:0] calculate(
        input logic        signed_op,
        input logic        remainder_op,
        input logic [31:0] dividend,
        input logic [31:0] divisor
    );
        logic signed [32:0] signed_dividend;
        logic signed [32:0] signed_divisor;
        logic signed [32:0] signed_result;
        begin
            if (divisor == 0) begin
                calculate = remainder_op ? dividend : 32'hffffffff;
            end else if (signed_op) begin
                signed_dividend = {dividend[31], dividend};
                signed_divisor = {divisor[31], divisor};
                if (remainder_op)
                    signed_result = signed_dividend % signed_divisor;
                else
                    signed_result = signed_dividend / signed_divisor;
                calculate = signed_result[31:0];
            end else if (remainder_op) begin
                calculate = dividend % divisor;
            end else begin
                calculate = dividend / divisor;
            end
        end
    endfunction

    assign req_ready = state == S_IDLE && !kill;
    assign resp_valid = state == S_RESP && !kill;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            state <= S_IDLE;
            cycles_left <= '0;
            resp_data <= '0;
        end else if (kill) begin
            state <= S_IDLE;
            cycles_left <= '0;
            resp_data <= '0;
        end else begin
            case (state)
                S_IDLE: begin
                    if (req_valid && req_ready) begin
                        resp_data <= calculate(
                            req_signed,
                            req_remainder,
                            req_dividend,
                            req_divisor
                        );
                        cycles_left <= 3;
                        state <= S_BUSY;
                    end
                end

                S_BUSY: begin
                    if (cycles_left == 1) begin
                        cycles_left <= '0;
                        state <= S_RESP;
                    end else begin
                        cycles_left <= cycles_left - 1'b1;
                    end
                end

                S_RESP: begin
                    if (resp_ready)
                        state <= S_IDLE;
                end

                default: state <= S_IDLE;
            endcase
        end
    end
endmodule
