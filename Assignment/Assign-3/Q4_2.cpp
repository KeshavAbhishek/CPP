#include <iostream>
using namespace std;

int main() {
    int* validPointer = nullptr;

    if (validPointer != nullptr) {
        *validPointer = 42;
        cout << "Value through valid pointer: " << *validPointer << endl;
    } else {
        cout << "Pointer is null. Cannot access or modify the value." << endl;
    }

    return 0;
}