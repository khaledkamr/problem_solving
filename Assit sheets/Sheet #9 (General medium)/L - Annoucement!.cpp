#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

int main()
{
	int n, problem[10000], count[1000000] = { 0 };
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> problem[i];
		count[problem[i]]++;
	}

	int sum = 0;

	for (int i = 0; i < 1000000; i++)
	{
		if (count[i] > 1)
		{
			sum += count[i] - 1;
		}
	}

	if (sum == 0)
	{
		cout << -1;
	}
	else
	{
		cout << sum;
	}
}