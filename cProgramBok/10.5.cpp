// 10.5 
/*
	Using Scope Resolution Operator(::) to invoke Base 
	Class Functions from Derived Class and main()
*/

#include <iostream>
using namespace std;

class Fish
{
	private:
		bool isFreshWaterFish;
		
	public:
		// Fish Constructor
		Fish(bool isFreshWater): isFreshWaterFish(isFreshWaterFish)
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
		void Swim()
		{
			cout << "Tuna swims real fast\n";	
		}
};

class Carp: public Fish
{
	public:
		Carp(): Fish(true)
		{
			
		}	
		void Swim()
		{
			cout << "Carp swim real slow\n";	
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
	myDinner.Fish::Swim();
	
	return 0;
}
