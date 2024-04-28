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
int main()
{
  //some stack operations
  int i;
  Stack s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  for (i=0; i<= 10 ; i++)
  {
   cout<< "s1[" << i << "]= ";
   s1.show(i); 
  }
  return 0;
}