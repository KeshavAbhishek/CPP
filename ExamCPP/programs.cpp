// Purely Virtual Function
#include <iostream>
using namespace std;

class Base {
public:
    virtual void pureVirtualFunction() = 0;
};

class Derived : public Base {
public:
    void pureVirtualFunction() override {
        cout << "READY\n";
    }
};


int main() {
    Derived derivedObject;
    derivedObject.pureVirtualFunction();

    Base* basePointer = &derivedObject;
    basePointer->pureVirtualFunction();

    return 0;
}