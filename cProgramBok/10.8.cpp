/*
	A class Car related to class Motor via private
	Inheritance.	

*/


#include<iostream>
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


class Car: private Motor	// private inheritance
{
	public:
		void Move()
		{
			SwitchIgnition();
			PumpFuel();
			FireCylinders();
		}
		
};

int main()
{
	Car myDreamCar;
	myDreamCar.Move();
	
	return 0;
}
