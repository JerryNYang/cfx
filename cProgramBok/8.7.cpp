//8.7
// demos memory dynamic allocation and deallocation.
// Accessing Memory Allocated Using new via Operator(*)
// and Releasing It Using delete

#include <iostream>
using namespace std;

int main()
{
	// Request for memory space for an int
	int* pointsToAnAge = new int;
	
	// Use the allocated memory to store a number
	cout << "Enter your dog's age: ";
	cin >> *pointsToAnAge;
	
	// use indirection operator* to access value
	cout << "Age " << *pointsToAnAge << " is stored at 0x"
		 << hex << pointsToAnAge << endl;
	
	delete pointsToAnAge;	// release memory
	
	return 0;
}
