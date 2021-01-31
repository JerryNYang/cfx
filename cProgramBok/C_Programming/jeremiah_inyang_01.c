#include <stdio.h>

// use to check my system... size(S)
#include <limits.h>


// use to check other calcualtions
unsigned int const MAX_U_INT = 4294967295;

int main()
{
	unsigned int var = 5;
	unsigned int sizeOfVar = sizeof(UINT_MAX);
	
	// addition
	unsigned int x = UINT_MAX;
	unsigned int y = 1;
	
	unsigned int carry = x & y;
	x =  x ^ y;
	
	printf("Variable of type unsigned int occupies %u bytes in memory. And can hold a maximum (unsigned int)\n value of %u ",sizeOfVar,MAX_U_INT);
	
	printf("\n\n (2)Variable of type unsigned int occupies %u bytes in memory. And can hold a maximum value of %u ",sizeOfVar,MAX_U_INT);
	
	
	y = x << 1;
	
	// x = addition solutuon
   	printf("\n\tCalculate the max with a shift operator %u ", x);
   	
   	return 0;
}
