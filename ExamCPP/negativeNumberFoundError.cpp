#include <iostream>
using namespace std;

int main() {
    const int size = 10;
    int numbers[size];

    cout << "Enter 10 numbers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    for (int i = 0; i < size; ++i) {
        if (numbers[i] < 0) {
            throw runtime_error("Negative number found in the array.");
        }
    }

    cout << "All numbers are non-negative." << endl;

    return 0;
}