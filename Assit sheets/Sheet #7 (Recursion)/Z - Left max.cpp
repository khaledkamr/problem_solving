#include<iostream>
#include<algorithm>
#define ll long long
using namespace std;

int printMax(int arr[], int size, int max, int indx)
{
	if (indx == size)
	{
		return 0;
	}
	if (arr[indx] > max)
	{
		max = arr[indx];
	}

	cout << max << " ";
	return printMax(arr, size, max, indx + 1);
}

int main()
{
	int size, arr[100000];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cout << arr[0] << " ";
	printMax(arr, size, arr[0], 1);
}
