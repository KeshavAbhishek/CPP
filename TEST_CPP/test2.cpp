/*

Keshav Abhishek - 2201020582
Date - 18/09/2023

Q. Addition of two number using 1 member function

*/

#include <iostream>
using namespace std;

class Sum{
    int a, b;
    public:
        void result();
};

void Sum::result(){
    cout << "Enter Numbers : ";
    cin >> a;
    cin >> b;
    cout << "Additon of " << a << " and " << b << " = " << a+b;
}

int main(){
    Sum s;
    s.result();
    return 0;
}