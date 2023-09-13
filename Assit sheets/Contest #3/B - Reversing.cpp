#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int size, arr[100];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			for (int j = 0; j < i / 2; j++)
			{
				swap(arr[j], arr[i - j - 1]);
			}
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;
}