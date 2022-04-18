`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:19:42 02/23/2022 
// Design Name: 
// Module Name:    quiz2B 
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
module part1(input [1:0] din, input clk, input en, input ld, input incr, output reg [1:0] ans, output reg overflow);

always@(posedge clk)
	begin
		if(en)
			begin
				if(ld)
					begin
						ans<=din;
					end
				if(incr)
					begin
						{overflow,ans}<= ans+1;
					end
			end
	end
endmodule


module part2(input [4:0] din, input clk, input en, input ld, input incr, output reg [4:0] ans, output reg overflow);

always@(posedge clk)
begin
part1(din[1:0],clk, en,ld, incr,ans[1:0], overflow);
ans[2]<=overflow;
part1(din[3:2],clk, en,ld, incr,ans[3:2], overflow);
end

endmodule
