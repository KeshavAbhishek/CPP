/*

Keshav Abhishek - 2201020582
Date - 18/09/2023

Q. Constructor Inside the Class with Arguments

*/

#include <iostream>
using namespace std;

class Sum{
    public:
        Sum(int x){
            cout << "Value of x is " << x;
        }
};

int main(){
    Sum s(5);
    return 0;
}