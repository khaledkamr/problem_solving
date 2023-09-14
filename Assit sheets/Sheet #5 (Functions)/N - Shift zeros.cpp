#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

void shift0(int arr[], int size)
{
	int count = 0;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == 0)
		{
			count++;
		}
		else
		{
			cout << arr[i] << " ";
		}
	}

	while (count--)
	{
		cout << 0 << " ";
	}
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

	shift0(num, size);
	return 0;
}