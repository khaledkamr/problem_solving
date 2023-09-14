#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int distinct_num(int arr[], int size)
{
	int count = 0;
	sort(arr, arr + size);

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == arr[i - 1])
		{
			continue;
		}
		count++;
	}

	return count;
}

int main()
{
	int size;
	cin >> size;
	int num[size];

	for (int i = 0; i < size; i++)
	{
		cin >> num[i];
	}

	cout << distinct_num(num, size);
	return 0;
}