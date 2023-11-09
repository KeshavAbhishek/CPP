#include <iostream>
using namespace std;

int main() {
    int intValue = 42;
    double doubleValue = 3.14;
    char charValue = 'A';

    void* genericPointer;

    genericPointer = &intValue;

    int* intPointer = (int *)genericPointer;
    cout << "Value through int pointer: " << *intPointer << endl;

    genericPointer = &doubleValue;

    double* doublePointer = (double *)genericPointer;
    cout << "Value through double pointer: " << *doublePointer << endl;

    genericPointer = &charValue;

    char* charPointer = (char *)genericPointer;
    cout << "Value through char pointer: " << *charPointer << endl;

    return 0;
}