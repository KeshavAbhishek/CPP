#include <iostream>
using namespace std;

class Base{
    public:
        virtual void display(){
            cout << "This is the base Class" << endl;
        }
};

class Derived : public Base{
    public:
        void display() override{
            cout << "This is the derived class" << endl;
        }
};

int main(){
    Base * basePtr;
    Derived derived;
    basePtr = &derived;
    basePtr->display();
    return 0;
}