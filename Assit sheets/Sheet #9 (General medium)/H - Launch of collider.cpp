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
	int p, par[200000], count = 0, minCount = INT_MAX;
	string dir;
	cin >> p >> dir;

	for (int i = 0; i < p; i++)
	{
		cin >> par[i];
	}

	for (int i = 0; i < dir.size(); i++)
	{
		count = 0;

		if (dir[i] == 'R' && dir[i + 1] == 'L')
		{
			while (par[i] != par[i + 1])
			{
				par[i]++;
				par[i + 1]--;
				count++;
			}

			if (count < minCount)
			{
				minCount = count;
			}
		}
	}

	if (minCount != INT_MAX)
	{
		cout << minCount;
	}
	else
	{
		cout << -1;
	}
}