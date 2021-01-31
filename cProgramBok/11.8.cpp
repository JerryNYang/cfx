/*
	Demo how virtual keyword inheritance hierarchy
	helps restrict the number of instance of base 
	class Animal to One

		-- virtual
		-- final
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


class Mammal: public virtual Animal
{
	
};

class Bird: public virtual Animal
{
	
};


class Reptile: public virtual Animal
{
	
};


class Platypus final: public Mammal, public Bird, public Reptile
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
	
	
	// no compile error as there is only one Animal::age
	duckBilledP.age = 25;
	
	return 0;
}



