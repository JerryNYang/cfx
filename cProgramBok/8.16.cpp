/* 
	8.16 Using new(nothrow) That returns NULL when allocation fails
*/

#include <iostream>
using namespace std;

int main()
{
	// Request a LOT of memory
	// new(no throw) a other way of cathing exception
	// 	like alternate try-catch block
	int* pointsToManyNums = new(nothrow) int[0x1ffffffffffff];
	
	if(pointsToManyNums != NULL)	// check pointsToManyNums != NULL
	{
		// Use the allocated memory
		delete[] pointsToManyNums;
		
	}
	
	else
	{
		cout << "Memory allocation failed. Ending program" << endl;
	}
	
	return 0;
}
