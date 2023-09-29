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
        friend void output(B);
};

void output(B a){
    cout<<"\nName : "<<a.name<<"Age : \n"<<a.Age<<"Gender : \n"<<a.Gender<<"Height : \n"<<a.height<<"Weight : \n"<<a.weight;
}

int main(){
    B usr;
    usr.get();
    output(usr);

    return 0;
}