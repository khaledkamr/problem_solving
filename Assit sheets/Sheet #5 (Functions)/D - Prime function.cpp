#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

bool prime(int x)
{
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	int t, n;
	cin >> t;

	while (t--)
	{
		cin >> n;

		if (n == 1)
		{
			cout << "NO" << endl;
		}
		else if (prime(n))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}