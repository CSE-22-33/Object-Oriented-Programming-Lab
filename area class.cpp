#include<iostream>
#include<conio.h>
#include<math.h>
 using namespace std;
 class Triangle
 {
  private:
     float a,b,c;
    public:
   void input()
    {
       cout<<"Enter three sides of a triangle:-";
       cin>>a>>b>>c;
    }
      void Area()
       {
          float s=(a+b+c)/2;
          float area=sqrt(s*(s-a)*(s-b)*(s-c));
          cout<<"\nArea of Triangle ="<<area;
      }
 };
   
   int main()
    {
        Triangle t1;
        t1.input();
        t1.Area();
        return 0;
    }
