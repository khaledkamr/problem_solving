#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int f, arr[100];
	cin >> f;

	for (int i = 0; i < f; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i <= f; i++)
	{
		for (int j = 0; j < f; j++)
		{
			if (arr[j] == i)
			{
				cout << j + 1 << " ";
			}
		}
	}
}
