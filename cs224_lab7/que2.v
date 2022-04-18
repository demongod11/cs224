`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    18:48:50 02/22/2022 
// Design Name: 
// Module Name:    que2 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
`timescale 1ns / 1ps
module que2(clk, reset, s, Ain, Bin, C, curstate, done);

    input clk, reset, s;
    input [3:0] Ain, Bin;
    output reg [3:0] C;
    output reg done;

    parameter T0 = 3'b000;
    parameter T1 = 3'b001;
    parameter T2 = 3'b010;
    parameter T3 = 3'b011;
    parameter T4 = 3'b100;
    parameter T5 = 3'b101;
    parameter T6 = 3'b110;
    parameter numBits = 4;

    output reg [2:0] curstate;
    reg [2:0] nextstate;
    wire z;
    reg [2:0] P;
    reg [3:0] A, B;
    reg i;

    assign z = (P==0) ? 1 : 0;

    always @(posedge clk or posedge reset)
    begin
        if(reset) curstate = T0;
        else curstate= nextstate;
    end

    always @(curstate or s or z)
    begin
        case (curstate)
            T0: begin nextstate = (s==0)? T0 : T1; done=0;end
            T1: begin nextstate = T4; done=0;end
            T4: begin nextstate = T5; done=0;end
            T5: begin nextstate = T2; done=0;end
            T2: begin nextstate = T6; done=0;end
            T6: begin nextstate = T3; done=0;end
            T3: begin
                    nextstate = (z==1)? T0 : T2;
                    if(z==1) done=1;
                end
        endcase
    end


    always @(*)
    begin
        case (curstate)
            T1: 
                begin
                    A=Ain; B=Bin; P=numBits; C=0; i=0;
                end
            T2: 
                begin
                    P = P-1;
                    if(i == 0)
                        C[0] = A[0] & B[0];
                    else 
                        C[0] = A[0] | B[0];
                end
            T3: 
                begin
                    C = {C[0], C[3:1]};
                    A = A >>1;
                    B = B >>1;
                    i = ~i;
                end
        endcase
    end

endmodule
