#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	int size, arr[100000];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	int min = arr[0];

	for (int i = 0; i < size; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
	}

	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == min)
		{
			count++;
		}
	}

	if (count % 2 == 0)
	{
		cout << "Unlucky";
	}
	else
	{
		cout << "Lucky";
	}

	return 0;
}