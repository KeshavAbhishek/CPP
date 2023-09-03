#include <iostream>
using namespace std;

class C1{
    void fun(){
        cout << "Hello World" << endl;
    }

    public:
        void runner(){
            fun();
        }
};


int main(){
    C1 classR;
    classR.runner();
    return 0;
}