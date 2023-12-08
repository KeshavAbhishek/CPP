#include <iostream>
using namespace std;

class A{
    int b;

    public:
        A(){
            b = 10;
        }
        virtual void display(){
            cout << "b = " << b << endl;
        }
};

class B : public A{
    int d;

    public:
        B(){
            d = 20;
        }
        void display(){
            cout << "d = " << d << endl;
        }
};

int main(){
    A f, *p;
    B s;
    p = &f;
    p->display();
    p = &s;
    p->display();
    return 0;
}