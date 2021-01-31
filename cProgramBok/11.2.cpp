// 11.2 The effect of declaring Fish::Swim() as a virtual method

#include <iostream>
using namespace std;

class Fish
{
	public:
		virtual void Swim()
		{
			cout << "Fish Swims!\n";
		}
};

class Tuna: public Fish
{
	public:
		// override Fish::Swim
		void Swim()
		{
			cout << "Tuna swim!\n";
		}
};

class Carp: public Fish
{
	public:
		// override Fish::Swim
		void Swim()
		{
			cout << "Carp swims!\n";
			
		}
};


void MakeFishSwim(Fish &inputFish)
{
	// calling virtual method Swim()
	inputFish.Swim();
}

int main()
{
	Tuna myDinner;
	Carp myLunch;
	Fish myBrunch;
	
	// sending Tuna as Fish
	MakeFishSwim(myDinner);
	
	// sending Carp as Fish
	MakeFishSwim(myLunch);
	
	MakeFishSwim(myBrunch);
	return 0;
}
