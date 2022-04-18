`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:15 03/29/2022 
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

module alu(input [15:0] a,input [15:0] b,input [2:0] func,output reg [15:0] o);
     
    always @(*)
    begin
        case(func)
            0 :  o=a+b;              //ADD
            1 :  o=a-b;              //SUB
            2 :  o=a|b;              //OR
            3 :  o=a&b;              //AND
            4 :  o=a<<1;             //SHL
            5 :  o=a>>1;             //SHR
            6 :  o=a<<1 | a[15];      //ROL
            7 :  o=a>>1 | a[0]<<15;   //ROR
            default: o = 0;
        endcase
    end

endmodule
