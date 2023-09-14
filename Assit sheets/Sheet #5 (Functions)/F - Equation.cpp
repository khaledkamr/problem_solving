#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long 

void equation(int x, int n)
{
	ll sum = 0;

	for (int i = 2; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			sum += pow(x, i);
		}
	}

	cout << sum;
}

int main()
{
	int a, b;
	cin >> a >> b;

	equation(a, b);
	return 0;
}