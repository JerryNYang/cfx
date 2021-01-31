#include <iostream>
using namespace std;

class Fish
{
	public:
		virtual void Swim()
		{
			cout << "Fish swim in water\n";
		}
		
		// base class should always have virtual destructor
		virtual ~Fish()
		{
			
		}
	
	
};

class Tuna: public Fish
{
	public:
		void Swim()
		{
			cout << "Tuna swims real fast in the sea\n";
		}
		
		void BecomeDinner()
		{
			cout << "Tuna becomes dinner in Sushi\n";
		}

				
};


class Carp: public Fish
{
	public:
		void Swim()
		{
			cout << "Carp swim real slow in the lake\n";
		}
		
		void Talk()
		{
			cout << "Carp talked Carp!\n";
		}
	
};

void DetectFishType(Fish* objFish)
{
	Tuna* objTuna = dynamic_cast <Tuna*>(objFish);
	if(objTuna)		// check succes of cast
	{
		cout << "Detected Tuna, Make Tuna dinner: "<< endl;
		objTuna->BecomeDinner();
	}
	
	Carp* objCarp = dynamic_cast<Carp*>(objFish);
	if(objCarp)
	{
		cout << "Detected Carp, Making carp talk\n";
		objCarp->Talk();
	}
	cout << "Verifying type using virtual Fish::Swim: "<< endl;
	objFish->Swim();		// calling virtual function swim
}

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	DetectFishType(&myDinner);
	cout << endl;
	DetectFishType(&myLunch);
	
	return 0;
}

