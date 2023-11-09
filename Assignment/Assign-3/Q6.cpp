#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "Base Class A" << endl;
        }
};

class B : public A{
    public:
        A A1;
        B(){
            cout << "Derived Class B" << endl;
        }
};

int main(){
    B User;
    return 0;
}