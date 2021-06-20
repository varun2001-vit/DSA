#include<iostream>
using namespace std;
class stud
{
	char reg[20];
	char name[20];
	int marks[3];
	int total;
	int avg;
	int sum;
	
public:
	void input()
	{
		cout<<"enter the reg";
		cin>>reg;
		cout<<"enter name";
		cin>>name;
		cout<<"enter marks";
		for(int i=0;i<3;i++)
		{
			cin>>marks[i];
		}
	}
	void calc()
	{ 
	for(int i=0;i<3;i++)
		{
			sum=sum+marks[i];
			
		}
	avg=sum/3;
		
	}
	void output()
	{
		cout<<reg<<endl<<name<<endl<<avg;
		
	}
	
};
int main()
{ int n;
	cout<<"enter n"; 
	cin>>n;
	stud a[n];
	for(int i=0;i<3;i++)
	{
		a[i].input();
		a[i].calc();
	}
	for(int i=0;i<3;i++)
	{
		a[i].output();
	}
}
