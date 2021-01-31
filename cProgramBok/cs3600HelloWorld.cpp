#include <iostream> 
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector <string> msg {"Hello", "C++", "World", "from", "vs code",
			"and the C++ extension!"};
			
			
	for(const string& word : msg)
	{
		cout << word << " ";
	}
	return 0;
}
