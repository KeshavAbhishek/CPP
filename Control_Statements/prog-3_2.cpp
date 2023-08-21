#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int y = 5;

    if (x > y) {
        cout << "x is greater than y\n";

        if (x > 0) {
            cout << "x is also positive\n";
        } else {
            cout << "x is negative\n";
        }
    } else {
        cout << "x is not greater than y\n";

        if (y > 0) {
            cout << "y is positive\n";
        } else {
            cout << "y is non-positive\n";
        }
    }

    return 0;
}