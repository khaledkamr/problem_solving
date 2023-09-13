#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long t, n, s;
	cin >> t;

	for (int i = 1; i <= t; i++)
	{
		cin >> n >> s;

		if ((n * (n + 1) / 2) < s)
		{
			cout << -1;
		}
		else
		{
			long long sum = 0;

			for (long long z = n; z > 0; z--)
			{
				if (sum + z <= s)
				{
					sum += z;
					cout << z << " ";
				}
			}
		}

		cout << endl;
	}

	return 0;
}