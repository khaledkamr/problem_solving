#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	ll n;
	cin >> n;
	ll sum = 0;

	for (int i = 1; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			sum += i;

			if (i != sqrt(n))
			{
				sum += n / i;
			}
		}
	}

	cout << sum;

	return 0;
}