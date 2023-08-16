#include <iostream>
using namespace std;

int awr(int a, int b){ //Argument and return
    return a+b;
}

int war(){ // Without argument and return
    int a,b;

    cout << "\nWithout argument with return";
    cout << "\nEnter value of a = ";
    cin >> a;

    cout << "Enter value of b = ";
    cin >> b;

    return a+b;
}

void awnr(int a, int b){ // Argument without return value
    cout << "\n\nArgument without return";
    cout << "\nSum = " << a+b;
}

void wanr(){ // Without argument without return
    int a,b;

    cout << "\n\nWithout argument without return";
    cout << "\nEnter value of a = ";
    cin >> a;

    cout << "Enter value of b = ";
    cin >> b;

    cout << "Sum = " << a+b;
}


// Main function
int main() {
    // Argument with return
    cout << "Argument with return value\nSum = " << awr(15,20) << "\n";

    // No argument with return
    int result = war();
    cout << "Sum = " << result;

    // Argument with no return
    awnr(15,20);

    // No argument No Return
    wanr();
    return 0;
}