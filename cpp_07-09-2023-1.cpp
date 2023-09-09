#include <iostream>
using namespace std;

class sum
{
    int n1, n2, n3;

    public:
        void input();
        void process(int, int);
        void output();
};

void sum::input()
{
    cout << "enter 2 no.s";
    cin >> n1 >> n2;
    process(n1, n2);
}

void sum::process(int x, int y)
{
    n3 = x + y;
}

void sum::output()
{
    cout << "Result is:" << n3;
}

int main()
{
    sum s;
    s.input();
    s.output();
    return 0;
}