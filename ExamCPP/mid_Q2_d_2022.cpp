#include <iostream>
using namespace std;

class Cuboid{
    public:
        int volume;
        Cuboid(int l, int b, int h){
            volume = l * b * h;
        }
        ~Cuboid(){
            cout << "Volume is : " << volume;
        }
};

int main(){
    Cuboid C(5,10,15);
    return 0;
}