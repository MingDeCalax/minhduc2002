#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int x1,x2,y1,y2;
	float distance;
	cout<<"Nhap toa do x1 y1: ";
	cin>>x1>>y1;
	cout<<"Nhap toa do x2 y2: ";
	cin>>x2>>y2;
	distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	cout<<"Khoang cach Euclid giua hai diem (x1, y1) va (x2, y2) la: "<<distance;
}
