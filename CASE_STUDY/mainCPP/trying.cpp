#include <iostream>
using namespace std;

int main(){
    string data;
    string alpha="A";
    string seatArray[126];
    int index = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 21; j++)
        {
            data = alpha + "-" + to_string(j+1);
            cout << data << endl;
            seatArray[index++]=data;
        }
        cout<<endl<<endl;
        if(alpha=="A"){alpha="B";}
        else if(alpha=="B"){alpha="C";}
        else if(alpha=="C"){alpha="D";}
        else if(alpha=="D"){alpha="E";}
        else if(alpha=="E"){alpha="F";}
    }
}