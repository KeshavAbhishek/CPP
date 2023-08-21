#include <iostream>
using namespace std;

int main(){
    int age;
    cout << "Enter age : ";
    cin >> age;
    if(age>=18){
        cout << "Eligible for voting.";
    }
    return 0;
}