// 7.6 uses multiple return statements in 1 Function.
// the program quits by using the return statement.

#include <iostream>
using namespace std;

const double Pi = 3.14149265;

void QueryAndCalculate()
{
	cout << "Enter radius: ";
	double radius = 0.0;
	cin >> radius;
	
	cout << "Area: " << Pi * radius * radius << endl;
	
	cout << "Do you wish to calculate circumference (y/n)? ";
	char calcCircum = 'n';
	cin >> calcCircum;
	
	if(calcCircum == 'n')
	{
		// skip out of the f(x) into main()
		return;
	}
	
	cout << "Circumference: " << 2 * Pi * radius << endl;
	return;
}

int main()
{
	QueryAndCalculate();
	return 0;
}
