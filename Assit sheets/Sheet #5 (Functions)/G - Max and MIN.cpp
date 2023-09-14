#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long 

void max_min(int x[], int size)
{
	int max = x[0];
	int min = x[0];

	for (int i = 0; i < size; i++)
	{
		if (max < x[i])
		{
			max = x[i];
		}
		if (min > x[i])
		{
			min = x[i];
		}
	}

	cout << min << " " << max;
}

int main()
{
	int size;
	cin >> size;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	max_min(arr, size);
	return 0;
}