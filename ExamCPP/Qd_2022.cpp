#include <iostream.h>
using namespace std;

class Student{
    public:
        int id;
        string name;
        float mark;
        void display_details(name, id, mark);
};

void Student::display_details(int id, string name, float mark){
    cout << name << id << mark << endl;
}

int main(){
    Student st;
    st.display_details(101, "Logal Paul", 87.5);
    return 0;
}

/*
Corrected Code

#include <iostream>
using namespace std;

class Student {
public:
    int id;
    string name;
    float mark;
    void display_details(int id, string name, float mark);
};

void Student::display_details(int id, string name, float mark) {
    cout << name << " " << id << " " << mark << endl;
}

int main() {
    Student st;
    st.display_details(101, "Logal Paul", 87.5);
    return 0;
}

*/