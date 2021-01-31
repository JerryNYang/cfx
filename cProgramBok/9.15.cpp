/*
	9.15
	 Using  the friend keyword to allow an external class
	 utility access to private data members
*/

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
		friend class Utility;
		string name;
		int age;
	
	public:
		Human(string humanName, int humanAge)
		{
			name = humanName;
			age = humanAge;
			
		}
};

class Utility
{
	public:
		static void DisplayAge(const Human& person)
		{
			cout << person.age << endl;
		}

		
};
int main()
{
	Human firstMan("Adam", 25);
	cout << "Accessing private member age via friend class:";
	Utility::DisplayAge(firstMan);
	
	return 0;
	
}
