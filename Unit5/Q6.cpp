#include <iostream>

// Function template with multiple arguments
template <typename T1, typename T2>
void swapValues(T1 &a, T2 &b) {
    T1 temp = a;
    a = static_cast<T1>(b);
    b = static_cast<T2>(temp);
}

int main() {
    // Example with integers
    int x = 5, y = 10;
    std::cout << "Before swapping: x = " << x << ", y = " << y << std::endl;
    swapValues(x, y);
    std::cout << "After swapping: x = " << x << ", y = " << y << std::endl;

    // Example with doubles
    double a = 3.14, b = 6.28;
    std::cout << "Before swapping: a = " << a << ", b = " << b << std::endl;
    swapValues(a, b);
    std::cout << "After swapping: a = " << a << ", b = " << b << std::endl;

    return 0;
}