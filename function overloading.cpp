#include<iostream>
using namespace std;
int amount(int);
int amount(int,int ,int);
int amount(int ,int);
int main()
{
	int a,b,c;
	a=amount(5);
	cout<<"a is\n"<<a;
	b=amount(5,10,6);
	cout<<"b is\n"<<b;
	c=amount(7,8);
	cout<<"c is\n"<<c;
	
}
int amount(int a)
{
	return 20*a*10;
}
int amount(int a,int b)
{
	return a*b*10;
}
int amount(int a,int b,int c)
{
	return a*b*c;
}


