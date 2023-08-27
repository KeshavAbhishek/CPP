#include <iostream>
using namespace std;

// Define a simple function
void myFunction() {
    cout << "Hello from myFunction!" << endl;
}

int main() {
    // Get the address of the function
    void (*functionPointer)() = myFunction;

    // Call the function using the obtained address
    (*functionPointer)();

    return 0;
}
