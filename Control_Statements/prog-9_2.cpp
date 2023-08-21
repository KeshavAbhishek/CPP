#include <iostream>
using namespace std;

int main(){
    int i=7;
    int fact=i;
    do{
        fact = fact*(i-1);
        i--;
    }while(i>1);
    
    cout << "Factorial of 7 is " << fact << endl;

    return 0;
}