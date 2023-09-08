#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long a, b, count = 0;
	cin >> a >> b;

	for (long long i = min(a, b); i <= max(a, b); i++)
	{
		bool lucky = 1;

		for (long long j = i; j > 0; j = j / 10)
		{
			int x = j % 10;

			if (x == 4 || x == 7)
			{
				continue;
			}
			else
			{
				lucky = 0;
				break;
			}
		}

		if (lucky)
		{
			cout << i << " ";
			count++;
		}
	}

	if (count == 0)
	{
		cout << -1;
	}

	return 0;
}