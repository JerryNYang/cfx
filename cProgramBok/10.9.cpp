/*
	10.9 class RaceCar that derives from class Car
	That derives from class Motor Using protected
	inheritance
*/

#include <iostream>
using namespace std;

class Motor
{
	public:
		void SwitchIgnition()
		{
			cout << "Ignition ON\n";
		}
		
		void PumpFuel()
		{
			cout << "Fuel in cylinders\n";
		}
		
		void FireCylinders()
		{
			cout << "Vrooom\n";
		}
	
};


class Car: protected Motor
{
	public:
		void Move()
		{
			SwitchIgnition();
			PumpFuel();
			FireCylinders();
		}
		
		
		
};


class RaceCar: protected Car
{
	public:
		void Move()
		{
			/*
				RaceCar has access to member of
				base Motor due to "protected"
				inheritance b/w RaceCar & Car & Motor
			*/
				
			SwitchIgnition();	
			PumpFuel();
			FireCylinders();
			FireCylinders();
			FireCylinders();
		
		
		}
};


int main()
{
	RaceCar myDreamCar;
	myDreamCar.Move();
	
	return 0;
}
