#include <iostream>
using namespace std;

class A{
    public:
        A(){
            cout << "A";
        }

        A(int x){
            cout << "\nX is " << x;
        }
};

class B : public A{
    public:
        B(){
            A(5);
            cout << "\nB";
        }
};

int main(){
    B User;
    return 0;
}