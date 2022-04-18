`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:35:43 03/29/2022 
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

module mem_controller(input reset,
	input clk,
	input S,
	output reg [3:0] curr,
	output reg [15:0] temp,
	output reg [2:0] opcode,
	output reg [3:0] dest,
	output reg [3:0] src1,
	output reg [3:0] src2,
	output reg [15:0] opa1,
	output reg [15:0] opa2,
	output reg [15:0] alutemp,
	output reg [3:0]x
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
//parameter T14 = 4'b1110;

reg [3:0] next;
//reg [3:0]x;

reg [4:0] MAR;
reg [15:0] MDR;
wire [15:0] mdr;
reg swe, soe,sce;
sram_sync sr(clk, MAR, MDR,mdr,sce, soe,swe);

reg [3:0] regadr;
reg [15:0] regin;
wire [15:0] regout;
reg rwe;
reg_file rf(clk, rwe, regadr, regin,regout);

reg [2:0] func;
wire [15:0] aluout;

integer d=0;
integer c=0;
integer c1=0;

reg check;
reg [3:0] temp3;
reg [3:0] temp4;
reg [3:0] temp5;
reg [3:0] temp6;

alu a(opa1, opa2, func, aluout);

always @(negedge clk or posedge reset)
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
		  T4: 
				begin
					if(x == 6) next = T5;
					else next = T1;
			   end
		  T5: next = T6;
		  T6: next = T7;
		  T7: next = T8;
		  T8: next = T9;
		  T9: next = T10;
		  T10: 
				begin
					if(check == 0)
						begin
							if(c == 2) next = T11;
							else next = T7;
						end
					else
						begin
							if(c1 == 1) next = T11;
							else next = T7;
						end						
				end
		  T11: next = T12;		 
		  T12: next = T13;
		  T13: 
				begin
					if(d == 4) next = T0;
					else next = T5;
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
        end
        T1:
        begin
				sce=1;swe=0; soe=1;				
        end
		  
		  T2:
        begin
				temp = mdr;
				regin = temp;
				rwe=1;			
		  end
					
		  T3:
		  begin
				x=x+1;
				MAR = MAR+1;
				regadr = regadr + 1;
				d=0;
		  end
		  
		  T5:
		  begin
				sce=1;swe=0;soe=1;
		  end
			
		  T6:
		  begin
				check = mdr [15:15]; opcode = mdr [14:12]; dest = mdr [11:8]; src1 = mdr [7:4]; src2 = mdr [3:0];
				c=0;c1=0; MAR = MAR+1; x=x+1;
		  end
		  
		  T7:	
		  begin
				rwe=0;
				if(check == 0)
					begin
						if(c == 0) regadr = src1;
						else if(c == 1) regadr = src2;
					end
				else
					begin
						if(c1 == 0) regadr = src1;
					end
		  end
		  
		  T8:
		  begin
				if(check == 0)
					begin
						if(c == 0) temp5 = regout;
						else if(c == 1) temp6 = regout;
					end
				else
					begin
						if(c1 == 0) temp5 = regout;
					end
		  end
		  
		  T9: 
		  begin
				if(check == 0) c = c+1;
				else c1 = c1+1;
		  end	  
		  T11:
		  begin
				if(check == 0)
					begin
						opa1 = temp5; opa2 = temp6; func = opcode;
					end
				else
					begin
						opa1 = temp5; opa2 = src2; func = opcode;
					end
		  end
			
		  T12:
		  begin
				alutemp = aluout; rwe=1; regin=alutemp;
				regadr=dest; d = d+1;
		  end
		  
    endcase
end

endmodule