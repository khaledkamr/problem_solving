#include<iostream>
#define ll long long
using namespace std;

bool Reach_value(ll sum, ll n)
{
	if (n < sum)
	{
		return false;
	}
	else if (sum == n)
	{
		return sum == n;
	}
	bool route1 = Reach_value(sum * 10, n);
	bool route2 = Reach_value(sum * 20, n);

	return route1 || route2;
}

int main()
{
	ll t, n;
	cin >> t;

	while (t--)
	{
		cin >> n;

		if (Reach_value(1, n))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
