#include <iostream>
using namespace std;

class A{
    protected:
        int a;
};

class B : virtual public A{
    protected:
        int b;
};

class C : virtual public A{
    protected:
        int c;
};

class D : public B,C{
    int d;
    public:
        D(){
            cout << "Enter : a b c d\n";
            cin>>a>>b>>c>>d;
            cout<<a<<" "<<b<<" "<<c<<" "<<d;
        }
};

int main(){
    D User;
    return 0;
}