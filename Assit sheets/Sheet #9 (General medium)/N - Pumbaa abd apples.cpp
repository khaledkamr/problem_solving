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
	int n, m, k;
	cin >> n >> m >> k;
	int farm[1001][1001];

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> farm[i][j];
		}
	}

	int row[1001];
	int col[1001];

	for (int i = 1; i <= n; i++)
	{
		row[i] = i;
	}
	for (int i = 1; i <= m; i++)
	{
		col[i] = i;
	}

	while (k--)
	{
		char in;
		int x, y;
		cin >> in >> x >> y;

		if (in == 'g')
		{
			int r = row[x];
			int c = col[y];
			cout << farm[r][c] << endl;
		}
		else if (in == 'r')
		{
			swap(row[x], row[y]);
		}
		else if (in == 'c')
		{
			swap(col[x], col[y]);
		}
	}
}