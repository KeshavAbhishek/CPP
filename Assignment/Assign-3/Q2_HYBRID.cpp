#include <iostream>
using namespace std;

class player{
    protected:
        char name[20];
        char gender;
        int age;
};

class physique : public player{
    protected:
        float height;
        float weight;
};

class location{
    protected:
        char city[20];
        int pin;
};

class game : public physique, location{
    public:
        char game[20];
        void get(){
            cout<<"Name: ";cin>>name;
            cout<<"Gender: ";cin>>gender;
            cout<<"Age: ";cin>>age;
            cout<<"Height: ";cin>>height;
            cout<<"Weight: ";cin>>weight;
            cout<<"City: ";cin>>city;
            cout<<"Pin: ";cin>>pin;
            cout<<"Game: ";cin>>game;
        }

        void output(){
            cout << name << endl;
            cout << gender << endl;
            cout << age << endl;
            cout << height << endl;
            cout << weight << endl;
            cout << city << endl;
            cout << pin << endl;
            cout << game << endl;
        }
};

int main(){
    game G;
    G.get();
    G.output();
    return 0;
}