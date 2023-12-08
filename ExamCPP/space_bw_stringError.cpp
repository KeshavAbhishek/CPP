#include <iostream>
using namespace std;

int main(){
    string data;
    cout << "Enter String : ";
    getline(cin, data);

    int i = 0;
    try{

        while(data[i]!='\0'){
            if(data[i]==' '){
                throw runtime_error("Space character found.");
            }
            i++;
        }
    }catch(exception &e){
        cout << e.what();
    }
    return 0;
}