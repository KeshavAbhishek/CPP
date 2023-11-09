#include <iostream>
using namespace std;


class A{
    public:
        int a1;
        A(){
            cout << "\nConstructor of Class A";
            a1=20;
        }
};

class B{
    public:
        int b1;
        A a;
        B(){
            b1=30;
            cout << "\nConstructor of Class B";
            cout << "\nDeclaring object as a class data member in another class is called as Delegation.";
        }

        void show(){
            cout << "\na1 = " << a.a1 << "\nb1 = " << b1;
        }
};
int main(){
    B b;
    b.show();
    return 0;
}