// 10.2 A Better class Fish Using the Protected Keyword
// to expose its member attribute only to the Derived Classes

#include <iostream>
using namespace std;

class Fish
{
	protected:
		bool isFreshWaterFish;	// accessible only to derived classes
		
	public:
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
		Tuna()
		{
			isFreshWaterFish = false;	// set protected member in base
		}
};

class Carp: public Fish
{
	public:
		Carp()
		{
			isFreshWaterFish = false;
		}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	cout << "About my food" << endl;
	
	cout << "Lunch:";
	myLunch.Swim();
	
	cout << "Dinner:";
	myDinner.Swim();
	
	return 0;
}

