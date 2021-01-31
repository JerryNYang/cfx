/*
	11.4
	using virtual destructors to ensure that destructors in
	derived classes are invoke when deleting a pointer of 
	type Base*

*/

#include<iostream>
using namespace std;

class Fish
{
	public:
		Fish()
		{
			cout << "Constructed Fish\n";
		}
		
		virtual ~Fish()	// virtual destructor
		{
			cout << "Destroyed Fish\n";
		}
		
		
};


class Tuna: public Fish
{
	public:
		Tuna()
		{
			
			cout << "Constructed Tuna\n";
		}
		
		~Tuna()
		{
			
			cout << "Destroyed Tuna\n";
		}	
		
	
};


void DeleteFishMemory(Fish* pFish)
{
	delete pFish;
}


int main()
{
	cout << "Allocating a Tuna on the free store:\n";
	
	Tuna* pTuna = new Tuna;
	cout << "Deleting the Tuna: " << endl;
	DeleteFishMemory(pTuna);
	
	
	cout << "Instantiating a Tuna on the stack:\n";
	Tuna myDinner;
	cout << "Automatic destruction as it goes out of scope\n";
	
	return 0;
}
