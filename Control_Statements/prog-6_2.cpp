#include <iostream>
using namespace std;

int main(){
    char array[7][100]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (int i = 0; i <= 7; i++)
    {
        cout << array[i] << "\n";
        if(i==3){
            break;
        }
    }
    
    return 0;
}