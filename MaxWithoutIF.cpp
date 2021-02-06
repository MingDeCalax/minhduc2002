#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
	int x,y,max;
	cout<<"Nhap x, y: ";
	cin>>x>>y;
	max = ((x+y)+abs(x-y))/2;
	cout<<"Max = "<<max;
}
