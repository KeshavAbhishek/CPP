//Array of Objects with Friend function
#include<iostream>
using namespace std;
class about_friend
{
	char name[10];
	int age;
	float cgpa;
	public:
		void input();
	friend void output(about_friend);
};
void about_friend :: input()
{
	cout<<"enter the name, age and cgpa of student";
	cin>>name>>age>>cgpa;
}
void output(about_friend a)
{
	cout<<"Name is:"<<a.name<<endl<<"Age is:"<<a.age<<endl<<"Cgpa is:"<<a.cgpa<<endl;
}

int main()
{
	about_friend af[2];
	for(int i=0;i<2;i++)
	{
		af[i].input();
		output(af[i]);
	}
	return 0;
}