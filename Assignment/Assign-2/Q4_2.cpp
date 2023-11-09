#include<iostream>
using namespace std;
class sum{	
	public:
		int n1,n2;
		sum(){}
		sum(int p, int q){
            n1=p;
	        n2=q;
        }

		void result(){
			cout << n1 << " + " << n2 << "i" << endl;
		}

		sum operator + (sum s1){
			sum s2;
			s2.n1= n1 + s1.n1;
			s2.n2= n2 + s1.n2;
			return s2;
		}		
};

int main(){
	sum s1(2,3);
	sum s2(4,5);
	sum s3;

    s1.result();
	s2.result();

    s3 = s1 + s2;
    cout << "------" << endl;
	s3.result();

    return 0;
}