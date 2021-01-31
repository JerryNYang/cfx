//Using an Overloaded Function to Calculate the Area of a Circle or a Cylinder

//7.7

#include<iostream>
using namespace std;

const double Pi = 3.14159265;

double Area(double radius); // for circle
double Area(double radius, double height); // for cylinder


int main()
{
	cout << "Enter z for Cylinder, c for Circle:";
	char userSelection = 'z';
	cin >> userSelection; // cin creates a newline
	
	cout << "Enter radius: ";
	double radius = 0.0;
	cin >> radius; // cin creates a newline
	
	if (userSelection == 'z')
	{
		
		cout << "Enter height: ";
		double height = 0.0;
		cin >> height;
		
	
	
		// Invoke overloaded variant of Area for Cyclinder
		cout << "Area of cylinder is: " << Area(radius, height) << endl;
   }
   
	else
	{
		cout << "Area of cylinder is: " << Area(radius)<<endl;
		
	}
	return 0;
}


// for circle
double Area(double radius)
{
	return Pi * radius * radius;
}

// overloaded for cylinder
double Area(double radius, double height)
{
	// return the area of circle
	return 2 * Area(radius) + 2*Pi *radius * height;
}

