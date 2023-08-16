#include <iostream>
using namespace std;

class interest{
    int p;
    int r;
    int t;

    public:
        void getData();
        void interestCalc();

};

void interest::getData(){
    cout << "Enter P : ";
    cin >> p;
    cout << "Enter R : ";
    cin >> r;
    cout << "Enter T : ";
    cin >> t;
}

void interest::interestCalc(){
    cout << "Interest = " << p*r*t/100;
}

int main(){
    interest I;
    I.getData();
    I.interestCalc();
    return 0;
}