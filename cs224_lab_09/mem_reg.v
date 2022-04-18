`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:19:33 03/22/2022 
// Design Name: 
// Module Name:    mem_reg 
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

module mem_reg(input clk,input [3:0] register_id,input [7:0] data_in,input RS,input WE,output [7:0] data_out);

  reg [7:0] register_block[15:0];

  integer i;
  
  initial begin
	for(i=0;i<=15;i = i+1)
	  begin
		 register_block[i] = 0;
	  end
  end

  always @(posedge clk)
	  begin
			if( RS & WE)
				 register_block[register_id] = data_in;
	  end
	  assign data_out = RS & !WE ? register_block[register_id] : {8{1'bz}};
endmodule 
