// 3_9
// Enumeration

#include <iostream>
using namespace std;

enum CardinalDirections
{
	North ,
	South = 45,
	East,
	West
	
};


int main()
{
		cout << "Displaying directions and their symbolic values" << endl;
		cout << "North: " << North << endl;
		cout << "South: " << South << endl;
		cout << "East: " << East << endl;
		cout << "West: " << West << endl;
		
		CardinalDirections windDirection = South;
		cout << "Variable windDirection = " << windDirection << endl;
		
		return 0;
		
}
