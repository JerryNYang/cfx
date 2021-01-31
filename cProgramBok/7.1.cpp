// 7.1

// two functions that compute the are and
// circumference of a Circle given radius

#include <iostream>
using namespace std;

const double Pi = 3.14159265;

// Function Declarations (Prototypes)
double Area(double radius);
double Circumference(double radius);

int main()
{
	
	cout << "Enter radius: ";
	double radius = 0;
	cin >> radius;
	
	// Call function "Area"
	cout << "Area is: " << Area(radius) << endl;
	cout << "Circumference is: " << Circumference(radius) << endl;

	return 0;
}


// Function definitions (implementations)
double Area(double radius)
{
	return Pi * radius * radius;

}

double Circumference(double radius)
{
	return 2 * Pi * radius;
}
