`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:37:32 03/29/2022 
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
/////////////////////////////////////////////////////////////////////////////////


module mem_controller(input reset,
	input clk,
	input S,
	output reg [3:0] curr,
	output reg [7:0] op1,
   output reg [7:0] op2,
	output reg [3:0] y,
	output reg[7:0] temp,
	output reg[7:0] temp2,
	output reg[7:0] alutemp
);

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
parameter T15 = 4'b1111;
//parameter T11 = 4'b1011;
reg [3:0] next;
reg [3:0]x;

reg [4:0] MAR;
reg [7:0] MDR;
wire [7:0] mdr;
reg swe, soe,sce;
sram_sync sr(clk, MAR, MDR,mdr,sce, soe,swe);

reg [4:0] regadr;
reg [7:0] regin;
wire [7:0] regout;
reg rwe;
reg_file rf(clk, rwe, regadr, regin,regout);

reg [7:0] opa1;
reg [7:0] opa2;

reg [1:0] func;
wire [7:0] aluout;
//reg [7:0] alutemp;
alu a(opa1, opa2, func, aluout);

always @(posedge clk or posedge reset)
begin
    if(reset)
        curr = T0;
    else
        curr = next;
end

always @(curr or S)
begin
    case(curr)
        T0: next = S ? T1 : T0; 
        T1: next = T2;
        T2: next = T3;
		  T3: next = T4;
		  T4: next = T5;
		  T5: next = T6;
		  T6: next = T7;
		  T7: next = T8;
		  T8: 
				begin
				if(x == 6) next = T9;
				else next = T1;
			   end
		  T9: next = T10;
		  T10: begin
				if(y % 2 || y == 6) next = T11;
				else next = T9;
			   end
		 
		  T11: next = T12;
		  T12: next = T13;
		  T13: next = T14;
		  
		  T14: next = T15;
		 
		  T15:
			  begin
			  if(y == 6) next = T0;
			  else next = T9;
			  end
    endcase
end

always @(curr)
begin
    case(curr)
        T0:   
        begin 
            MAR = 0;
				regadr =0;
				x =0;
				y = 0;
        end
        T1:
        begin
				sce=0;swe=1; soe=0;
				
       end
		  
        T5:
        begin
				temp = mdr;
				regin = temp;
				temp2=regin;
				rwe=1;
				
		 end
					
		  T6:
		  begin
				x=x+1;
				MAR = MAR+1;
				regadr = regadr + 1;
		  end
		  
		  T9:
		  begin
		  rwe=0;
		  regadr = y;
		  //y=regadr;
		  end
		
        T10:
        begin
				if((y+1) %2 == 0) op1=regout;
				else op2=regout;
				y=y+1;
				
				
				
				//y = regadr;
        end
		 // T10: regadr = regadr - 1;
		  T14:
		  begin
				opa1 = op1;
				opa2 = op2;
				func = y%3;		
				
				
			//	$display("x=%d \t alutemp=%d", x, alutemp);
		  end
		  T15:
		  begin
		  alutemp=aluout;
				sce=0;swe=0; soe=1;
				MDR=alutemp;
			 MAR=MAR+1;	
							//alutemp=aluout;
		  end
    endcase
	 end


endmodule