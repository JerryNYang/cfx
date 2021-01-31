/*
	class MyString with Move Constructor and Move Assignment
	Operator in Addition to Copy Constructor and Copy Assignment Operator'
	
*/

#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
	private:
		char* buffer;
	
		MyString(): buffer(NULL)	// private default constructor
		{
			cout << "Default constructor called\n";
		}
	
	
	public:
		MyString(const char* initialInput)	// constructor
		{
			cout << "Constructor called for:" << initialInput << endl;
			
			if(initialInput != NULL)
			{
				buffer = new char[strlen(initialInput) + 1];
				strcpy(bufer, initialInput);
				
			}
			
			else
			{
				buffer = NULL;	
			}
			
		}
		
		
		MyString(MyString&& moveSrc)	// move constructor
		{
			cout << "Move constructor moves: " << moveSrc.buffer << endl;
			if(moveSrc.buffer != NULL)
			{
					buffer = moveSrc.buffer;	// take ownership i.e. 'move'
					moveSrc.buffer = NULL;	// free move source	
			}
		
		
		
		}
			
		
};
