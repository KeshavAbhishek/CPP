#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "A";
        }
};

class B{
    public:
        B(){
            cout << "B";
        }
};

class C{
    public:
        C(){
            cout << "C";
        }
};

class D : public A,B,C{
    public:
        D(){
            cout << "D";
        }
};

int main(){
    D User;
    return 0;
}