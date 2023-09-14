#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	ll a, b;
	cin >> a >> b;
	ll x = a, y = b;

	while (y != 0)
	{
		ll temp = x;
		x = y;
		y = temp % x;
	}

	cout << x << " " << (a / x) * b;

	return 0;
}