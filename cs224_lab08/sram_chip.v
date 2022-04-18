`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:08:48 03/08/2022 
// Design Name: 
// Module Name:    sram_chip 
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

module sram_chip(input [4:0] address,input [7:0] data_in,input CS,input OE,input WE,output [7:0] data_out);

  reg [7:0] mem[31:0];

  integer i;
 initial begin
	  for(i=0;i<=31;i = i+1)begin
			mem[i] = i;
	  end
 end

  always @(*)
	  begin
			if( CS & WE)
				 mem[address] = data_in;
	  end

	  assign data_out = CS & OE & !WE ? mem[address] : {8{1'bz}};
endmodule
