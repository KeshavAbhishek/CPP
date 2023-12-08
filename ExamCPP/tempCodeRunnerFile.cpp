#include <iostream>
using namespace std;
// class B;
class A
{
    int a;

public:
    A(int x)
    {
        a = x;
    }
    void dis()
    {
        cout << "A: " << a << endl;
    }
    friend void swap(A &a1, B &a2);
};
class B
{
    int b;

public:
    B(int y)
    {
        b = y;
    }
    void display()
    {
        cout << "B: " << b << endl;
    }
    friend void swap(A &a1, B &a2);
};
void swap(A &a1, B &a2)
{
    int t;
    t = a1.a;
    a1.a = a2.b;
    a2.b = t;
}
int main()
{
    A a1(1);
    B a2(2);
    a1.dis();
    a2.display();
    swap(a1, a2);
    a1.dis();
    a2.display();
    return 0;
}