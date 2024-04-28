#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,n,m;
	char temp;
	cout<<"enter first and second fraction";
	cin>>a>>temp>>b>>c>>temp>>d;  //temp='/'
    n=a*d+b*c;
    m=b*d;
	cout<<"sum is:"<<n<<"/"<<m<<endl;
	return 0;
}