#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, arr[100][100];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
	}

	int sum1 = 0, sum2 = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = i; j <= i; j++)
		{
			sum1 += arr[i][j];
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = (n - (i + 1)); j >= (n - (i + 1)); j--)
		{
			sum2 += arr[i][j];
		}
	}

	cout << abs(sum1 - sum2);

	return 0;
}