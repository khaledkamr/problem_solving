#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int row, col, x, y;
	cin >> row >> col;

	char arr[101][101];

	for (int i = 1; i <= row; i++)
	{
		for (int j = 1; j <= col; j++)
		{
			cin >> arr[i][j];
		}
	}

	cin >> x >> y;

	if (arr[x][y - 1] != '.' &&
		arr[x][y + 1] != '.' &&
		arr[x - 1][y] != '.' &&
		arr[x + 1][y] != '.' &&
		arr[x - 1][y - 1] != '.' &&
		arr[x - 1][y + 1] != '.' &&
		arr[x + 1][y - 1] != '.' &&
		arr[x + 1][y + 1] != '.')
	{
		cout << "yes";
	}
	else
	{
		cout << "no";
	}

	return 0;
}