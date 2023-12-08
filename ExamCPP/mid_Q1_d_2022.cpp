#include <iostream>
#include <math.h>
using namespace std;

class Circle{
    double radius;
    public:
        double compute_perimeter(){
            return 2 * M_PI * radius;
        }
};
int main(){
    Circle obj;
    obj.radius=1.5;
    obj.compute_perimeter();
    return 0;
}