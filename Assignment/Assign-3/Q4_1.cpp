#include <iostream>
using namespace std;

int main() {
    int* wildPointer; // This is a wild pointer - uninitialized and points to an undefined location.

    // Attempting to access or modify the value through the wild pointer will lead to undefined behavior.
    *wildPointer = 42; // This is a dangerous operation.

    cout << "Value through wild pointer: " << *wildPointer << endl; // May result in a crash or garbage value.

    return 0;
}