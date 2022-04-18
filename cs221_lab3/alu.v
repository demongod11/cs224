`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:26:21 01/25/2022 
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
module alu(output [3:0] o, output cout, input [3:0] a, input [3:0] b, input [2:0] s, input cin);
	 reg [3:0] o;
	 reg cout;
	 always @ (*)
	 begin
	  case( s )
	   0 : {cout,o}=a+b+cin;    //ADD
	   1 :  {cout,o}=a-b-cin;   //SUB
		2 :  o=a|b;         		 //OR
		3 :  o=a&b;					 //AND
		4 :  o=a<<1;				 //SHL
		5 :  o=a>>1;             //SHR
		6 :  o=a<<1 | a[3];      //ROL
		7 :  o=a>>1 | a[0]<<3;   //ROR
	 endcase
	end
endmodule
