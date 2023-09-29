// Mutliple Inheritance

#include <iostream>
using namespace std;

class a
{
protected:
    char name[20];
    int age;
};

class b
{
protected:
    char gender;
};

class c
{
protected:
    float height;
};

class d : public a, b, c
{
    float weight;
    public:
        void get()
        {
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter Age : ";
            cin >> age;
            cout << "Enter Gender [M/F] : ";
            cin >> gender;
            cout << "Enter height in cm : ";
            cin >> height;
            cout << "Enter weight in Kg : ";
            cin >> weight;
        }

        void output()
        {
            cout << "\nName : " << name << "\nAge : " << age << "\nGender : " << gender << "\nHeight : " << height << "\nWeight :" << weight;
        }
};

int main()
{
    d User;
    User.get();
    User.output();
    
    return 0;
}