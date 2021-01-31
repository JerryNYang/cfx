/*
	Checking for Number of Base Class Animal instances for
	One Instance of Platypus
*/

#include <iostream>
using namespace std;

class Animal
{
	public:
		Animal()
		{
			cout << "Animal constructor\n";
		}
		
		// sample member
		int age;
		
};


class Mammal: public Animal
{
	
};

class Bird: public Animal
{
	
};


class Reptile: public Animal
{
	
};


class Platypus: public Mammal, public Bird, public Reptile
{
	public:
		Platypus()
		{
			
			cout << "Platypus constructor\n";
		}	
};



int main()
{
	Platypus duckBilledP;
	return 0;
}



