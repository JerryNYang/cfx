//9.11
// A Database class MonsterDB that allows object
// creation only on the free store (using new)


#include <iostream>
using namespace std;

class MonsterDB
{
	private:
		~MonsterDB()
		{
			
		};		// private destructor prevents instances on stack
		
	public:
		static void DestroyInstance(MonsterDB* pInstance)
		{
		
			delete pInstance;	// member can invoke private destructor	
		}	
		
		void DoSomething()
		{
				// simply empty member method
		}
		
};

int main()
{
	MonsterDB* myDB = new MonsterDB();	// on heap
	myDB->DoSomething();
	
	// use static member to release memory
	MonsterDB::DestroyInstance(myDB);
	
	return 0;
}
