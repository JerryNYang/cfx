/*
 *  Use Lambda functions to display elements in an Array
 *  and to Sort Them
 */

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void DisplayNums(vector<int>& dynArray)
{
    for_each(dynArray.begin(), dynArray.end(), [](int Element)
    {
        cout << Element << " ";
    });

    cout << endl;
}

int main()
{
    vector<int> myNums;
    myNums.push_back(501);
    myNums.push_back(-1);
    myNums.push_back(25);
    myNums.push_back(-35);

    DisplayNums(myNums);
    cout << "Sorting them in descending order\n";

    sort(myNums.begin(), myNums.end(), [](int Num1, int Num2)
    {
        return (Num1 < Num2);
    });

    DisplayNums(myNums);
    return 0;
}


