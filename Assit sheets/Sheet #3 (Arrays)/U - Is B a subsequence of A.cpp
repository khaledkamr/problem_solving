#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long n, m, A[10000], B[10000];
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < m; i++)
	{
		cin >> B[i];
	}

	int x = 0;
	int count = 0;

	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (B[i] == A[x])
			{
				count++;
				x++;
				break;
			}
			x++;
		}
	}

	if (count == m)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}