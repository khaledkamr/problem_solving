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
	int n, m;
	cin >> n >> m;
	vector<int> puzz(m);

	for (int i = 0; i < m; i++)
	{
		cin >> puzz.at(i);
	}

	sort(puzz.begin(), puzz.end());
	ll minDif = puzz[n - 1] - puzz[0];

	for (int i = 1; i <= m - n; i++)
	{
		if (puzz.at(i + n - 1) - puzz.at(i) < minDif)
		{
			minDif = puzz.at(i + n - 1) - puzz.at(i);
		}
	}
	cout << minDif;
}