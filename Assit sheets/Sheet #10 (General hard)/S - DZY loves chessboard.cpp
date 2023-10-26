#include<iostream>
#include<cstdlib>
#include<string>
#include<numeric> 
#include<algorithm>
#include<math.h>
#include<cmath>
#include<iomanip>
#include<vector>
#include<utility>
#include <unordered_set>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	int n, m;
	cin >> n >> m;
	char chessboard[100][100];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> chessboard[i][j];
		}
	}

	char chessmen[100][100];
	bool black = true;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (black)
			{
				chessmen[i][j] = 'B';
				black = false;
			}
			else
			{
				chessmen[i][j] = 'W';
				black = true;
			}
		}
		if (chessmen[i][0] == 'B' && chessmen[i][m - 1] == 'W')
		{
			black = false;
		}
		else if (chessmen[i][0] == 'W' && chessmen[i][m - 1] == 'B')
		{
			black = true;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (chessboard[i][j] == '.')
			{
				cout << chessmen[i][j];
			}
			else if (chessboard[i][j] == '-')
			{
				cout << chessboard[i][j];
			}
		}
		cout << endl;
	}
}
