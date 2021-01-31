// reverse of array of ints

#include<iostream>
using namespace std;

int main()
{
	int array[] = {2,3,4};
	
	const int arrSize = sizeof(array)/sizeof(array[0]);
	

	for(int i = arrSize-1; i >= 0; i--)
	{
		cout << array[i];
	}
	cout << endl;

	// Reverse a 2D array
	const int ARRAY1_LEN = 3;
	const int ARRAY2_LEN = 2;
	
	int myNums1[ARRAY1_LEN] = {35,-3,0};
	int myNums2[ARRAY2_LEN] = {20,-1};
	
	cout << "Multiplying each int in myNums1 by each in myNums2:\n";
	
	for(int index1= ARRAY1_LEN-1; index1 >= 0; --index1)
	{
		for(int index2= ARRAY2_LEN-1; index2 >= 0; --index2)
		{
			cout << myNums1[index1] << " + " << myNums2[index2]
				<< " = " << myNums1[index1] + myNums2[index2] <<endl;
		}
	}
	
	// Define enum
	enum Color
	{
		RED = 25,
		GREEN,
		BLUE
		
	};
	
	// initialize color
	//Color myColor = Color.RED;
	
	cout << "What is your color: ";
	int myColor = 0;
	cin >> myColor;
	
	switch(myColor)
	{
		case RED:
			cout << "Red " <<myColor;
			cout << endl;
			break;
			
		default:
			cout <<"No rainbow";
			cout << endl;
			break;
			
	}
	
	return 0;
}
