#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long size, count1 = 0, count2 = 1;
	cin >> size;
	long long arr[size], arr2[size];

	for (int i = 0; i < size; i++)
	{
		int v;
		cin >> v;
		arr[i] = v;
		arr2[i] = v;
	}

	arr2[0] *= -1;

	for (int i = 0; i < size - 1; i++)
	{
		if (arr[i] < 0 && arr[i + 1] < 0)
		{
			arr[i + 1] *= -1;
			count1++;
		}
		else if (arr[i] > 0 && arr[i + 1] > 0)
		{
			arr[i + 1] *= -1;
			count1++;
		}

		if (arr2[i] < 0 && arr2[i + 1] < 0)
		{
			arr2[i + 1] *= -1;
			count2++;
		}
		else if (arr2[i] > 0 && arr2[i + 1] > 0)
		{
			arr2[i + 1] *= -1;
			count2++;
		}
	}

	if (count1 < count2)
	{
		cout << count1;
	}
	else
	{
		cout << count2;
	}

	return 0;
}