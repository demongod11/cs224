`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    17:04:03 01/18/2022 
// Design Name: 
// Module Name:    delay_rca 
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
module delay_rca(X, Y, Cin, S, Cout);
 input [3:0] X, Y, Cin;
 output [3:0] S;
 output Cout;
 wire w1, w2, w3;
 fulladder u1(X[0], Y[0], Cin, S[0], w1);
 fulladder u2(X[1], Y[1], w1, S[1], w2);
 fulladder u3(X[2], Y[2], w2, S[2], w3);
 fulladder u4(X[3], Y[3], w3, S[3], Cout);
endmodule

module fulladder(X, Y, Cin, S, Cout);
  input X, Y, Cin;
  output S, Cout;
  wire temp;
  assign temp = X ^ Y;
  assign #2 S = temp ^ Cin;
  assign #2 Cout = X&Y | Y&Cin | Cin&X;
	
endmodule


