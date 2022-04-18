`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:12:26 03/08/2022 
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

module mem_controller(input reset, input clk, input State);
	reg [4:0] MAR;
	reg [7:0] MDR;
	reg [1:0] next_state, curr_state;
	reg count;
	wire [7:0] mdr;
	reg CS,OE,WE;
	 parameter T0 = 2'b00,
				  T1 = 2'b01,	  
				  T2 = 2'b10,
				  T3 = 2'b11;
	always @(posedge clk or posedge reset)
		begin
			if(reset) 
				curr_state = T0;
			else
				curr_state = next_state;
		end
	sram_chip m1(.address(MAR), .data_in(MDR),.CS(CS), .OE(OE), .WE(WE),.data_out(mdr));
	always @(curr_state or State)
		begin
			case(curr_state)
				T0: if(State ==1)
						next_state=T1;
					 else
					   next_state=T0;
				T1: next_state=T2;
				T2: next_state=T3;
				T3: if(count!=5'b00000)
						next_state=T1;
					 else
					   next_state=T0;
			endcase
		end
		
	always @(curr_state)
		begin
			case(curr_state)
				T0: 
					begin 
						MAR = 0;
						count = 5'b11111;
					end
				T1:
					begin
						//SRAM M1(.clk(clk),.address(MAR), .data(MDR), .CS(1'b0), .OE(1'b0), .WE(1'b1));
						CS=0;
						OE=0;
						WE=1;
					end
				T2:
					begin
						MDR = mdr;
						MDR = MDR + 1;
						CS=0;
						OE=1;
						WE=0;
						//SRAM M2(.clk(clk),.address(MAR), .data(MDR), .CS(1'b0), .OE(1'b1), .WE(1'b0));
					end
				T3:
					begin
						$display("MDR = %d", MDR);
						MAR = MAR + 1;
						count = count - 1;
					end
			endcase
		end


endmodule