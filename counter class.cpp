#include<iostream>
using namespace std;
class counter
{
	int c;
	public:
		counter():c(0) {}
		int getc()
		{
			return c;
		}
		void operator++()
 {
 	c++;
 }
};
 int main()
 {
 	counter c1,c2;
 	cout<<c1.getc();
 	cout<<c2.getc();
 	++c1;
 	++c2;
 	
 	cout<<"\nc1="<<c1.getc();
 	cout<<"\nc2="<<c2.getc();
 	return 0;
 }
 