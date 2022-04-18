`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:28:35 03/22/2022 
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

module alu(output reg [7:0] o, input [7:0] a, input [7:0] b, input [2:0] s);

	 always @ (*)
		 begin
		  case( s )
			0 :  o=a+b;              //ADD
			1 :  o=a-b;   				 //SUB
			2 :  o=a|b;         		 //OR
			3 :  o=a&b;					 //AND
			4 :  o=a<<1;				 //SHL
			5 :  o=a>>1;             //SHR
			6 :  o=a<<1 | a[7];      //ROL
			7 :  o=a>>1 | a[0]<<7;   //ROR
		 endcase
	 end
	 
endmodule
