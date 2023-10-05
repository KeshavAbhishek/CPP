#include <iostream>
using namespace std;

class Sum{
    int x=10, y=10;
    public:
        Sum(){cout << "X is " << x << " and Y is " << y;};
};

int main(){
    Sum s;
    return 0;
}