#include <iostream>
using namespace std;

int main()
{
    int numDays;
    cout << "Enter number of Days : ";
    cin >> numDays;
    cout << "Years : " << numDays/365 << endl;
    numDays = numDays - (numDays/365 * 365);
    cout << "Weeks : " << numDays/7 << endl;
    numDays = numDays - (numDays/7 * 7);
    cout << "Days : " << numDays << endl;
    return 0;
}