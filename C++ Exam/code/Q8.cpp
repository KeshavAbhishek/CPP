// Object as an Argument
// Function -> Without Return type With Argument
#include<iostream>
using namespace std;
class sum
{
	int n1,n2,n3;
	public:
		void input();
		void process();
		friend void output(sum);
};
void sum ::input()
{
	cout<<"enter 2 no.s";
	cin>>n1>>n2;
	
}
void sum::	process()
{
	n3=n1+n2;
}
void output(sum s)
{
	cout<<"Result is:"<<s.n3;
}
int main()
{
	sum s;
	s.input();
	s.process();
	output(s);
	return 0;
}