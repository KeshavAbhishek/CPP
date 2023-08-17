#include <iostream>
#include <math.h>
using namespace std;

class quad{
    int a,b,c;
    float x;

    public:
        void input();
        void output();
};

void quad::input(){
    cout << "Enter coff. of x^2 = ";
    cin >> a;
    cout << "Enter coff. of x = ";
    cin >> b;
    cout << "Enter constant = ";
    cin >> c;

}

void quad::output(){
    x = pow(pow(b,2)-4*a*c,0.5);

    cout << "Alpha " << (-1*b+x)/(2*a);
    cout << "\nBeta " << (-1*b-x)/(2*a);
}

int main(){
    quad Q;
    Q.input();
    Q.output();
    return 0;
}