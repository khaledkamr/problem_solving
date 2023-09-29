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
	int n, m;
	cin >> n >> m;

	if (n < m)
	{
		cout << -1;
	}
	else
	{
		int min;

		if (n % 2 == 0)
		{
			min = n / 2;
		}
		else
		{
			min = (n / 2) + 1;
		}

		for (int i = min; i <= n; i++)
		{
			if (i % m == 0)
			{
				cout << i;
				return 0;
			}
		}
	}
}