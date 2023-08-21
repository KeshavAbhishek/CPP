#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age : ";
    cin >> age;
    if(age>=18){
        cout << "Eligible for voting.";
    }
    else{
        cout << "Not eligible.\nWait for " << 18-age << "years.";
    };
    return 0;
}