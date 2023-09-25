#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	int r1, r2, c1, c2;
	char arr[100][100], c;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			arr[i][j] = '.';
		}
	}

	while (q--)
	{
		cin >> r1 >> c1 >> r2 >> c2 >> c;

		for (int i = min(r1, r2) - 1; i < max(r1, r2); i++)
		{
			for (int j = min(c1, c2) - 1; j < max(c1, c2); j++)
			{
				arr[i][j] = c;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << arr[i][j];
		}
		cout << endl;
	}
}