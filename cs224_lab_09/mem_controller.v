`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:32:44 03/22/2022 
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

module mem_controller(input clk,input reset,input s,output reg[4:0] MAR_one,output reg[3:0] MAR_two,output reg[7:0] MDR_one, output reg[7:0] MDR_two,output reg[3:0] curstate );
	
	reg WE; reg OE; reg CS; reg RS; reg RWE;

	parameter T0 = 4'b0000;
	parameter T1 = 4'b0001;
	parameter T2 = 4'b0010;
	parameter T3 = 4'b0011;
	parameter T4 = 4'b0100;
	parameter T5 = 4'b0101;
	parameter T6 = 4'b0110;
	parameter T7 = 4'b0111;
	parameter T8 = 4'b1000;
	parameter T9 = 4'b1001;
	parameter T10 = 4'b1010;
	parameter T11 = 4'b1011;
	parameter T12 = 4'b1100;
	parameter T13 = 4'b1101;
	parameter T14 = 4'b1110;
	
	reg [3:0] nextstate;
	wire z;
	wire z_two;
	
	reg [7:0] out;
	reg [7:0] ain;
	reg [7:0] bin;
	reg [2:0] s_code;
	sync_sram chipset(clk, MAR_one, MDR_one, CS, OE, WE, MDR_one);
   mem_reg mem_file(clk, MAR_two, MDR_two, RS, RWE, MDR_two);
	alu alu_lab(out, ain, bin, s_code);
	initial begin 
		MAR_one=0; MAR_two=0;
		MDR_one=0; MDR_two=0;
	end
	
	integer buffer = 0;
	integer buffer_two = 0;
	
	reg [7:0] temp_one;
	reg [7:0] temp_two;
	reg [7:0] temp_three;
	reg [3:0] temp_four;
	integer temp_five = 6;
	
	assign z = (buffer==1) ? 1 : 0;
	assign z_two = (buffer_two==1) ? 1 : 0;

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
			T4: begin nextstate=(z==0)?T1:T5; end
			T5: nextstate=T6;
			T6: nextstate=T7;
		   T7: nextstate=T8;
			T8: nextstate=T9;
			T9: nextstate=T10;
			T10: nextstate=T11;
			T11: nextstate=T12;
			T12: nextstate=T13;
			T13: nextstate=T14;
			T14: begin nextstate=(z_two==0)?T6:T0; end
			endcase
	end
	
	always @(*)
	begin
		case (curstate)
			T0: begin
					MAR_one=0; MAR_two=0; MDR_one=0; MDR_two=0; 
				 end
			T1: begin
					WE=0; OE=1; CS=1; 
				 end
			T2: begin
			      MDR_two = MDR_one; 
					RS=1;RWE=1;
				 end
			T3: begin 
					MAR_one = MAR_one+1;
					MAR_two = MAR_two+1;
				   if(MAR_one>5)
					  begin
						buffer=1;
					  end
				   else
					  begin
						buffer=0;
					  end
				 end
			T5: MAR_two = 0; 
			T6: begin
					RS=1; RWE=0;
				 end
			T7: begin
					ain=MDR_two;
				 end
			T8: MAR_two = MAR_two+1;
			T9: begin
			      RS=1; RWE=0; 
				 end
			T10: begin
					bin=MDR_two;
				  end
		   T11: MAR_two = MAR_two+1;
			T12: begin
					 s_code=3'b000;
					 temp_three = out;
					 $display("out = %b", out);
				  end
			T13: begin
					 temp_four = MAR_two;
					 RS=1;RWE=1;
					 MAR_two = temp_five;
					 MDR_two = temp_three;
				  end
			T14: begin
					 temp_five = temp_five + 1;
					 MAR_two = temp_four;
					 if(MAR_two>5)
					  begin
						buffer_two=1;
					  end
				    else
					  begin
						buffer_two=0;
					  end
				  end			  
		endcase
	end
endmodule
