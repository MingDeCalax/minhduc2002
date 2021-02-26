#include <iostream>
#include <cmath>
int i;
using namespace std;
bool prime(int n)
{
	if (n<=1) return false;
	for (i=2;i<=sqrt(n);i++)
		if (n%i==0) return false;
	return true;
}
int main()
{
	int n;
	cin>>n;
	if (prime(n)) cout<<"yes";
		else cout<<"no";
}

