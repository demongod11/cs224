`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:52:49 03/29/2022 
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

module reg_file(
		input [3:0] address,
		input neg_we,
		input [7:0]din,
		output [7:0] dout,
		input clock
        
    );
	 reg [7:0] main_memory[0:31];
	 always @(posedge clock)
	 
		 begin
			
		
		 if(neg_we == 0)
		 begin
			main_memory[address] = din;
				
		 end
		
	 
	 end
	assign dout = main_memory[address];
endmodule
