#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	int rowA, colA, rowB, colB;

	cin >> rowA >> colA;

	int A[100][100];

	for (int r = 0; r < rowA; r++)
	{
		for (int c = 0; c < colA; c++)
		{
			cin >> A[r][c];
		}
	}

	cin >> rowB >> colB;

	int B[100][100];

	for (int r = 0; r < rowB; r++)
	{
		for (int c = 0; c < colB; c++)
		{
			cin >> B[r][c];
		}
	}

	int C[100][100] = { 0 };

	for (int r = 0; r < rowA; r++)
	{
		for (int c = 0; c < colB; c++)
		{
			for (int i = 0; i < colA; i++)
			{
				C[r][c] += A[r][i] * B[i][c];
			}
		}
	}

	for (int r = 0; r < rowA; r++)
	{
		for (int c = 0; c < colB; c++)
		{
			cout << C[r][c] << " ";
		}
		cout << endl;
	}

	return 0;
}