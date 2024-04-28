#include <iostream>
using namespace std;

class point
{
  private:
    int x,y;
  public:
    point():x(0),y(0) {}
    point(int m,int n):x(m),y(n){}
    void get_point()
    {
    	cout<<"enter coordinates";
        cin>>x>y;
   }
   void get_point()
   cout<<x<<y;
};
point add point(point m,point n)
{
	point temp;
	temp.x=m.x+n.x
	temp.y=m.y+n.y;
	return temp;
}

int main()
{
	point p1,p3,p3;
	p1.get_point();
	p2.get_point();
	p3=add point(p1,p2);
}
