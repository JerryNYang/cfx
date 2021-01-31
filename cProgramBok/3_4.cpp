#include <iostream>
using namespace std;

int main()
{
	
	cout << "Computing the size of some C++ inbuilt variable types"<< endl;
	
	cout << "Size of bool: " << sizeof(bool) << endl;
	cout << "Size of char: " << sizeof(char) << endl;
	cout << "Size of unsigned short int: " << sizeof(unsigned short) << endl;
	cout << "Size of short int: " << sizeof(short) << endl;
	cout << "Size of unsigned long int: " << sizeof(unsigned long) << endl;
	cout << "Size of long: " << sizeof(long) << endl;
	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of unsigned long long: " << sizeof(unsigned long long)
		 << endl;
		 
    cout << "Size of long long: " << sizeof(long long) << endl;
    cout << "Size of unsigned int: " << sizeof(unsigned int) << endl;
    cout << "Size of float: " << sizeof(float) << endl;
    cout << "Size of double: " << sizeof(double) << endl;
    
    cout << "The output changes with compiler, hardware and OS" << endl;
    
    float someFloat{50000000};
    auto s  = 344;
    
    cout <<s << " " << someFloat <<"\n\n";
    
    
    if (__cplusplus == 201703L)
      std::cout << "C++17" << endl;
   else if (__cplusplus == 201402L)
      std::cout << "C++14" << endl;
   else if (__cplusplus == 201103L)
      std::cout << "C++11" << endl;
   else if (__cplusplus == 199711L)
      std::cout << "C++98" << endl;
   else if (__cplusplus >= 202002L)
   	  std::cout<< "C++20\n\n";
   else
      std::cout << "pre-standard C++" << endl;
    return 0;
    
    
	
}
