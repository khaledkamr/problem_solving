#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

bool prime(ll x)
{
	if (x == 0 || x == 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool Tprime(ll x)
{
	ll sq = sqrt(x);

	if (sq * sq == x && prime(sq))
	{
		return true;
	}
	else return false;
}

int main()
{
	IOS;
	ll n, x;
	cin >> n;

	while (n--)
	{
		cin >> x;

		if (Tprime(x))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
}