#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, x;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		int ones = 0;

		while (x > 0)
		{
			if (x % 2 == 1)
			{
				ones++;
			}

			x /= 2;
		}

		int sum = 0;

		for (int j = 0; j < ones; j++)
		{
			sum += 1 * pow(2, j);
		}

		cout << sum << endl;
	}

	return 0;
}