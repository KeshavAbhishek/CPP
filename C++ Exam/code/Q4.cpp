// Function -> With Return type Without Argument
#include<iostream>
using namespace std;
class sum
{
	int n1,n2,n3,n4;
	public:
		void input();
		int process();
		void output();
};
void sum ::input()
{
	cout<<"enter 2 no.s";
	cin>>n1>>n2;
	n3=process();

}
int sum:: process()
{
	n4=n1+n2;
	return n4;
}
void sum::	output()
{
	cout<<"Result is:"<<n3;
}
int main()
{
	sum s;
	s.input();
	//s.process();
	s.output();
	return 0;
}

