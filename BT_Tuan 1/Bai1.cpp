#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int x,y;
	float distance;
	cin >> x >> y;
	distance = sqrt(x*x+y*y);
	cout << "Distance = " << distance;
}
