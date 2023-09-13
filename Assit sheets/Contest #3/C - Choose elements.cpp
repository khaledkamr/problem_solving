#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int size, k;
	cin >> size >> k;
	long long arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + size);
	reverse(arr, arr + size);
	long long sum = 0;

	for (int i = 0; i < k; i++)
	{
		if (arr[i] < 0)
		{
			break;
		}
		sum += arr[i];
	}

	cout << sum << endl;

	return 0;
}