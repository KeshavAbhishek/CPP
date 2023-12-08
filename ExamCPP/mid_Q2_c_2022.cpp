#include <iostream>
using namespace std;

class Bill{
    char c_name[20];
    int c_no;
    float unit;
    float bill;

    public:
        void get(){
            cout << "Enter name : ";
            cin >> c_name;
            cout << "Consumer No. ";
            cin >> c_no;
            cout << "Unit of electricity used : ";
            cin>>unit;
        }
        void calc_bill(){
            if(unit<=100){
                bill = unit * 1.20;
            }
            if(unit>=100 && unit <=300){
                bill = 100 * 1.20 + (unit-100) * 2;
            }
            if(unit>300){
                bill = 100 * 1.20 + 200 * 2 + (unit-300) * 3;
            }
        }
        void put(){
            cout << endl << c_name << endl;
            cout << c_no << endl;
            cout << unit << endl;
            cout << bill << endl;
        }
};

int main(){
    Bill B;
    B.get();
    B.calc_bill();
    B.put();
    return 0;
}