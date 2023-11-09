#include <iostream>
using namespace std;

class classA{
    public:
        void fun(int x){
            cout << x<<"^2 = "<<x*x << endl;
        }

        void fun(float a, float b){
            cout << a << " + " << b << " = " << a+b << endl;
        }
};

int main(){
    classA User;
    User.fun(10);
    User.fun(15.7,17.2);
    
    return 0;
}