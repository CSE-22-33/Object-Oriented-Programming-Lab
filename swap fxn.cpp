/*
write a function called swap()*/
#include<iostream>
using namespace std;
void swap(int&,int&);
int main()
{
	int x,y;
	cout<<"enter 2 numbers to swap"<<endl;
	cout<<"x:";
	cin>>x;
	cout<<"y:";
	cin>>y;
	swap(x,y);
	cout<<"after swap:"<<endl;
	cout<<"x:"<<x<<"\ny:"<<y<<endl;
	return 0;
}
void swap(int&x,int&y)
{
	x=x+y;
	y=x-y;
	x=x-y;
}
