#include <iostream>
using namespace std;

int main(){
    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    switch (marks/10)
    {
    case 9:
        cout << "Grade O";
        break;
    case 8:
        cout << "Grade E";
        break;
    case 7:
        cout << "Grade A";
        break;
    case 6:
        cout << "Grade B";
        break;
    case 5:
        cout << "Grade C";
        break;
    case 4:
        cout << "Grade D";
        break;
    default:
        cout << "Grade F";
        break;
    
    }
    
    return 0;
}