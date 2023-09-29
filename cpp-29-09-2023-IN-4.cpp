// Hierarical Inheritance

#include <iostream>
using namespace std;

class red{
    public:
        red(){
            cout<<"I AM RED\n";
        }
};

class yellow{
    public:
        yellow(){
            cout<<"I AM YELLOW\n";
        }
};

class blue{
    public:
        blue(){
            cout<<"I AM BLUE\n";
        }
};

class orange : public red, yellow{
    public:
        orange(){
            cout<<"I AM ORANGE MIXED-OF RED AND YELLOW\n";
        }
};

class green : public yellow, blue{
    public:
        green(){
            cout<<"I AM GREEN MIXED-OF BLUE AND YELLOW\n";
        }
};

class violet : public blue, green{
    public:
        violet(){
            cout<<"I AM VIOLET MIXED-OF BLUE AND GREEN\n";
        }
};

class r_brown : public orange, violet{
    public:
        r_brown(){
            cout<<"I AM R_BROWN MIXED-OF ORANGE AND VIOLET\n";
        }
};

class y_brown : public orange, green{
    public:
        y_brown(){
            cout<<"I AM Y_BROWN MIXED-OF ORANGE AND GREEN\n";
        }
};

class b_brown : public violet, green{
    public:
        b_brown(){
            cout<<"I AM B_BROWN MIXED-OF VIOLET AND GREEN\n";
        }
};

int main(){
    r_brown RB;
    y_brown YB;
    b_brown BB;
    return 0;
}