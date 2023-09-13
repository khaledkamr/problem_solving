#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long double n, range;
	cin >> n >> range;

	long long arr[100000], x, min;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		arr[i] = x;
	}

	int s = 0;

	for (int j = 0; j < ceil(n / range); j++)
	{
		min = arr[s];

		for (int z = 0; z < range && s < n; z++)
		{
			if (min > arr[s])
			{
				min = arr[s];
			}

			s++;
		}

		cout << min << " ";
	}

	return 0;
}