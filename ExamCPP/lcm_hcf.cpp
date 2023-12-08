#include <iostream>
using namespace std;

int hcf(int a, int b)
{
    int temp;
    while (b)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a=24,b=4;
    cout << "HCF = " << hcf(a, b);
    cout << "\n";
    cout << "LCM = " << a*b/hcf(a, b);
    return 0;
}