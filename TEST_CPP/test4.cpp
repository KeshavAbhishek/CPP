/*

Keshav Abhishek - 2201020582
Date - 18/09/2023

Q. Constructor Inside the Class

*/

#include <iostream>
using namespace std;

class Sum
{
    int a, b;

    public:
        Sum()
        {
            cout << "Enter Numbers : ";
            cin >> a;
            cin >> b;
            cout << "Additon of " << a << " and " << b << " = " << a + b;
        };
};

/*
Sum::Sum(){
    cout << "Enter Numbers : ";
    cin >> a;
    cin >> b;
    cout << "Additon of " << a << " and " << b << " = " << a+b;
}
*/

int main()
{
    Sum s;
    return 0;
}