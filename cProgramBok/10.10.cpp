/*
	10.10 Using Multiple Inheritance to Model a Platypus
	That is Part Mammal, part bird, and part reptile
*/

#include <iostream>
using namespace std;

class Mammal
{
	public:
		void FeedBabyMilk()
		{
			cout << "Mammal: Baby says glug!\n";
		}
};


class Reptile
{
	public:
		void SpitVenom()
		{
			
			cout << "Reptile: Shoo enemy! Spits venom!\n";
		}	
};

class Bird
{
	public:
		void LayEggs()
		{
			cout << "Bird: Laid my eggs, am lighter now!\n";
			
		}
};


class Platypus: public Mammal, public Bird, public Reptile
{
	public:
		void Swim()
		{
			cout << "Platypus: Voila, I can swim!\n";
		}
	

};

int main()
{
	Platypus realFreak;
	realFreak.LayEggs();
	realFreak.FeedBabyMilk();
	realFreak.SpitVenom();
	realFreak.Swim();
	
	return 0;
}
