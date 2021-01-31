// 7.5
// using recursive functions to calculate a
// number in the Fibonacci Series

/*
	F(2) = 1
	F(3) = 2
	F(4) = 3
	F(5) = 5
	F(6) = 8

*/

#include <iostream>
using namespace std;

int GetFibNumber(int fibIndex)
{
	if (fibIndex < 2)
	{
		return fibIndex;
	}
	
	else  // recursion if fibIndex >= 2 
	{
		
		return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
				
	}
	
}


int main()
{
	cout << "Enter 0-based index of desired Fibonacci Number:";
	int index = 0;
	cin >> index;
	
	cout << "Fibonacci number is:"<< GetFibNumber(index) << endl;
	return 0;	
}
