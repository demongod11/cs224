`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    01:59:24 03/31/2022 
// Design Name: 
// Module Name:    reg_file 
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
module reg_file(input clk,input reg_wren,input [3:0] reg_id,input [15:0] reg_in,output [15:0] reg_out);
	
	reg [15:0] rf [0:15];
	
	assign reg_out = rf[reg_id];
	
	always @(posedge clk)
	begin
		if(reg_wren) rf[reg_id] = reg_in;
	end
	
endmodule
