/*

Keshav Abhishek - 2201020582
Date - 18/09/2023

Q. Addition of two number using class and object.

*/


#include <iostream>
using namespace std;

class Sum{
    int a,b,c;
    public:
        void input();
        void process();
        void output();
};

void Sum::input(){
    cout<<"Enter the first Number : ";
    cin>>a;
    cout<<"Enter the 2nd Number : ";
    cin>>b;
}

void Sum::process(){
    c=a+b;
}

void Sum::output(){
    cout<<"\nSum = "<<c;
}

int main(){
    Sum s;
    s.input();s.process();s.output();
    return 0;
}