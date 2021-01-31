// 9.18 Using constexpr with class Human

#include <iostream>
using namespace std;

class Human
{
	int age;
	public:
		constexpr Human(int humanAge) :age(humanAge){}
		
		constexpr int GetAge() const { return age; }
		
};


int main()
{
	constexpr Human somePerson(15);
	const int hiAge = somePerson.GetAge();
	
	Human anotherPerson(45);	// not constant expression
	
	return 0;
}
