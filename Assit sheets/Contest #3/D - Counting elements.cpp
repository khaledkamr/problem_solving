#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int size, count = 0;
	cin >> size;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[j] == arr[i] + 1)
			{
				count++;
				break;
			}
		}
	}

	cout << count;

	return 0;
}