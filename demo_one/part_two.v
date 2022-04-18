`timescale 1ns / 1ps

module part_two(input clk,input reset,input S, input reg [2:0] A, output reg [2:0] x, output reg [2:0] y);
	 
    parameter T0 = 2'b00;
    parameter T1 = 2'b01;
    parameter T2 = 2'b10;
    parameter T3 = 2'b11;
	 
    reg [1:0] curstate, nextstate;
	 reg c;
    wire z;
	 reg [3:0] counter;
	 
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
            T3: nextstate = (z==1)? T0 : T1;
        endcase
    end
	 
    always @(*)
    begin
        case (curstate)
			   T0: 
                begin
                    x=3'b000; y=3'b000; c=1'b0; counter=3'b111;
                end
            T1: 
                begin
                    counter=counter-1;
						  A = A >>c;
                end
            T2: 
                begin
                    if(c == 0)
                        x = x+1;
                    else 
                        y = y+1;
                end
        endcase
    end

endmodule
