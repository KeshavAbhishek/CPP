#include <iostream>
using namespace std;

class just{
    static int a;
    public:
        void data(){
            a++;
        }
        void show(){
            cout << a;
        }
};

int just :: a = 0;

int main(){
    just j1, j2;
    j1.data();
    j1.data();
    j1.show(); // Output is 2
    cout << endl;
    j2.data();
    j2.data();
    j2.show(); // Output is 4
    
    return 0;
}