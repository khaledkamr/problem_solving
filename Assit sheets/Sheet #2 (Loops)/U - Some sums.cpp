#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long n, a, b, sum = 0;
	cin >> n >> a >> b;

	for (int i = 1; i <= n; i++)
	{
		if (i / 10 == 0)
		{
			if (i >= a && i <= b)
			{
				sum += i;
			}
		}
		else
		{
			int x = i;
			int subsum = 0;

			while (x)
			{
				int y = x % 10;
				subsum += y;
				x /= 10;
			}

			if (subsum >= a && subsum <= b)
			{
				sum += i;
			}
		}
	}

	cout << sum;

	return 0;
}