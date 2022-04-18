`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:29:35 02/01/2022 
// Design Name: 
// Module Name:    blocking_reg 
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
module blocking_reg(a,clk,q0,q1,q2);

	 input a,clk;
	 output reg q0,q1,q2;
	 
	always @(posedge clk) 
	 begin	
	 q2=q1;
	 q1=q0;
	 q0=a;
	 end 
	 
endmodule
