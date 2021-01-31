//8.2
// Demonstrating the Declaration and Initialization of a
// Pointer

#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* pointsToInt = &age; 	// pointer initialized to &age
	
	// displaying the value of pointer
	// hex << pointToInt .... creates hexadecimal 
	cout << "Integer age is at: 0x"<< hex << pointsToInt << endl;
	
	return 0;
}
