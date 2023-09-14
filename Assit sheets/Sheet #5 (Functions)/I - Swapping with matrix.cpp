#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long 
const int s = 500;

void swap_matrix(int m[s][s], int rows, int cols, int x, int y)
{
	int temp;

	for (int i = 0; i < cols; i++)
	{
		temp = m[x][i];
		m[x][i] = m[y][i];
		m[y][i] = temp;
	}

	for (int i = 0; i < rows; i++)
	{
		temp = m[i][x];
		m[i][x] = m[i][y];
		m[i][y] = temp;
	}
}

int main()
{
	int n, x, y;
	cin >> n >> x >> y;
	int matrix[500][500];

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> matrix[i][j];
		}
	}

	swap_matrix(matrix, n, n, x - 1, y - 1);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}