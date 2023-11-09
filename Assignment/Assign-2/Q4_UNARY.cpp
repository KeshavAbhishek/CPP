#include <iostream>
using namespace std;

class Counter {
    private:
        int count;

    public:
        Counter(int count = 0) {
            this->count = count;
        }

        Counter operator++() {
            ++count;
            return *this;
        }

        Counter operator--() {
            --count;
            return *this;
        }

        int getCount() const {
            return count;
        }
};

int main() {
    Counter C;

    ++C;
    ++C;

    cout << C.getCount() << endl;

    --C;

    cout << C.getCount() << endl;

    return 0;
}