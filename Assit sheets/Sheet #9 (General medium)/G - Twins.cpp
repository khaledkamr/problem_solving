#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
using namespace std;

int main()
{
	int n, coins[100];
	cin >> n;
	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < n; i++)
	{
		cin >> coins[i];
		sum2 += coins[i];
	}

	sort(coins, coins + n);
	reverse(coins, coins + n);

	for (int i = 0; i < n; i++)
	{
		sum1 += coins[i];
		sum2 -= coins[i];

		if (sum1 > sum2)
		{
			cout << i + 1;
			return 0;
		}
	}
}