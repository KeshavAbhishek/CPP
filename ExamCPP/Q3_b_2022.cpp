#include <iostream>
using namespace std;

class Cube
{
    float a, cube, surfaceArea;

    public:
        Cube(float side)
        {
            a = side;
            cube = a * a * a;
            surfaceArea = 6 * a * a;
        }
        ~Cube(){
            cout << "Volume : " << cube << endl;
            cout << "Surface Area : " << surfaceArea;
        }
};

int main()
{
    Cube C(5.5);
    return 0;
}