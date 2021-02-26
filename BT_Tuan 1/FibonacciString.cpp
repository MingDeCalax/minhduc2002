#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	string a,b,c;
	int i,n;
	cout<<"Nhap so N: ";
	cin>> n;
	a="a";
	b="b";
	for (i=0;i<n;i++)
		{
			c=b+a;
			a=b;
			b=c;
		}
	cout<<"Fibonacci Word = " <<c;
}
