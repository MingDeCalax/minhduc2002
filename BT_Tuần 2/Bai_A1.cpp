#include <iostream>
using namespace std;
int main()
{
	//cau a
	int i;
	for (i = 1;i <= 100;i++)
	 if (i%2 == 0) cout << i << " ";
	cout << endl;
	//cau b
	i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
		if (i == 100) break;
	}
	cout << endl;
	//cau c
	i = 0;
	while (i < 100)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
	}
	cout << endl;
	//cau d
	i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
		if (i == 100) break;
	}
	cout << endl;
	//cau e
	i = 0;
	while (true)
	{
		i++;
		if (i%2 == 0) cout << i << " ";
		if (i < 100) continue;
			else break;
	}
}
