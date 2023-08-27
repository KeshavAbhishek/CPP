#include <iostream>
using namespace std;

// Function declaration
void modifyValue(int &num) {
    num *= 2; // Double the value
}

int main() {
    int value = 5;

    cout << "Original value: " << value << endl;

    // Call the function by reference
    modifyValue(value);

    cout << "Modified value: " << value << endl;

    return 0;
}
