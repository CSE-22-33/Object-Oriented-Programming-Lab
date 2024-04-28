#include <iostream>
using namespace std;

class Stack
{
  private:
    int st[10];
    int top;
  public:
    Stack():top(-1) {}
    void push(int var)
    { st[top++]=var; } //increments stack, input var
    int pop()
    { return st[top--]; } //returns var, decrements stack
    void show(int var)
    { cout << st[var]<< endl; }
};
class stack2:public stack

	{
	public:
		void push(int var)
		{
			if(top<9)
			cout<<"over flow";
			else
			stack:push(var)
		}
		int pop
		{
			if(top<0)
			cout<<"under flow";
			else 
			stack:push(var)
		}
		return 0;
};
int main()
{
	stack2.obj;
	obj.push(10);
	obj.push(20);
	obj.push(30);
	cout<<obj.pop();
}