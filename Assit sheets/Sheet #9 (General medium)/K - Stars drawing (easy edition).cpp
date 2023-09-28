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

int n, m;
const int s = 101;
char g[s][s];
int v[s][s];
vector<pair<pair<int, int>, int> > star;

void add(int row, int col, int size)
{
	int move = col + size, c = col;

	while (c <= move)
	{
		v[row][c] = 1;
		c++;
	}
	move = col - size, c = col;

	while (c >= move)
	{
		v[row][c] = 1;
		col--;
	}
	move = row + size;
	int r = row;

	while (r <= move)
	{
		v[r][col] = 1;
		r++;
	}
	move = row - size, r = row;

	while (r >= move)
	{
		v[r][col] = 1;
		r--;
	}
}

int check(int row, int col)
{
	int right = 0, left = 0, up = 0, down = 0;
	int c = col;

	while (c <= m && g[row][c] == '*')
	{
		right++;
		c++;
	}
	c = col;

	while (c >= 1 && g[row][c] == '*')
	{
		left++;
		c--;
	}
	int r = row;

	while (r <= n && g[r][col] == '*')
	{
		down++;
		r++;
	}
	r = row;

	while (r >= 1 && g[r][col] == '*')
	{
		up++;
		r--;
	}

	return min(min(left - 1, right - 1), min(up - 1, down - 1));
}

int main()
{
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> g[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (g[i][j] == '*')
			{
				int size = check(i, j);

				if (size > 0)
				{
					star.push_back({ {i,j},size });
					add(i, j, size);
				}
			}
		}
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (g[i][j] == '*')
			{
				if (v[i][j] != 1)
				{
					cout << -1 << endl;
					return 0;
				}
			}
		}
	}

	cout << star.size() << endl;

	for (int i = 0; i < star.size(); i++)
	{
		cout << star[i].first.first << " ";
		cout << star[i].first.second << " ";
		cout << star[i].second << endl;
	}
}