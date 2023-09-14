#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	ll num;
	cin >> num;

	for (ll i = 1;; i++)
	{
		if (i > num)
		{
			cout << i - 1;
			return 0;
		}

		num -= i;
	}

	return 0;
}