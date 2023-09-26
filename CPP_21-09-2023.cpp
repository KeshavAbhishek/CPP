#include <iostream>
using namespace std;

class point{
    int x,y;
    public:
        point(int x1, int y1){
            x=x1;
            y=y1;
        }

        // Copy Constructor

        point(point &p2){
            x=p2.x;
            y=p2.y;
        }

        int getX(){
            return x;
        }

        int getY(){
            return y;
        }
};


int main(){
    point p1(10,15);
    point p2=p1;
    point p3(p2);

    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    cout<<p2.getX()<<" "<<p2.getY()<<endl;
    cout<<p3.getX()<<" "<<p3.getY()<<endl;
    return 0;
}