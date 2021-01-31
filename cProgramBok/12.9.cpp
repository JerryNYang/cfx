/*
	12.9 Implementing Subscript Operator[] in class
	MyString to allow random access to characters contained
	in MyString::buffer
*/

#include<iostream>
#include<string>
#include<string.h>
using namespace std;

class MyString
{
	private:
		char* buffer;
	
	// private default constructor
	MyString()
	{
		
	}
		
	public:
		// constructor
		MyString(const char* initialInput)
		{
			if(initialInput != NULL)
			{
				buffer = new char[strlen(initialInput) + 1];
				strcpy(buffer, initialInput);
				
			}
			
			else
			{
				buffer = NULL;
			}
		}
		
		MyString(const MyString& copySource)	// Copy constructor
		{
			buffer = NULL;
			cout << "Copy constructor: copying from MyString\n";
			if(copySource.buffer != NULL)
			{
				// allocate own buffer
				buffer = new char[strlen(copySource.buffer) + 1];
				
				// deep copy from the source into local buffer
				strcpy(buffer, copySource.buffer);
				cout << "buffer points to: 0x" << hex;
				cout << (unsigned int *)buffer << endl;
				
			}
		}
		
		//MyString(const MyString& copySource);
		
		// Copy assignment operator
		MyString& operator= (const MyString& copySource)
		{
			if((this != &copySource) && copySource.buffer != NULL)
			{
				if(buffer != NULL)
				{
					delete[] buffer;
					
					// ensure deep copy by first allocating own
					// buffer
					buffer = new char[strlen(copySource.buffer)+1];
					
					// copy from the source into local buffer
					strcpy(buffer, copySource.buffer);
					
				}
				
				return *this;
			}
	   }   
		//MyString& operator= (const MyString& copySource);
		
		const char& operator[] (int index)	const
		{
			if(index < GetLength())
			{
				return buffer[index];
			}
		}
		
		// Destructor
			~MyString()
			{
				if(buffer != NULL)
				{
					delete[] buffer;
					
				}
				
			}
			
			
			int GetLength() const
			{
				return strlen(buffer);
			}
		
			operator const char*()
			{
				return buffer;
			}
			
		
			
		
};


int main()
{
	cout << "Type a statement: ";
	string strInput;
	getline(cin, strInput);
	
	MyString youSaid(strInput.c_str());
	
	cout << "Using operator [] for displaying your input: \n";
	for(int index = 0; index < youSaid.GetLength(); ++index)
	{
		cout << youSaid[index] << " ";
	}
	cout << endl;
	
	cout << "Enter index 0 - " << youSaid.GetLength() - 1 << ": ";
	int index = 0;
	cin >> index;
	
	cout << "Input character at zero-based position: " << index;
	cout << " is: " << youSaid[index] << endl;
	
	return 0;
}
