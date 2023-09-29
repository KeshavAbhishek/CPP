#include <iostream>
using namespace std;

class shape{
    protected:
        float width, height;
    public:
        void set_data(float a, float b){
            width = a ;
            height = b;
        }
};

class Rectangle : public shape{
    public:
        float area(){
            return height*width;
        }
};

int main(){
    Rectangle rect;
    rect.set_data(5,3);
    cout << rect.area() << endl;
    return 0;
}