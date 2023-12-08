#include <iostream>
using namespace std;

int main(){
    float x,y;
    cout << "Enter x and y : ";
    cin>>x>>y;
    try{
        if(y==0){
            throw runtime_error("Zero Division Error.");
        }
        cout << x/y;
    }catch(exception &e){
        cout << e.what();
    }
    return 0;
}