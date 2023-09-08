#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	bool isprime = 1;

	for (int i = 2; i <= n; i++)
	{
		isprime = 1;

		for (int j = i - 1; j <= i && j != 0; j--)
		{
			if (i % j == 0 && j != 1)
			{
				isprime = 0;
				break;
			}
		}

		if (isprime)
		{
			cout << i << " ";
		}
	}

	return 0;
}