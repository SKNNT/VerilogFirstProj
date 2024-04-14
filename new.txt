//структурное программирование
module proj(
(* chip_pin = "88" *) input x0,
(* chip_pin = "89" *) input x1,
(* chip_pin = "90" *) input A,
(* chip_pin = "84" *) output y,
output y_mx0,y_mx1
//output [3:0] N, C,//оба четырех разрядных 
//input [3:0] K
);

	wire Not_A, And1y, And2y;
	not (Not_A, A); //(выход,вход)
	and (And1y, x0, Not_A), (And2y, x1, A);
	or (y ,And1y ,And2y );
	
	Mx (y_mx0,A,x0,x1); //позиционное соответсвие 
	Mx (.y(y_mx1),.A(A),.X0(x0),.X1(x1)); // соответсвие по имени
	
endmodule
	
primitive Mx( //пользовательский примитив 
output y,
input A,X0,X1);
	table
	 //A    x0    x1    y
		0		0		?	: 0;
		0		1		?	: 1;
		1		?		0	: 0;
		1		?		1	: 1;
		
	endtable
	
endprimitive 
