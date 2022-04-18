`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:40 03/24/2022 
// Design Name: 
// Module Name:    lab 
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
module lab(
    );


endmodule


module ram_sync(
	input clk,
   input [4:0] Address,
	input [7:0] DataIn,
	output [7:0] DataOut,
	input cs,
	input we,
	input oe
	);

	reg [7:0] memory [0:31];
	
	//Memory initialisation
	integer k;
	integer i=3;
	initial begin
		for(k=0;k<=31;k = k+1) begin
			i = k;
			memory[k] = i;
		end
	end
	
	//memory write
	always @(posedge clk)
	begin
		if (cs && we) memory[Address] = DataIn;
	end
	
	//memory read
	assign DataOut = (cs && oe && ~we) ? memory[Address] : 8'bz;


endmodule

module register_16(
    input clk,
    input reg_wr_en,
    input [3:0] reg_id,
    input [7:0] reg_in,
    output [7:0] reg_out
    );
	
	reg [7:0] register [0:15];
	
	//reading
	assign reg_out = register[reg_id];
	
	//writing
	always @(posedge clk)
	begin
		if(reg_wr_en) register[reg_id] = reg_in;
	end
	
	
endmodule

module alu(
    input [7:0] operand1,
    input [7:0] operand2,
    input [1:0] func,
    output reg [7:0] out
    );
     
    always @(*)
    begin
        case(func)
            2'b00: out = operand1+operand2;
            2'b01: out = operand1-operand2;
            2'b10: out = operand1^operand2;
            default: out = 0;
        endcase
    end
endmodule

module contrl(
	input reset,
	input clk,
	input S,
	output reg[7:0] temp,
	output reg[7:0] tempalu
);
reg [2:0] curr, next;
reg [3:0] count;
parameter T0 = 3'b000;
parameter T1 = 3'b001;
parameter T2 = 3'b010;
parameter T3 = 3'b011;
parameter T4 = 3'b100;

reg [4:0] MAR;
reg [7:0] MDR;
wire [7:0] tMDR;
reg cs,wrS, rdS;
ram_sync s0(clk, MAR, MDR,tMDR,cs,wrS, rdS);

reg [4:0] regAddr;
reg [7:0] regDin;
wire [7:0] regDout;
reg wrR;
register_16 f0(clk, wrR, regAddr,regDin,regDout);

reg [7:0] op1;
reg [7:0] op2;
reg [7:0] opalu1;
reg [7:0] opalu2;
reg [1:0] func;
wire [7:0] aluout;
alu a0(opalu1, opalu2, func, aluout);

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
        T3:
		  begin 
			  if(count % 2==0) next = T4;
			  else next = T1;
        end
		  T4:
		  begin
			  if(count == 0) next = T0;
			  else next = T1;
		  end
    endcase
end

always @(curr)
begin
    case(curr)
        T0:   
        begin 
            MAR = 0;
				regAddr =0;
				count = 9;
        end
        T1:
        begin
				wrS=0; rdS=1; cs=1;
				temp = tMDR;
				$display("tMDR=%d", tMDR);
				count=count-1;
        end
        T2:
        begin
				wrR=1;
				regDin = temp;
				if(count %2) op1=temp;
				else op2=temp;
        end
        T3:
        begin
				MAR = MAR+1;
				regAddr = regAddr + 1;
        end
		  T4:
		  begin
				opalu1 = op1;
				opalu2 = op2;
				if(count==2)
					func = 2;
				else 
					func = (count+1)%4;				
				tempalu=aluout;
				$display("count=%d \t tempalu=%d", count, tempalu);
		  end
    endcase
	 end
endmodule
