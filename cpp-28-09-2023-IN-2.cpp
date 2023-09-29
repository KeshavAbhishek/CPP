// Multilevel Inheritance

#include <iostream>
using namespace std;

class A{
    protected:
        char name[20];
        int age;
};

class B : public A{
    protected:
        char Gender;
        float height;
};

class C : public B{
    public:
        float weight;
        void get(){
            cout<<"Enter Name : ";cin>>name;
            cout<<"Enter Age : ";cin>>age;
            cout<<"Enter Gender [M/F] : ";cin>>Gender;
            cout<<"Enter height in cm : ";cin>>height;
            cout<<"Enter weight in Kg : ";cin>>weight;
        }

        void output(){
            cout<<"\nName : "<<name<<"\nAge : "<<age<<"\nGender : "<<Gender<<"\nHeight : "<<height<<"\nWeight :"<<weight;
        }
};

int main(){
    C USER;
    USER.get();
    USER.output();
    return 0;
}