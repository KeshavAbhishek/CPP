#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "A";
        }
};

class B : public A{
    public:
        B(){
            cout << "B";
        }
};

class C : public B{
    public:
        C(){
            cout << "C";
        }
        ~C(){
            cout << "\nDESTRUCTOR ENVOKED.";
        }
};

int main(){
    C User;
    return 0;
}