`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:43:53 03/22/2022 
// Design Name: 
// Module Name:    second_part 
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
module second_part(input clk, input reset, input S, input [3:0] A, output reg[2:0] x, output reg[2:0] y, output reg[3:0] B);

	wire z;
	reg c;
	reg[2:0] counter;
	
	parameter T0 = 3'b000;
	parameter T1 = 3'b001;
	parameter T2 = 3'b010;
	parameter T3 = 3'b011;
	
	reg[2:0] curstate;
	reg[2:0] nextstate;

	assign z = (counter==0) ? 1 : 0;
	
	always @(posedge clk or posedge reset)
	begin
		if(reset) curstate = T0;
		else curstate= nextstate;
	end
	
	always @(curstate or S or z)
	begin
		case (curstate)
			T0: nextstate = (S==0)? T0 : T1;
			T1: nextstate = T2;
			T2: nextstate = T3;
			T3: nextstate = (z==1) ? T0 : T1;		
		endcase
	end

	always @(*)
	begin
		case (curstate)
			T0:
				 begin 
					x=0;y=0;c=0;
					counter=3'b100;B=A;
				 end
			T1: 
				 begin 
					counter=counter-1;
					c=B[0];
					B=B>>1; 
				 end
			T2:
				 begin 
					if(c==0)
						x=x+1;
					else
						y=y+1; 
				 end
		endcase
	end	

endmodule
