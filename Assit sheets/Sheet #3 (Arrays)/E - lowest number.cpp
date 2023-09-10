#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long size, arr[100000], min;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == min)
		{
			cout << arr[i] << " " << i + 1;
			return 0;
		}
	}
}