#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long n, x, max = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (max < x)
		{
			max = x;
		}
	}

	cout << max;

	return 0;
}