/*

Keshav Abhishek - 2201020582
Date - 18/09/2023

Q. Constructor Outside the Class

*/

#include <iostream>
using namespace std;

class Sum
{
    int a, b;

    public:
        Sum();
};

Sum::Sum(){
    cout << "Enter Numbers : ";
    cin >> a;
    cin >> b;
    cout << "Additon of " << a << " and " << b << " = " << a+b;
}

int main()
{
    Sum s;
    return 0;
}