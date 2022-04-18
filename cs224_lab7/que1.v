`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:53 02/22/2022 
// Design Name: 
// Module Name:    que1 
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

module que1(clk, reset, s, Ain, Bin, C);

    input clk, reset, s;
    input [3:0] Ain, Bin;
    output reg [3:0] C;

    parameter T0 = 2'b00;
    parameter T1 = 2'b01;
    parameter T2 = 2'b10;
    parameter T3 = 2'b11;
    parameter numBits = 4;

    reg [1:0] curstate, nextstate;
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
            T0: nextstate = (s==0)? T0 : T1;
            T1: nextstate = T2;
            T2: nextstate = T3;
            T3: nextstate = (z==1)? T0 : T2;
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
