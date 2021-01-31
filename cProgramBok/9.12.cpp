/*
	9.12 Use Keyword explicit to Block Unintentional
	Implicit Conversion

*/
#include <iostream>
using namespace std;

class Human
{
	int age;
	public:
		// explicit constructor blocks implicit conversion
		explicit Human(int humanAge) : age(humanAge){}
	
};

void DoSomething(Human person)
{
	cout << "Human sent did something" << endl;
	return;
}

int main()
{
	Human kid(10);	// explicit conversion is ok
	Human anotherkid = Human(11); // explicit, OK
	DoSomething(kid);	// ok
	
	return 0;
}
