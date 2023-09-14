#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

void print(int n)
{
	for (int i = 1; i <= n; i++)
	{
		cout << i;

		if (i != n)
		{
			cout << " ";
		}
	}
}

int main()
{
	int x;
	cin >> x;

	print(x);
	return 0;
}