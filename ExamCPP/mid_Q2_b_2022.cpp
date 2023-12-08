#include <iostream>
using namespace std;

void fibo(int x,int y, int n){
    if(n == 0){
        return;
    }
    cout << x << " ";
    fibo(y, x+y, n-1);
}

int main(){
    fibo(0,1,20);
    return 0;
}