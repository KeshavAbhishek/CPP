// Object as an Argument
// Function -> Without Return type With Argument
#include<iostream>
using namespace std;
class sum
{
	int n1,n2,n3;
	public:
		void input();
		void process(sum ,sum);
		void output();
};
void sum ::input()
{
	cout<<"enter 2 no.s";
	cin>>n1>>n2;
	//process(n1,n2);
}
void sum::	process(sum x,sum y)
{
	n3=x.n1+y.n2;
}
void sum::	output()
{
	cout<<"Result is:"<<n3;
}
int main()
{
	sum s;
	s.input();
	s.process(s,s);
	s.output();
	return 0;
}

