#include <iostream>
using namespace std;

class Calculator
{
private:
    int a, b;

public:
    Calculator()
    {
        cout << "Enter 1st No. : ";
        cin >> a;

        cout << "Enter 2nd No. : ";
        cin >> b;
    }

    inline int add(){return a + b;}
    inline int sub(){return a - b;}
    inline int mul(){return a * b;}
    inline int div(){return a / b;}

    int hcf()
    {
        while(b){
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    inline int lcm(){return (a*b)/hcf();}
};

int main()
{
    Calculator CT;
    cout << "1. Addition\n2. Substract\n3. Multiplication\n4. Division\n5. HCF\n6. LCM\nEnter Choice : ";
    int choice;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Addition = " << CT.add();
        break;
    
    case 2:
        cout << "Substraction = " << CT.sub();
        break;
    
    case 3:
        cout << "Multiplication = " << CT.mul();
        break;
    
    case 4:
        cout << "Division = " << CT.div();
        break;
    
    case 5:
        cout << "HCF = " << CT.hcf();
        break;
    
    case 6:
        cout << "LCM = " << CT.lcm();
        break;
    
    default:
        break;
    }
    return 0;
}