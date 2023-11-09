#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "Default Constructor Invoked" << endl;
        }
};

class B{
    public:
        B(int x=0){
            cout << "Value of argument x = " << x << endl;
        }
};

int main(){
    A a;
    B b(10);
    
    return 0;
}