/*
	12.2
		Implementing Conversion operator const char*
		for class Date

*/

#include <iostream>
#include <sstream>	// new include for ostringstream
#include <string>
using namespace std;

class Date
{
	private:
		int day, month, year;
		string dateInString;
		
	public:
		Date(int inMonth, int inDay, int inYear):
			month(inMonth), day(inDay), year(inYear)
			{
				
			}
			
			// implied conversion
	operator const char*()
	{
		ostringstream formattedDate;	// assists string
										// construction
										
		formattedDate << month << " / " << day << " / " 
					 << year;
		
		dateInString = formattedDate.str();
		return dateInString.c_str();
	}
};

int main()
{
	Date Holiday(12,25,2016);
	cout << "Holiday is on: " << Holiday << endl;
	
	return 0;
}
