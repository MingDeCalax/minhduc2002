#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	bool f=false;
	cout<<"Nhap 3 so a,b,c: ";
	cin>>a>>b>>c;
	if (a>b && b>c) 
		{
			f=true;
		} else if (a<b && b<c) f=true;
	cout<<f;
}
