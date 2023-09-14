#include <iostream>
using namespace std;

class myclass{
    int a=10;
    public:
        void plus(){
            a+=10;
        }
        int show(){
            return a;
        }
};

int main(){
    myclass C;
    C.plus();
    cout << C.show();
    return 0;
}