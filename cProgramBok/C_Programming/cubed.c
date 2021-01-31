// Demonstrates a simple function

#include <stdio.h>

long cube(long x);

long input, answer;

int main(void)
{
	printf("Enter an integer value: ");
	scanf("%Ld", &input);
	answer = cube(input);
	
	// ERROR: %1d is the conversion specifier for a long integer 
	// %Ld is the conversion specifier for a long integer in Dev C++
	printf("\nThe cube of %Ld is %Ld.\n", input, answer);
	
	return 0;
	
		
}


// Function cube() -- Calculates the cubed value of a variable
long cube(long x)
{
	long x_cubed;
	
	x_cubed = x * x * x;
	return x_cubed;
}
