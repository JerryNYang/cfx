// 5.6

#include <iostream>
using namespace std;

int main()
{
	cout << "Answer questions with 0 or 1" << endl;
	cout << "Is there a discount on your favorite car? ";
	bool onDiscount = false;
	cin >> onDiscount;
	
	cout << "Did you get a fantastic bonus? " ;
	bool fantasticBonus = false;
	cin >> fantasticBonus;
	
	if (onDiscount || fantasticBonus)
	{
		
		cout << "Congratulations, you can buy this car!\n";
		
	}
	
	else
	{
		cout << "Sorry, waiting a while is a good idea\n";
		
	}
	
	if(!onDiscount)
	{
		cout << "Car not on discount"<<endl;
		
	}

	return 0;
}


