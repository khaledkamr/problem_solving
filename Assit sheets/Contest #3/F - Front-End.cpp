#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long size, count = 0;
	cin >> size;
	long long arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; count < size; i++)
	{
		cout << arr[i] << " ";
		count++;

		if (count >= size)
		{
			break;
		}

		cout << arr[size - i - 1] << " ";
		count++;
	}

	return 0;
}