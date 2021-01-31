// 8.14 Safer Pointer Programming
// correcting 8.13


#include <iostream>
using namespace std;

int main()
{
	
	cout << "Is it sunny (y/n)?";
	char userInput = 'y';
	cin >> userInput;
	
	// declare pointer and initialize
	bool* const isSunny = new bool;
	*isSunny = true;
	
	if(userInput == 'n')
	{
		*isSunny = false;
	}
	
	// isSunny contains invalid value if user entered 'n'
	cout << "Boolean flag sunny says: " << *isSunny << endl;
	
	// delete being invoked also when new wasn't
	delete isSunny;
	
	return 0;
	
}
