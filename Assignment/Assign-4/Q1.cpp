/*

Function overloading is a concept in programming languages that allows a developer to define multiple functions with the same name but different parameter lists. This enables the use of the same function name to perform different tasks based on the input arguments. However, ambiguity in function overloading can arise when the compiler encounters difficulty in determining which function to call due to similarities or overlap in the parameter types.

*/

#include <iostream>
using namespace std;

void overload(float x, float y){
    cout << "Function with Float-point arguments";
}

void overload(int x, int y){
    cout << "Function with Integer arguments";
}

int main(){
    overload(2.5,5.5);
    return 0;
}