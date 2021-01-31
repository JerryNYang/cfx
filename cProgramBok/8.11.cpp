// 8.11 Demonstrate that the Array Variable is a Pointer to
// the First Element

#include <iostream>
using namespace std;

int main()
{
	
	// Static array of 5 integers
	int myNumbers[5];
	
	// array assigned to pointer to int
	int* pointToNums = myNumbers;
	

	// displaying address contained in pointer
	cout << "pointToNums = 0x" << hex << pointToNums << endl;
	
	// Address of first element of array
	cout << "&myNumbers[0] = 0x" << hex << &myNumbers[0] << endl;
	
	return 0;
}
