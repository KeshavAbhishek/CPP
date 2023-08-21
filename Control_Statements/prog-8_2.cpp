// Factorial of 7 using while loop.

#include <iostream>
using namespace std;

int main(){
    int i=7;
    int fact=i;
    while (i>1)
    {
        fact = fact * (i-1);
        i--;
    }
    cout << "Factorial of 7 is = " << fact;
    
    return 0;
}