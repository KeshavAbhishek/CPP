#include <iostream>
using namespace std;

inline int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * fact(n-1);
    }
}

int main(){
    cout << "Fact of 7 is = " << fact(7) << endl;
    return 0;
}