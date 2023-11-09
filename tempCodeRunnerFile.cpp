#include <iostream>

class MyClass {
public:
    // Public members are accessible from anywhere
    int publicVar;

    MyClass() {
        publicVar = 0;
        privateVar = 0; // Error: privateVar is private
        protectedVar = 0; // Error: protectedVar is protected
    }

    void PublicMethod() {
        std::cout << "This is a public method." << std::endl;
    }

private:
    // Private members are only accessible from within the class
    int privateVar;

    void PrivateMethod() {
        std::cout << "This is a private method." << std::endl;
    }

protected:
    // Protected members are accessible within the class and derived classes
    int protectedVar;

    void ProtectedMethod() {
        std::cout << "This is a protected method." << std::endl;
    }
};

class DerivedClass : public MyClass {
public:
    void AccessProtectedMembers() {
        // We can access protected members from a derived class
        protectedVar = 42;
        ProtectedMethod();

        // publicVar is still accessible
        publicVar = 123;
    }
};

int main() {
    MyClass myObject;
    myObject.publicVar = 10; // Accessing a public member is allowed

    // Accessing private members and methods is not allowed
    // myObject.privateVar = 20; // Error: privateVar is private
    // myObject.PrivateMethod(); // Error: PrivateMethod is private

    // Accessing protected members and methods is not allowed
    // myObject.protectedVar = 30; // Error: protectedVar is protected
    // myObject.ProtectedMethod(); // Error: ProtectedMethod is protected

    DerivedClass derivedObject;
    derivedObject.AccessProtectedMembers();

    return 0;
}
