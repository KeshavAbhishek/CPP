// #include <iostream>
// using namespace std;

// class FunctionCaller {
// public:
//     // Define a member function pointer type
//     typedef void (FunctionCaller::*FunctionPtr)();

//     // Constructor to initialize the function pointer
//     FunctionCaller(FunctionPtr ptr) : funcPtr(ptr) {}

//     // Function to call another function using the function pointer
//     void CallFunction() {
//         (this->*funcPtr)(); // Call the function through the pointer
//     }

//     // Function to be called by address
//     void FunctionToBeCalled() {
//         cout << "Function called by address!" << endl;
//     }

// private:
//     FunctionPtr funcPtr;
// };

// int main() {
//     FunctionCaller caller(&FunctionCaller::FunctionToBeCalled); // Pass the function pointer to the constructor

//     // Call the function using the class instance
//     caller.CallFunction();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class num
// {
//     int n;
//     static int a;

// public:
//     void x(){
//         n=0;
//     }
//     void y(){
//         a++;n++;
//         cout << "Static a : " << a << endl;
//         cout << "Non-Static n = " << n << endl;
//     }
// };
// int num::a = 0;

// int main()
// {
//     num n1, n2, n3;
//     n1.x(); n2.x(); n3.x();
//     n1.y();n2.y();n3.y();

//     return 0;
// }


#include <iostream>
using namespace std;

int main(){
    int x=20;
    int &y=x;

    cout << y;
    x=55;
    cout << y;
    return 0;
}