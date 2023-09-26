/*

Keshav Abhishek - 2201020582
Date - 18/09/2023

Q. Additon of two integers numbers using paramertized constructors

*/

#include <iostream>
using namespace std;

class Sum{
    public:
        // With Default Argument Value of a & b
        Sum(int a=0, int b=0){
            cout << "Additon of " << a << " and " << b << " = " << a + b;
        }
};

int main(){
    Sum s(5,10);
    return 0;
}

/*

Function Overloading without Class and Object
Function Overloading Class and Object

Function overloading usign Constructor
Constructor OverLoading

Copy Constructor

*/