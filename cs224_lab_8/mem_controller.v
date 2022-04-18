`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:48:04 03/09/2022 
// Design Name: 
// Module Name:    mem_controller 
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
module mem_controller(clk, reset, s, MAR, MDR, curstate);
	input clk, reset, s;
	output reg[4:0] MAR;
	output reg[7:0] MDR;
	
	reg WE;
	reg OE;
	reg CS;
	
	parameter T0 = 3'b000;
	parameter T1 = 3'b001;
	parameter T2 = 3'b010;
	parameter T3 = 3'b011;
	parameter T4 = 3'b100;
	parameter T5 = 3'b101;
	
	output reg[2:0] curstate;
	reg [2:0] nextstate;
	wire z;
	
	sram_chip chipset(MAR, MDR, CS, OE, WE, MDR);
	initial begin 
		MAR=0;
		MDR=0;
	end
	
	integer buffer = 0;
	
	assign z = (buffer==1) ? 1 : 0;

	always @(posedge clk or posedge reset)
	begin
		if(reset) curstate = T0;
		else curstate= nextstate;
	end
	
	always @(curstate or s or z)
	begin
		case (curstate)
			T0: begin nextstate = (s==0)? T0 :T1; end
			T1: nextstate=T2;
			T2: nextstate=T3;
			T3: nextstate=T4;
			T4: nextstate=T5;
			T5: begin nextstate=(z==0)?T1:T0; end
			endcase
	end
	
	always @(*)
	begin
		case (curstate)
			T0: MAR=0;
			T1: begin
					WE=0; OE=1; CS=1; 
				 end
			T2: MDR = MDR+1; 
			T3: begin 
					WE=1; OE=0; CS=1; 
				end
			T4:begin
					if(MAR==31)
					  begin
						buffer=1;
					  end
				   else
					  begin
						buffer=0;
					  end
					MAR=MAR+1;
				end
		endcase
	end
endmodule