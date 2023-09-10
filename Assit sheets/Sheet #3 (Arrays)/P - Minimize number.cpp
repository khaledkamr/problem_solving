#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long size, arr[200];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int count = 0;

	while (size)
	{
		for (int i = 0; i < size; i++)
		{
			if (arr[i] % 2 != 0)
			{
				cout << count;
				return 0;
			}
		}

		for (int i = 0; i < size; i++)
		{
			arr[i] = arr[i] / 2;
		}
		count++;
	}
}