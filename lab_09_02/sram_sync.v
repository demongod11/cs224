`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:38:15 03/29/2022 
// Design Name: 
// Module Name:    sram_sync 
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

module sram_sync(clk,add,data_in,data_out,ce,oe,we
    );
	 input[7:0]data_in;
	 input[4:0]add;
	 input ce,oe,we,clk;
	 output reg [7:0]data_out;
	 reg [7:0] sram [31:0];
	 
	 integer i;
	 initial begin
		for(i=0;i<32;i = i+1)begin
			sram[i] = i;
		end
	end
	 always@(posedge clk)
	 begin
		if(!ce)
		begin
			if(we == 0)
				sram[add]<= data_in;
			else if(oe == 0 && we == 1)
				data_out<= sram[add];
		end
	end


endmodule