#include <iostream>
using namespace std;

class myclass{
    public:
        myclass(){
            if(1){
                throw runtime_error("Failed to Initialize");
            }
        }
};

int main(){
    myclass myC;
    return 0;
}