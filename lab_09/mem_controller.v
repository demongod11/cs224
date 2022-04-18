`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:26:07 03/29/2022 
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

module mem_controller(
		input start,
		input reset,
		input clk,
		output reg [4:0] state,
		output reg [7:0] temp1,
		output reg [7:0] temp2,
		output  [7:0] dout,
		output [7:0] output_alu,
		output reg[4:0] address,
		output reg[3:0] reg_address
    );
		
		reg neg_ram_se;
		reg neg_oe;
		reg neg_we;
		reg [7:0] din;
	
		reg reg_neg_we;
		reg [7:0] reg_din;
		wire[7:0] reg_dout;

		
		
		reg [7:0] input_a, input_b;
		reg [2:0] input_operation;
		
		
		sram_sync main_ram(address,neg_ram_se,neg_oe,neg_we,din,dout,clk);
		reg_file main_reg(reg_address,reg_neg_we,reg_din,reg_dout,clk);
		alu main_alu(input_a,input_b, input_operation,output_alu);
		
		assign wire_din = din;
		assign wire_dout = dout;
		assign wire_reg_din = reg_din;
		assign wire_reg_dout = reg_dout;
		
		
      reg [4:0] counter = 0;
		
		reg [3:0] tempcnt = 0;
		initial begin
			state = 0;
		end
		always @(posedge clk)
		begin
			if(reset)
			begin
				state = 0;
				counter = 0;
				tempcnt = 0;
			end
			
			else if(state == 0)
			begin
				if(start)
				state = 1;
				
				
			end
			else if(state ==1)
			begin
                address = counter;
                neg_ram_se = 0;
                neg_oe = 0;
                state = 2;
			end
			else if(state ==2)
			begin
			
				state = 3;
			end
            else if(state == 3)
            begin
               
                reg_address = counter;
               
                reg_neg_we = 0;
                reg_din = dout;
                state = 4;
					neg_ram_se = 1;
                neg_oe =1;

            end
			else if(state ==4)
			begin
			
				state = 5;
			end
            else if(state ==5)
            begin
                reg_neg_we = 1;
                if(counter == 5)
                begin
                    state = 6;
                    counter = 0;
                end
                else
                begin
                    counter = counter+1;
					state = 1;
                end
            end
			else if(state ==6)
			begin
				if(tempcnt==0)
				begin
					reg_address = 0;
				end
				else if(tempcnt == 1)
				begin
					reg_address = 2;
				end
				else if(tempcnt ==2)
				begin
				
					reg_address = 4;
				end
				state = 7;
				
			end
			else if(state ==7)
			begin
				state = 8;
			end
			else if(state==8)
			begin
				temp1 = reg_dout;
				state = 9;
				
			end
			else if(state ==9)
			begin
				if(tempcnt==0)
				begin
					reg_address = 1;
				end
				else if(tempcnt == 1)
				begin
					reg_address = 3;
				end
				else if(tempcnt ==2)
				begin
				
					reg_address = 5;
				end
				state = 10;
				
			end
			else if(state ==10)
			begin
				state = 11;
			end
			else if(state==11)
			begin
				temp2 = reg_dout;
				state = 12;
			end
			else if(state ==12)
			begin
				input_a  =temp1;
				input_b = temp2;
				if(tempcnt==0)
				begin
					input_operation = 0;
				end
				else if(tempcnt == 1)
				begin
					input_operation = 4;
				end
				else if(tempcnt ==2)
				begin
					input_operation = 3;
				end
				state = 13;
				
			end
			else if(state ==13)
			begin
				neg_ram_se = 0;
				neg_we = 0;
				din = output_alu;
				if(tempcnt==0)
				begin
						address = 7;
				end
				else if(tempcnt == 1)
				begin
						address = 8;
				end
				else if(tempcnt ==2)
				begin
						address = 9;
				end
				state = 14;
			end
			else if(state ==14)
			begin
			
				state = 15;
			end
			else if(state ==15)
			begin
				neg_ram_se = 1;
				neg_we =1;
				if(tempcnt == 2)
				begin
					state = 16;
					tempcnt = 0;
				end
				else 
				begin
					tempcnt = tempcnt+1;
					state = 6;
				end
			end
			
			else if(state ==16)
			begin
                address = counter;
                neg_ram_se = 0;
                neg_oe = 0;
                state = 17;
			end
			else if(state ==17)
			begin
			
				state = 18;
			end
            else if(state == 18)
            begin
					if(counter == 9)
					begin
						counter = 0;
						state = 0;
					end
					else
					begin
                counter = counter+1;
					 state = 16;
					end

            end
			
			
		end
		
endmodule
