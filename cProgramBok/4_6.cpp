// string
//4.6

#include<iostream>

// old-school strings
#include <string.h>

using namespace std;

int main()
{
	cout << "Enter a word NOT longer than 20 characters:" << endl;
	
	// add a null-terminator stills runs pass the boundary
	// of 21 chars
	char userInput[21] ={'\0'};
	cin >> userInput;
	
	cout << "Length of your input was:" << strlen(userInput)<< endl;
	

	return 0;	
}
