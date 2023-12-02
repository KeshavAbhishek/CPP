#include <iostream>
using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Constructor called." << endl;
        throw runtime_error("Exception in constructor");
    }

    ~MyClass() {
        cout << "Destructor called." << endl;
    }
};

int main() {
    try {
        MyClass obj;
    } catch (const exception& e) {
        cerr << "Exception caught: " << e.what() << endl;
    }
    cout << "Main function finished." << endl;
    return 0;
}