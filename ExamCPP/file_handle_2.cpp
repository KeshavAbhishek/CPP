#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream seeData("textfile.txt", ios::in);
    string temp;
    while(seeData){
        getline(seeData, temp);
        cout << temp << endl;
    }
    seeData.close();
    return 0;
}