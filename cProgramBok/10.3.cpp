// 10.3 Derived Class Constructor with Initlization Lists

/*
	Fish now has a constructor that takes a default
	parameter initializing Fish::isFreshWaterFish...
*/

#include <iostream>
using namespace std;

class Fish
{
	protected:
		bool isFreshWaterFish;	// accessibble only to derived classes
		
	public:
		// Fish Constructor
		Fish(bool isFreshWater): isFreshWaterFish(isFreshWater)
		{
		
		}		
			
		void Swim()
		{
			if(isFreshWaterFish)
			{
				cout << "Swims in lake" << endl;
				
			}	
			
			else
			{
				cout << "Swims in sea\n";
			}
			
		}
};

class Tuna: public Fish
{
	public:
		Tuna(): Fish(false)
		{
			
		}		
};

class Carp: public Fish
{
	public:
		Carp(): Fish(true)
		{
			
		}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	cout << "About my food" << endl;
	
	cout << "Lunch: ";
	myLunch.Swim();
	
	cout << "Dinner: ";
	myDinner.Swim();
	
	return 0;
}



