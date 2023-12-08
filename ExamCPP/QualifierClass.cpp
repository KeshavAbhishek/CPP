#include <iostream>
using namespace std;

// Here A is a qualifier class which contains "class B" as a member
class A{
    public:
        class B{
            public:
                B(){
                    cout << "HELLO B" << endl;
                }
        };
        A(){
            cout << "HELLO A" << endl;
        }
};

class C : public A, public A::B{
    public:
        C(){
            cout << "HELLO C" << endl;
        }
};

int main(){
    C c;
    return 0;
}