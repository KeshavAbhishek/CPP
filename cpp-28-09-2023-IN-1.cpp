// Single Inheritance

#include <iostream>
using namespace std;

class A{
    protected:
        char name[20];
        int Age;
        char Gender;
};

class B : public A{
    public:
        float height;
        float weight;
        void get(){
            cout<<"Enter Name : ";cin>>name;
            cout<<"Enter Age : ";cin>>Age;
            cout<<"Enter Gender [M/F] : ";cin>>Gender;
            cout<<"Enter height in cm : ";cin>>height;
            cout<<"Enter weight in Kg : ";cin>>weight;
        }
        void output(){
            cout<<"\nName : "<<name<<"\nAge : "<<Age<<"\nGender : "<<Gender<<"\nHeight : "<<height<<"\nWeight :"<<weight;
        }
};

int main(){
    B usr;
    usr.get();
    usr.output();

    return 0;
}