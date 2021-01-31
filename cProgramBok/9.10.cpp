
//9.10 Singelton class President that prohibits
// Copying, Assignment, and Multiple Instance Creation

#include <iostream>
#include <string>
using namespace std;

class President
{
		private:
			President() {};	// private default constructor
			President(const President&);	// private copy constructor
			const President& operator = (const President&); // assignment operator
			
			string name;
			
		public:
			static President& GetInstance()
			{
				// static object are constructed only once
				static President onlyInstance;
				return onlyInstance;
			}
			
			string GetName()
			{
				return name;
			}
			
			void SetName(string inputName)
			{
				name = inputName;
			}
};

int main()
{
	President& onlyPresident = President::GetInstance();
	onlyPresident.SetName("Abraham Lincoln");
	
	cout << "The name of the President is: ";
	cout << President::GetInstance().GetName() << endl;
	return 0;
}


