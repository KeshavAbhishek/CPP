#include <iostream>
using namespace std;

int main(){
    int temp;
    cout << "Enter body temp in degree celcius : ";
    cin >> temp;
    if(temp>37){
        cout << "May have fever.";
    }
    return 0;
}