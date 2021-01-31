// 9.4 A Class Human with Multiple Constructors

#include <iostream>
#include <string>

using namespace std;

class Human
{
	private:
		string name;
		int age;
		
	public:
		Human()	// default constructor
		{
			age = 0;	// initialized to ensure no junk value
			cout << "Default constrcutor: name and age not set\n";
		
		}
		
		Human(string humanName, int humanAge)	// overloaded
		{
			name = humanName;
			age = humanAge;
			cout << "Overloaded constructor creates ";
			cout << name << " of " << age << " years" << endl;
		}
};


int main()
{
	Human firstMan;	// use default constructor
	Human firstWoman("Eve", 20);	// use overloaded constructor
}
