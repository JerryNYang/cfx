//8.6

// Demonstrating that pointers to Different Types Have the
// same sizes


#include <iostream>
using namespace std;

int main()
{
	
	cout << "sizeof fundamental types-" << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout <<  "sizeof(double) = " << sizeof(double) << endl;
	
	cout << "sizeof pointers to fundamental types -" << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(double*) = " << sizeof(double *) << endl;
	
	return 0;
	
}
