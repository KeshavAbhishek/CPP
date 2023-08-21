#include <iostream>
using namespace std;

int main(){
    int rating;
    cout << "Enter rating (1-5) : ";
    cin >> rating;
    
    switch (rating)
    {
    case 1:
        cout << "\nPoor";
        break;
    case 2:
        cout << "\nAverage";
        break;
    case 3:
        cout << "\nGood";
        break;
    case 4:
        cout << "\nExcellent";
        break;
    case 5:
        cout << "\nOutstanding";
        break;
    
    }
    return 0;
}