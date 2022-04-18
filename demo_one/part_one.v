`timescale 1ns / 1ps

module part_one(input x, input clk, input reset, output reg y);

	reg[2:0] nextstate;
	reg[2:0] curstate;

	always @(posedge clk or posedge reset)
	begin
		if(reset) curstate = 3'b000;
		else curstate = nextstate;
	end
	
	always @(x or curstate)
	begin
		case (curstate)
			3'b000: if(x==0) 	begin nextstate = 3'b000; y=0; end  
					  else 		begin nextstate = 3'b001; y=0; end
			3'b001: if(x==0) 	begin nextstate = 3'b010; y=0; end  
					  else 		begin nextstate = 3'b011; y=0; end
			3'b010: if(x==0) 	begin nextstate = 3'b000; y=0; end  
					  else 		begin nextstate = 3'b011; y=0; end
			3'b011: if(x==0) 	begin nextstate = 3'b100; y=0; end  
					  else 		begin nextstate = 3'b011; y=1; end
			3'b100: if(x==0) 	begin nextstate = 3'b000; y=0; end  
					  else 		begin nextstate = 3'b011; y=1; end
			default:  			begin nextstate = 3'b000; y=0; end
		endcase
	end

endmodule
