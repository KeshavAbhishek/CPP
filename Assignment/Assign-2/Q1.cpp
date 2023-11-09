#include <iostream>
using namespace std;

class MyClass {
    private:
        static int count;

    public:
        static void incrementCount() {
            count++;
        }

        static int getCount() {
            return count;
        }
};

int MyClass::count = 0;

int main() {
    MyClass data;
    data.incrementCount();
    data.incrementCount();

    cout << data.getCount() << endl;

    return 0;
}