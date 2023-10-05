#include <iostream>
using namespace std;

class A{
    protected:
        void D1(){
            cout << "Base A\n";
        }
};

class B{
    protected:
        void D2(){
            cout << "Base B\n";
        }
};

class C : public A{
    public:
        void D3(){
            D1();
            cout << "Single Inheritance.\n";
        }
};

class D : public C{
    public:
        void D4(){
            D3();
            cout << "MultiLevel Inheritance.\n";
        }
};

class E : public A,B{
    public:
        void D5(){
            D1();
            D2();
            cout << "Multiple Inheritance.\n";
        }
};

class F : public B,D{
    public:
        void D6(){
            D2();
            D4();
            cout << "Hybrid Inheritance.\n";
        }
};

class G : public E,F{
    public:
        void D7(){
            D5();
            D6();
            cout << "MultiPath Inheritance.\n";
        }
};

class H : public B{
    public:
        void D8(){
            D2();
            cout << "Hierarchical Inheritance.\n";
        }
};

class I : public B{
    public:
        void D9(){
            D2();
            cout << "Hierarchical Inheritance.\n";
        }
};

int main(){
    int opt;

    do{
        cout << "\n\n1. Single Inheritance.\n2. MultiLevel Inheritance.\n3. Multiple Inheritance.\n4. Hybrid Inheritance.\n5. MultiPath Inheritance.\n6. Hierarchical Inheritance.\n7. Exit\n\nEnter Choice : ";

        scanf("%d", &opt);

        if(opt==1){
            C show1;
            show1.D3();
        }

        if(opt==2){
            D show2;
            show2.D4();
        }

        if(opt==3){
            E show3;
            show3.D5();
        }

        if(opt==4){
            F show4;
            show4.D6();
        }

        if(opt==5){
            G show5;
            show5.D7();
        }

        if(opt==6){
            H show6;
            show6.D8();

            I show7;
            show7.D9();
        }

        if(opt==7){
            exit(0);
        }
    }while (opt>0 && opt<=7);
}