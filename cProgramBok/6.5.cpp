// 6.4 Using a switch statement

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
	
	switch(dayInput)
	{
		case Sunday:
			cout << "Sunday was named after the Sun\n";
			break;
			
		case Monday:
			cout <<"Monday was named after the Moon\n";
			break;
		
		case Tuesday:
			cout << "Tuesday was named after Mars\n";
			break;
			
		case Wednesday:
			cout << "Wednesday was named after Mercury\n";
			break;
			
			
		case Thursday:
			cout <<"Thursday was named after Jupiter\n";
			break;
		
		case Friday:
			cout << "Friday was named after Venus\n";
			break;
			
		case Saturday:
			cout << "Saturday was named after Saturn\n";
			break;
			
		default:
			cout << "Wrong input, execute again\n";
			break;
		
	}
	

	return 0;
	
}
