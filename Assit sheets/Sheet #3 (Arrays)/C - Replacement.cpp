#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long size, arr[100000];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		if (arr[i] > 0)
		{
			arr[i] = 1;
		}
		else if (arr[i] < 0)
		{
			arr[i] = 2;
		}
	}

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	return 0;

}