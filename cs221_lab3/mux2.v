`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:22:28 01/25/2022 
// Design Name: 
// Module Name:    mux2 
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
module mux2(output out, input [1:0]s, input i0,i1,i2,i3);	
assign out=(~s[0]&~s[1])?i0:(s[0]&~s[1])?i1:(~s[0]&s[1])?i2:i3;					 
endmodule
