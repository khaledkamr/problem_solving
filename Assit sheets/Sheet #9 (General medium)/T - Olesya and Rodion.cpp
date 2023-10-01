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

int main()
{
	IOS;
	ll n, t;
	cin >> n >> t;

	if (n < 2 && t == 10)
	{
		cout << -1;
	}
	else if (n >= 2 && t == 10)
	{
		for (int i = 1; i < n; i++)
		{
			cout << 1;
		}
		cout << 0;
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			cout << t;
		}
	}
}