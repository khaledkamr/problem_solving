#include<iostream>
#include<cstdlib>
#include<string>
#define ll long long
using namespace std;

int main()
{
	int n, arr[100];
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	int min = 100, max = 0, sec = 0;

	for (int i = 0; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
		if (min > arr[i]) min = arr[i];
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[0] != max)
			{
				if (arr[j] == max)
				{
					swap(arr[j], arr[j - 1]);
					sec++;
					break;
				}
			}
		}
		for (int j = n - 1; j >= 0; j--)
		{
			if (arr[n - 1] != min)
			{
				if (arr[j] == min)
				{
					swap(arr[j], arr[j + 1]);
					sec++;
					break;
				}
			}
		}
	}
	cout << sec;
}