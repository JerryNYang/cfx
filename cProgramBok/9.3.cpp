// 9.3
// Using Constructors to Initialize Class Member Variables

#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		string name;
		int age;

	public:
		Human()		// Constructor
		{
			age = 1; // initialization
			cout << "Constructed an instance of class Human\n";
		
		}
		
		void SetName (string humanName)
		{
			name = humanName;
		}
		
		void SetAge (int humanAge)
		{
			age = humanAge;
		}
		
		void IntroduceSelf()
		{
			cout << "I am " + name << " and i am ";
			cout << age << " years old\n";
			
		}
				
};


int main()
{
	Human firstWoman;
	firstWoman.SetName("Eve");
	firstWoman.SetAge(28);
	
	firstWoman.IntroduceSelf();
}
