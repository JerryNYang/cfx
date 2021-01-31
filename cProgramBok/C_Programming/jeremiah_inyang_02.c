/*
	Jeremiah Inyang
	Recitation (lab) 2 assignment
	9.8.2020 (10A)
	csce 3600
	C program that implements exclusive OR (XOR)
	with the intent of swapping two numbers ( 2 and 4)!
*/

#include <stdio.h>

int main()
{
   unsigned int x = 2;
   unsigned int y = 4; 
   // Replace this line with your code that swaps variable values without using any other variables or memory, so next line

	unsigned x_val = x ^ y;
	unsigned y_val = x_val ^ y;
	x_val = x_val ^ y_val;
	
	
   printf("The Original values are \n\nx = %d y = %d", x,y);
	
   printf("\n\nSwap the two variables with the bitwise XOR ");	
   printf("\n -----------------------------Exclusive OR\n");
   printf("x = %d y = %d \n", x_val, y_val);
   return 0;
}
