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
	int n;
	cin >> n;
	int arr1[50001], arr2[50001], arr3[50001];
	int a1 = 0, a2 = 0, a3 = 0;

	for (int i = 1; i <= n; i++)
	{
		int c;
		cin >> c;
		if (c == 1)
		{
			arr1[a1] = i;
			a1++;
		}
		else if (c == 2)
		{
			arr2[a2] = i;
			a2++;
		}
		else
		{
			arr3[a3] = i;
			a3++;
		}
	}
	int teams = min(a1, min(a2, a3));
	cout << teams << endl;

	for (int i = 0; i < teams; i++)
	{
		cout << arr1[i] << " " << arr2[i] << " " << arr3[i] << endl;
	}
}