#include <iostream>
using namespace std;

void nestedFunction(int value) {
    if (value < 0) {
        throw runtime_error("Negative value encountered in nested function.");
    }
    cout << "Nested function executed successfully with value: " << value << endl;
}

int main() {
    try {
        nestedFunction(42);

        nestedFunction(-5);

        cout << "This line will not be printed if an exception occurs." << endl;
    } catch (const exception& e) {
        cout << "Exception caught: " << e.what() << endl;
    }

    return 0;
}