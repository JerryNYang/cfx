/*
	10.7
	The Order of Construction and 
	Destruction of the Base Class,
	Derived Class, and Members Thereof
*/

#include<iostream>
using namespace std;

class FishDummyMember
{
	public:
		FishDummyMember()
		{
			cout << "FishDummyMember constructor" << endl;	
		}	
		
		~FishDummyMember()
		{
			cout << "FishDummyMember destructor\n";
		}
};

class Fish
{
	protected:
		FishDummyMember dummy;
	public:
		Fish()
		{
			cout << "Fish constructor" << endl;
		}
		
		~Fish()
		{
			cout << "Fish destructor\n";
			
		}
		
		
		
	
};


class TunaDummyMember
{
	public:
		TunaDummyMember()
		{
			cout << "TunaDummyMember constructor\n";
		}
		
		~TunaDummyMember()
		{
			cout << "TunaDummyMember destructor\n";
		}
		
		
	
};


class Tuna: public Fish
{
	private:
		TunaDummyMember dummy;
		
	public:
		Tuna()
		{
			cout << "Tuna constructor\n";
		}
		
		~Tuna()
		{
			cout << "Tuna destructor\n";
		}
};

int main()
{
	Tuna myDinner;
}
