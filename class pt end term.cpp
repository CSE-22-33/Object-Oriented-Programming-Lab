#include<iostream>
#include<conio.h>
class point
{
public:
int x,y;
public:
void get()
{
cout<<"Enter Two co-ordinate of x and y:";
cin>>x>>y;
}
void disp()
{
cout<<"X= "<<x<<"\tY= "<<y;
}
friend point operator-(point &);
};
point operator-(point &t1,point &t2)
{
point z;
z.x=t1.x-t2.x;
z.y=t1.y-t2.y;
return z;
}
void main()
{

point p1,p2,p3;
clrscr();
p1.get();
p2.get();
cout<<"\n\n\tFirst point: ";
p1.disp();
cout<<"\n\n\tSecond point: ";
p2.disp();
p3=p1-p2;
cout<<"\n\nDistance between two Point: ";
p3.disp();
getch();
}

