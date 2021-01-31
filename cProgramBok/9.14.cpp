/*
	9.14
	Using the friend keyword to allow an external function
	DisplayAge() access to Private Data Members
*/

#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		friend void DisplayAge(const Human& person);
		string name;
		int age;
	
	public:
		Human(string humanName, int humanAge)
		{
			name = humanName;
			age = humanAge;
			
		}
};

void DisplayAge(const Human& person)
{
	cout << person.age << endl;
}

int main()
{
	Human firstMan("Adam", 25);
	cout << "Accessing private member age via friend function:";
	DisplayAge(firstMan);
	
	return 0;
	
}
