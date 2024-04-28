#include<iostream>
using namespace std;
class point
{
	int x,y;
	public:
	point():x(0),y(0) {}
	void getxy()
	{
		cout<<"Enter Coordinates";
		cin>>x>>y;
	}
	void showxy()
	{
		cout<<x<<y;
	}
	point operator +(point m)
	{
		point temp;
		temp.x=x+m.x;
		temp.y=y+m.y;
		return temp;
	}
};
int main()
{
	point p1,p2,p3;
	p1.getxy();
	p2.getxy();
	p3=p1+p2;
	p3.showxy();
}
