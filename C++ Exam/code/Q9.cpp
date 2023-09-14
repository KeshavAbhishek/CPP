//Clearly Understand About the use of friend function 
#include<iostream>
using namespace std;
class my_friend;
class about_friend
{
	char name[30];
	int age;
	float cgpa;
	public:
		void input();
	friend void output(about_friend, my_friend);
};
class my_friend
{
	char address[30];
	public:
		void input();
	friend void output(about_friend, my_friend);
};
void about_friend :: input()
{
	cout<<"enter the name, age and cgpa of student";
	cin>>name>>age>>cgpa;
}
void my_friend :: input()
{
	cout<<"enter the address of student";
	cin>>address;
}
void output(about_friend a, my_friend b)
{
	cout<<"Name is:"<<a.name<<endl<<"Age is:"<<a.age<<endl<<"Cgpa is:"<<a.cgpa<<endl<<"Addresss is:"<<b.address<<endl;
}

int main()
{
	about_friend af;
	my_friend mf;
	af.input();
	mf.input();
	output(af,mf);
	return 0;
}