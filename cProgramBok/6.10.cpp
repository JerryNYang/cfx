//6.10 for-loop

#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int myNum[ARRAY_LENGTH] = {0};
	
	cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;
	
	for(int counter = 0; counter < ARRAY_LENGTH; ++counter)
	{
		cout << "Enter an integer for element " << counter << ": ";
		cin >> myNum[counter];
	}
	
	cout << "Displaying contents of the array: " << endl;
	for(int counter = 0; counter < ARRAY_LENGTH; ++counter)
	{
		cout << "Element " << counter << " = " << myNum[counter] << endl;
		
	}
	
	
	return 0;
	
}
