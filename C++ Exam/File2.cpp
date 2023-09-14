// This is main.cpp
#include <iostream>

// Declare the global variable defined in helper.cpp
extern int globalVar;

int main() {
    // Access the global variable from helper.cpp
    std::cout << "The value of globalVar is: " << globalVar << std::endl;
    return 0;
}