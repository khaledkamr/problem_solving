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
	ll n, res = -1;
	cin >> n;

	if (n % 2 == 0)
	{
		cout << n / 2;
	}
	else
	{
		cout << -((n / 2) + 1);
	}
}