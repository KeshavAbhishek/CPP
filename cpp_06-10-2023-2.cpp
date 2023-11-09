#include <iostream>
using namespace std;


class A{

    public:
        class B{
        public:
            B(){
                cout << "I AM INSIDE CLASS A.\n";
            }
        };
        
        A(){
            cout << "I CONTAIN CLASS B. So I AM A QUALIFIER CLASS.";
        }
};


class C : virtual public A, A::B{
    public:
        C(){
            A();
            B();
            cout << "I AM DERIVED FROM A AND B";
        }
};

int main(){
    C User;
    return 0;
}