#include <iostream>
using namespace std;

int main(){
    char array[7][100]={"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    for (int i = 0; i <= 7; i++)
    {
        if(i==4){
            continue;
        }
        cout << array[i] << "\n";
    }
    
    return 0;
}