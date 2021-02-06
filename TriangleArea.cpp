#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int a,b,c;
	float s,area;
	cout<<"Nhap do dai 3 canh a,b,c: ";
	cin>>a>>b>>c;
	s=(a+b+c)/2;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<"Dien tich tam giac: "<<area;
}
