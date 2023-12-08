#include <iostream>
using namespace std;

int main(){
    int x,y;
    cout << "\nEnter x and y : ";
    cin >> x >> y;
    int j = 0;
    j = x>y?0:1;
    try{
        if(j==0){
            cout << "x - y = " << x-y << endl;
        }
        else{
            throw(j);
        }
    }catch(int k){
        cout << "\nException caught : " << j;
    }
    return 0;
}