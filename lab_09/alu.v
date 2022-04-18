`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:51:54 03/29/2022 
// Design Name: 
// Module Name:    alu 
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

module alu(
    input [7:0] a,
    input [7:0] b,
    input [2:0] operation,
    output reg [7:0] dout
);
	always @(*) 
		begin
		 if(operation==0)
		 begin
			  dout = a+b;
		 end
		 else if(operation==1)
		 begin
			  dout = a*b;
		 end
		 else if(operation==2)
		 begin
			  dout = a|b;
		 end
		 else if(operation==3)
		 begin
			  dout = a&b;
		 end
		 else if(operation==4)
		 begin
			  dout = a-b;

		 end
	 
	 end

    
endmodule
