// 8.12

// Accessing  Elements in an array using the 
// Dereference Operator(*) and using the array operator([])
// with a Pointer

#include<iostream>
using namespace std;

int main()
{
	
	const int ARRAY_LEN = 5;
	
	// static array of 5 integers, initialized
	int myNumbers[ARRAY_LEN] = {24,-1,365,-999, 2011};
	
	// Pointer initialized to first element in array
	int* pointToNums = myNumbers;
	
	cout << "Display array using pointer syntax operator\n";
	for(int index = 0; index < ARRAY_LEN; ++index)
	{
		cout << "Element " << index << " = " << *(myNumbers + index) << endl;
	}
	
	cout << "Display array using ptr with array syntax operator[]\n";
	for(int index = 0; index < ARRAY_LEN; ++index)
	{
		cout << "Element " << index << " = " << pointToNums[index] << endl;
		
	}
	
	return 0;
	
	
}
