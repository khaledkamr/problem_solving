#include<iostream>
#define ll long long
using namespace std;

int matrix[10][10];

int maxPath(int n, int m, int r, int c)
{
	if (r == n - 1 && c == m - 1)
	{
		return matrix[r][c];
	}
	else if (r == n + 1 || c == m + 1)
	{
		return -1000000;
	}
	int right = maxPath(n, m, r, c + 1);
	int down = maxPath(n, m, r + 1, c);
	return matrix[r][c] + max(right, down);
}

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << maxPath(n, m, 0, 0);
}
