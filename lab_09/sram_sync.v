`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:50:39 03/29/2022 
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
module sram_sync(
		input [4:0] address,
		input neg_ram_se,
		input neg_oe,
		input neg_we,
		input [7:0]din,
		output reg [7:0] dout,
		input clock
    );
	 reg [7:0] main_memory[0:31];
	 
	 integer i =0;
	 initial begin
	 
            for(i = 0;i<32;i = i+1)
            begin
                main_memory[i] = i;
            end
        
		
	 end
	
	 always @(posedge clock)
	 
		 begin
			
			if(neg_ram_se)
		 begin
			dout = 8'bzzzzzzzz;
			
			
		 
		 end
		 else if(neg_we == 0)
		 begin
			main_memory[address] = din;
			dout = din;

				
			
		 
		 
		 end
		 else if(neg_oe ==0)
		 begin
			dout = main_memory[address];
		 
		 end
		 else
		 begin
			dout = 8'bzzzzzzzz;
		 
		 end
	 
	 end
	 
	 


endmodule
