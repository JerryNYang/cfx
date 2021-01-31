/*
	10.6 Tuna::Swim() Hides Overloaded Method
	Fish::Swim(bool)
*/

#include <iostream>
using namespace std;

class Fish
{
	public:
		void Swim()
		{
			cout << "Fish swims...!\n";
		}
		
		void Swim(bool isFreshWaterFish)	// overloaded version
		{
			if(isFreshWaterFish)
			{
				cout << "Swims in lake\n";
				
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
		void Swim()
		{
			cout << "Tuna swims real fast\n";
		}
};

int main()
{
	Tuna myDinner;
	cout << "About my food\n";
	myDinner.Swim();
	
	return 0;
}
