`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:39:42 03/29/2022 
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

module reg_file(  input clk,
    input reg_wren,
    input [4:0] reg_id,
    input [7:0] reg_in,
    output [7:0] reg_out
    );
	
	reg [7:0] rf [0:15];
	
	//reading
	assign reg_out = rf[reg_id];
	
	//writing
	always @(posedge clk)
	begin
		if(reg_wren) rf[reg_id] = reg_in;
	end
endmodule
