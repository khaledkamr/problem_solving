#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int MAX(int arr[], int s)
{
	int max = arr[0];

	for (int z = 0; z < s; z++)
	{
		if (max < arr[z])
		{
			max = arr[z];
		}
	}
	return max;
}

int MIN(int arr[], int s)
{
	int min = arr[0];

	for (int z = 0; z < s; z++)
	{
		if (min > arr[z])
		{
			min = arr[z];
		}
	}
	return min;
}

int main()
{
	int size, arr[100000], max, min;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	max = MAX(arr, size);
	min = MIN(arr, size);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == max)
		{
			arr[i] = min;
		}
		else if (arr[i] == min)
		{
			arr[i] = max;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}