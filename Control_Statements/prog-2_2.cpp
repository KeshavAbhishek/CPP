#include <iostream>
using namespace std;

int main(){
    int temp;
    cout << "Enter body temp in degree celcius : ";
    cin >> temp;
    if(temp>37){
        cout << "May have fever.";
    }
    else{
        if(temp==37){
            cout << "Normal Body Temp.";
        }
        else{
            cout << "Body temp is less than normal.";
        };
    };
    return 0;
}