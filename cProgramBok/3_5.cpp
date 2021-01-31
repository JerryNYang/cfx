#include <iostream>
using namespace std;

int main()
{
	auto coinFlippedHeads = true;
	
	// long long
	auto largeNumber = 2500000000000;
	
	cout << "coinFlippedHead  = " << coinFlippedHeads;
	cout << " , sizeof(coinFlippedHeads) = " << sizeof(coinFlippedHeads)
		 << endl;
		 
    cout << "largeNumber = " << largeNumber;
    cout << " , sizeof(largeNumber) = " << sizeof(largeNumber) << endl;
    
    return 0;
}
