// 8.18 Function that calculates square returned in a parameter
// by reference

#include <iostream>
using namespace std;

void GetSquare(int& number)
{
	number*=number;
	
}

int main()
{
	cout << "Enter a number you wisj to square: ";
	int number = 0;
	cin >> number;
	
	GetSquare(number);
	cout << "Square is: " << number << endl;
	
	return 0;
}
