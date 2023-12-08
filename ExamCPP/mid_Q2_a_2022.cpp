#include <iostream>
using namespace std;

int main()
{
    int numDays;
    int y = 0, w = 0, d = 0, temp;
    cout << "Enter number of Days : ";
    cin >> numDays;
    y = numDays / 365;
    if (y != 0)
    {
        numDays = numDays - (y * 365);
    }
    w = numDays / 7;
    if (w != 0)
    {
        numDays = numDays - (w * 7);
    }
    d = numDays;
    cout << "Years : " << y << endl;
    cout << "Weeks : " << w << endl;
    cout << "Days : " << d << endl;
    return 0;
}

/*

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

*/