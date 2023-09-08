#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long a, b, gcd;
	cin >> a >> b;

	for (int i = 1; i <= max(a, b); i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}

	cout << gcd;

	return 0;
}