#include <iostream>
using namespace std;
int main()
{
	int i,j,tam,n=5;
	int a[n];
	for (i=0;i<n;i++) cin>>a[i];
	for (i=0;i<n-1;i++)
		for (j=i+1;j<n;j++)
			if (a[i]<a[j])
				{
					tam=a[i];
					a[i]=a[j];
					a[j]=tam;
				}
	cout<<a[n/2];
}
