#include <iostream>
using namespace std;

class num{
    int n;
    static int a;
    
    public:
        void x(){
            n=0;
        }

        void y(){
            ++a;
            ++n;
            cout << "Static a : " << a << endl;
            cout << "Non-static n : " << n << endl;
        }
};

int num :: a=0;

int main(){
    num n1, n2, n3;

    n1.x();
    n2.x();
    n3.x();
    n1.y();
    n2.y();
    n3.y();

    return 0;
}