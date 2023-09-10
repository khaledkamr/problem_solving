#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;

	long long fib[50] = { 0,1 };

	for (int i = 0; i < n; i++)
	{
		if (n - 1 == 0)
		{
			cout << 0;
			return 0;
		}
		else if (n - 1 == 1)
		{
			cout << 1;
			return 0;
		}
		else if (i > 1)
		{
			fib[i] = fib[i - 1] + fib[i - 2];
		}
	}

	cout << fib[n - 1];

	return 0;
}