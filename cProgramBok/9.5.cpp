// 9.5
/*
	A Class with Overloaded Constructor(s) and No Default
	Constructor

*/
#include <iostream>
#include <string>

using namespace std;

class Human
{
	private:
		string name;
		int age;
	
	public:
		Human(string humanName, int humanAge)	// default constructor
		{
			name = humanName;
			age = humanAge;
			cout << "Overloaded constructor creates " << name;
			cout << " of age " << age << endl;
		}
		
		void IntroduceSelf()
		{
			cout << "I am " + name << " and am";
			cout << age << " years old\n";
		}
	
		
};

int main()
{
	
	Human firstMan("Adam", 25);
	Human firstWoman("Eve", 28);
	
	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();
}
