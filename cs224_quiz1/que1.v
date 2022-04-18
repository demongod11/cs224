`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:13:50 02/02/2022 
// Design Name: 
// Module Name:    que1 
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
module xor_gate(c,a,b); 
input a,b; 
output c; 
assign #2 c= a^b; 
endmodule



module fulladder(X, Y, Cin, S, Cout);
  input X, Y, Cin;
  output S, Cout;
  wire temp;
  assign temp = X ^ Y;
  assign #2 S = temp ^ Cin;
  assign #2 Cout = X&Y | Y&Cin | Cin&X;
	
endmodule

module random_func(a0,a1,f0,f1,sum,cout);
	input a0,a1,f0,f1;
	output sum,cout;
	
	wire temp;
	
	assign temp = xor_gate(temp,a0,a1);
	fulladder(f0,f1,temp,sum,cout);
	
endmodule


