#include <iostream>
using namespace std;

class Base
{
    public:
        virtual void print(){
            cout << "Base Class";
        };
};

class Derived : public Base
{
    public:
        int value;

        void print() override
        {
            cout << "Derived: " << value << endl;
        }
};

int main()
{
    Derived derived;
    derived.value = 10;

    Base base = derived; // Object slicing occurs here
    base.print();        // This will print "Base: " instead of "Derived: 10"

    return 0;
}

/*
In this program, the Derived class is a subclass of the Base class. The Derived class has an additional member variable called value. The print() method in the Derived class overrides the print() method in the Base class.

When the derived object is assigned to the base object, only the Base portion of the Derived object is copied. The Derived portion is not. This is called object slicing.

As a result, the print() method on the base object will print "Base: " instead of "Derived: 10". This is because the base object does not have the value member variable.

To avoid object slicing, you should always pass objects by reference or pointer. This will ensure that the entire object is copied, including any additional member variables that the derived class may have.
*/