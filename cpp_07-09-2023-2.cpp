#include <iostream>
using namespace std;
class about_friend
{
    char name[10];
    int age;
    float cgpa;

    public:
        void input();
        friend void output(about_friend);
};

void about_friend ::input()
{
    cout << "enter the name, age and cgpa of student";
    cin >> name >> age >> cgpa;
}

void output(about_friend a)
{
    cout << "Name is:" << a.name << endl
         << "Age is:" << a.age << endl
         << "Cgpa is:" << a.cgpa;
}

int main()
{
    about_friend af;
    af.input();
    output(af);
    return 0;
}