#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int x, y, t, sum;
	cin >> t;

	while (t--)
	{
		cin >> x >> y;

		sum = 0;

		for (int i = (min(x, y) + 1); i < max(x, y); i++)
		{
			if (i % 2 != 0)
			{
				sum += i;
			}
		}

		cout << sum << endl;
	}

	return 0;
}