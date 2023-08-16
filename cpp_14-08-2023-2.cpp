// Program Starts

#include <iostream>
using namespace std;

class mensuration{
    int length;
    int breadth;

    public:
        void getData();
        void displayResult();

};

void mensuration::getData(){
    cout << "Enter Length : ";
    cin >> length;
    cout << "Enter Breadth : ";
    cin >> breadth;
}

void mensuration::displayResult(){
    cout << "Perimeter = " << 2*(length+breadth);
    cout << "\nArea = " << length*breadth;
}

int main(){
    mensuration rectange;
    rectange.getData();
    rectange.displayResult();
    return 0;
}