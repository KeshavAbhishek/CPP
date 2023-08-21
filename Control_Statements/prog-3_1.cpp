#include <iostream>
using namespace std;

int main(){
    int x;
    cout << "Enter value of x : ";
    cin >> x;

    if(x%5==0){
        if(x%2==0){
            cout << x << " is divisible by 10.";
        }
    }
    else{
        cout << x << " is not divisible by 5.";
    };
    return 0;
}