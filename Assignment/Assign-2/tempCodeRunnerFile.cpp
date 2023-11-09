#include <iostream>
using namespace std;

class MyClass {
    private:
        int x;
        int y;

    public:
        MyClass(int x, int y) {
            this->x = x;
            this->y = y;
        }

        // Copy constructor
        MyClass(const MyClass& other) {
            this->x = other.x;
            this->y = other.y;
        }

        int getX() const {
            return x;
        }

        int getY() const {
            return y;
        }
};

int main() {
    MyClass obj1(1, 2);
    MyClass obj2(obj1);

    cout << "Obj1 -> value of x: " << obj1.getX() << endl;
    cout << "Obj1 -> value of y: " << obj1.getY() << endl;
    cout << endl;
    cout << "Obj2 -> value of x: " << obj2.getX() << endl;
    cout << "Obj2 -> value of y: " << obj2.getY() << endl;

    return 0;
}