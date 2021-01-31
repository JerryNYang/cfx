//9.6 Default Constructor That Accepts Parameters with
/*
	Default Values to Set Members Using Initialization Lists
*/

#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		int age;
		string name;
	
	public:
		Human(string humanName = "Adam", int humanAge = 25)
		:name(humanName), age(humanAge)
		{
			cout << "Constructed a human called " << name;
			cout<<"," << age << " years old\n"; 
		}
};

int main()
{
	Human adam;
	Human eve("Eve", 18);
	
	return 0;
}
