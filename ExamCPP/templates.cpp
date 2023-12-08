#include <iostream>
using namespace std;

template<class T>
class data{
    public:
        data(T c){
            cout << endl << "C = " << c << "\nSize in bytes: " << sizeof(c);
        }
};
int main(){
    data<char>h('A');
    data<int>i(100);
    data<float>j(3.12);
    return 0;
}