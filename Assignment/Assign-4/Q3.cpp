#include <iostream>
using namespace std;

class shape{
    protected:
        int shape_width;
        int shape_height;
    public:
        void width(int w){
            shape_width = w;
        }

        void height(int h){
            shape_height = h;
        }

        int area_of_quadrilateral(){
            return shape_width * shape_height;
        }
};

int main(){
    shape R;
    R.width(5);
    R.height(10);

    cout << "The area of quadrilateral is " << R.area_of_quadrilateral() << endl;
    return 0;
}