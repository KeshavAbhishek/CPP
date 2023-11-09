#include <iostream>
using namespace std;

class Complex {
    public:
        int real;
        int img;

        Complex(int real, int img) {
            this->real = real;
            this->img = img;
        }

        Complex operator+(const Complex& other) {
            return Complex(this->real + other.real, this->img + other.img);
        }
};

int main(){
    cout << endl;
    Complex a(1.0, 2.0);
    Complex b(3.0, 4.0);
    Complex c = a + b;

    cout << a.real << " + " << a.img << "i" << endl;
    cout << b.real << " + " << b.img << "i" << endl;
    cout << "------" << endl;
    cout << c.real << " + " << c.img << "i" << endl;
    
    return 0;
}