#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long size, Q, arr[100000], sumarr[100000], l, r;
	cin >> size >> Q;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];

		if (i == 0)
		{
			sumarr[i] = arr[i];
		}
		else
		{
			sumarr[i] = arr[i] + sumarr[i - 1];
		}
	}

	while (Q--)
	{
		cin >> l >> r;
		long long sum = sumarr[--r] - sumarr[--l] + arr[l];

		cout << sum << endl;
	}

	return 0;
}