#include <iostream>
using namespace std;

float R;

float fun()
{
    float r = 7, a;
    R = r;

    a = 3.14 * r * r;

    return a;
}

int main()
{
    float result = fun();
    cout << "Area : " << result;
    cout << "\nPerimeter : " << result * (2 / R) << endl;

    return 0;
}