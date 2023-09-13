#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long n, x, fx = 0;
	cin >> n;

	while (n--)
	{
		cin >> x;
		int y = 0;

		for (long long i = x; i % 2 == 0 && i > 0; i /= 2)
		{
			y++;
		}

		if (y > fx)
		{
			fx = y;
		}
	}

	cout << fx;

	return 0;
}