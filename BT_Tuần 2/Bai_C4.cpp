#include <iostream>
using namespace std;
int main()
{
    int n,i,j,k;
    cout<<"Nhap so N: ";
    cin>>n;
    for (i=n;i>=1;i--)
    {
        for (j=n-i;j>=0;j--) cout<<" ";
        for (k=1;k<=i*2-1;k++) cout<<"*";
        cout<<endl;
	}
}
