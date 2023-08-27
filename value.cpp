#include <iostream>
using namespace std;

// Function definition
int addNumbers(int a, int b) {
    return a + b;
}

int main() {
    int num1 = 5;
    int num2 = 7;

    // Calling the function by value and printing the result
    int result = addNumbers(num1, num2);
    cout << "Result: " << result << endl;

    return 0;
}
