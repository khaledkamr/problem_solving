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
	int n, shots, x, y, w[100];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> w[i];
	}
	cin >> shots;

	while (shots--)
	{
		cin >> x >> y;

		if (x - 1 == 0)
		{
			w[x] += w[x - 1] - y;
			w[x - 1] = 0;
		}
		else if (x - 1 == n - 1)
		{
			w[x - 2] += y - 1;
			w[x - 1] = 0;
		}
		else
		{
			w[x - 2] += y - 1;
			w[x] += w[x - 1] - y;
			w[x - 1] = 0;
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << w[i] << endl;
	}
}