/*
	11.6 class Fish as an Abstract Base Class for
	Tuna and Carp
*/

#include <iostream>
using namespace std;

class Fish
{
	public:
		// define a pure virtual function Swim
		virtual void Swim() = 0;	
};


class Tuna: public Fish
{
	public:
		void Swim()
		{
			cout << "Tuna swims fast in the sea!\n";
			
		}
};

class Carp: public Fish
{
	void Swim()
	{
		
		cout << "Carp swims slow in the lake!\n";
	}	
};

void MakeFishSwim(Fish& inputFish)
{
		inputFish.Swim();
		
}


int main()
{
	// Fish myFish;		// FAILs. cannot instantiate an ABC
	
	Carp myLunch;
	Tuna myDinner;
	
	MakeFishSwim(myLunch);
	MakeFishSwim(myDinner);
	
	return 0;
}
