#include <iostream>
using namespace std;

class A
{
    public:
        float BS, gross;
        string name;
        int id;

        void entry()
        {
            cout << "Enter Name : ";
            cin >> name;
            cout << "Enter ID : ";
            cin >> id;
            cout << "Enter Base Salary : ";
            cin >> BS;
            if (BS <= 15000)
            {
                gross = BS + BS * 0.30 + BS * 0.80;
            }
            if (BS > 15000 && BS <= 30000)
            {
                gross = BS + BS * 0.35 + BS * 0.90;
            }
            if (BS > 30000)
            {
                gross = BS + BS * 0.40 + BS * 0.95;
            }
            cout << "Gross Pay : " << gross << endl << endl;
        }
};

int main()
{
    int n;
    cout << "Enter no. of employees : ";
    cin >> n;
    A data[n];
    for (int i = 0; i < n; i++)
    {
        data[i].entry();
    }
    cout << "\n\n";
    for (int i = 0; i < n; i++)
    {
        cout << data[i].name << " " << data[i].id << " " << data[i].gross << endl;
    }
    
    return 0;
}