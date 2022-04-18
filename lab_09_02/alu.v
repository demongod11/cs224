`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:40:15 03/29/2022 
// Design Name: 
// Module Name:    alu 
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

module alu( input [7:0] op1,
    input [7:0] op2,
    input [1:0] func,
    output reg [7:0] out
    );
     
    always @(*)
    begin
        case(func)
            2'b00: out = op1+op2;
            2'b01: out = op1-op2;
            2'b10: out = op1*op2;
            default: out = 0;
        endcase
    end

endmodule
