#include <iostream>
using namespace std;

class myClass{
    private:
        int x, y;
    public:
        void inputSave(int a, int b){
            x = a;
            y = b;
        }
        friend void output(myClass mClass){
            cout << "x = " << mClass.x << endl;
            cout << "y = " << mClass.y << endl;
        }
};

int main(){
    myClass User;
    User.inputSave(15,20);
    output(User);
    return 0;
}