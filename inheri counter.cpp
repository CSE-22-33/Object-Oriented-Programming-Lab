#include<iostream>
using namespace std;
class counter
{
	protected:
	int count;
	public:
		counter():count(0){}
		counter(int c):count(c){}
		int get_count()
		{
			return count;
		}
		counter operator ++()
		{
			return counter(++count);
		}
};
class countor:public counter
{
	public:
		counter operator --()
		{
			return counter(--count);
		}
};
int main()
{
	countor c1;
	cout<<"\nc1="<<c1.get_count();
	++c1;++c1;++c1;
	cout<<"\nc1="<<c1.get_count();
	--c1;--c1;
	cout<<"\nc1="<<c1.get_count();
	return 0;
}