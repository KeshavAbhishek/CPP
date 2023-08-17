#include <iostream>
#include <math.h>
using namespace std;

class circle{
    int r;
    float area;

    public:
        void input();
        void process();
        void output();
};

void circle::input(){
    cout << "Enter value of r = ";
    cin >> r;
}

void circle::process(){
    area = r*r*M_PI;
}

void circle::output(){
    cout << "Area of circle is = " << area;
}

int main(){
    circle area;
    area.input();
    area.process();
    area.output();
    return 0;
}