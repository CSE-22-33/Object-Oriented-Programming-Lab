#include<iostream>
#include<stdlib.h>
using namespace std;
void*operator new(size_t size)
{
	cout<<"new operator overloading"<<endl;
	void*p=malloc(size);
	return p;
}
void operator delete(void*p)
{
	cout<<"delete operator overloading"<<endl;
	
}
int main()
{
	int n = 5, i;
    int * p = new int[n];
 
    for (i = 0; i<n; i++)
    p[i]= i;
 
    cout << "Array: ";
    for(i = 0; i<n; i++)
        cout << p[i] << " ";
         
    cout << endl;
 
    delete [] p;
}
