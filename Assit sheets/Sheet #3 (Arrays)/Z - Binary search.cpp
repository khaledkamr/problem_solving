#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int binarySearch(int arr[], int low, int high, int key)
{
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (arr[mid] == key)
		{
			return mid;
		}
		else if (arr[mid] > key)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return -1;
}

int main()
{
	int size, Q, arr[100000], x;
	cin >> size >> Q;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + size);

	while (Q--)
	{
		cin >> x;

		if (binarySearch(arr, 0, size - 1, x) != -1)
		{
			cout << "found" << endl;
		}
		else
		{
			cout << "not found" << endl;
		}
	}

	return 0;
}