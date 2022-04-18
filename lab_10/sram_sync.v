`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:36:07 03/29/2022 
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

module sram_sync(clk,add,data_in,data_out,cs,oe,we);
	 input[15:0]data_in;
	 input[4:0]add;
	 input cs,oe,we,clk;
	 output reg [15:0]data_out;
	 reg [15:0] sram [31:0];
	 
	 integer i;
	 initial begin
		for(i=0;i<6;i = i+1)
			begin
				sram[i] = i;
			end
		sram[6] = 16'b0000011000000001;
		sram[7] = 16'b0001011100100011;
		sram[8] = 16'b0010100001000101;
		sram[9] = 16'b1000100101000101;
		for(i=10;i<32;i = i+1)
			begin
				sram[i] = 0;
			end
	 end

	 always@(posedge clk)
	 begin
		if(cs)
		begin
			if(we == 1)
				sram[add]<= data_in;
			else if(oe == 1 && we == 0)
				data_out<= sram[add];
		end
	end
endmodule
