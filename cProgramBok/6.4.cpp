// 6.4 Using a Grouped if...else Construct

#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
		
	};
	
	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day  (Sunday = 0): ";
	
	int dayInput = Sunday; 	// Initialize to Sunday
	cin >> dayInput;
	
	if(dayInput == Sunday)
	{
		cout << "Sunday was named after the Sun" << endl; 
	}
	
	else if (dayInput == Monday)
	{
		cout << "Monday was named after the Moon" << endl;
	}
	
	
	else if(dayInput == Tuesday)
	{
		cout << "Sunday was named after Mars" << endl; 
	}
	
	else if (dayInput == Wednesday)
	{
		cout << "Monday was named after Mercury" << endl;
	}
	
	
		else if(dayInput == Thursday)
	{
		cout << "Sunday was named after Jupiter" << endl; 
	}
	
	else if (dayInput == Friday)
	{
		cout << "Monday was named after Venus" << endl;
	}
	
	else if (dayInput == Saturday)
	{
		cout << "Monday was named after Saturn"<< endl;
	}
	
	else
	{
		cout << "Wrong input, execute again" << endl;
	}
	
	
	return 0;
	
}
