#include <iostream>
using namespace std;

class Complex{
    public:
        int real;
        int img;
        Complex(){};
        Complex(int a, int b){
            real = a;
            img = b;
            cout << a << "i" << " + " << b << "j" << endl;
        }
        Complex operator+(Complex c){
            Complex ret;
            ret.real = real + c.real;
            ret.img = img + c.img;
            return ret;
        }

        Complex operator-(Complex c){
            Complex ret;
            ret.real = real - c.real;
            ret.img = img - c.img;
            return ret;
        }

        void show(){
            cout << real << "i" << " + " << img << "j" << endl;
        }
};

int main(){
    Complex cAdd, cSub;
    
    Complex c1(5,6), c2(1,5);
    cAdd = c1+c2;
    cout << "-------" << endl;
    cAdd.show();
    
    cout << endl;
    
    Complex c3(5,6), c4(1,5);
    cSub = c3-c4;
    cout << "-------" << endl;
    cSub.show();

    return 0;
}