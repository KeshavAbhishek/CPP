#include <iostream>
using namespace std;

template<class T, class U>

class fun{
    public:
        void max(T a, U b){
            if(a>b){cout << a;}else{cout << b;}
        }
        void min(T a, U b){
            if(a<b){cout << a;}else{cout << b;}
        }
};

int main(){
    fun <int, float> x;
    x.max(5,10.6);
    cout << endl;
    x.min(10,5.7);
    return 0;
}