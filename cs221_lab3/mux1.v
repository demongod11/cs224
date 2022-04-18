`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:17 01/25/2022 
// Design Name: 
// Module Name:    mux1 
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
module mux1(out,i0,i1,i2,i3,s0,s1);
		 input i0,i1,i2,i3,s0,s1;
		 output out;
		 wire S0,S1; wire [3:0] c; wire [3:0] O;
		 not (S0,s0); not (S1,s1);
		 and (c[0],S0,S1); and (c[1],S0,s1); and (c[2],s0,S1); and (c[3],s0,s1); 
		 and (O[0],i0,c[0]);	and (O[1],i1,c[1]); and (O[2],i2,c[2]); and (O[3],i3,c[3]);
		 or (out,O[0],O[1],O[2],O[3]);
endmodule