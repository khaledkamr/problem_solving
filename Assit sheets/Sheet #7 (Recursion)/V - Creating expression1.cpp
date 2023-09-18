#include<iostream>
#define ll long long
using namespace std;

bool Creating_expression(int arr[], int size, int sum, int indx, int x)
{
	if (indx == size)
	{
		return sum == x;
	}

	bool route1 = Creating_expression(arr, size, sum + arr[indx], indx + 1, x);
	bool route2 = Creating_expression(arr, size, sum - arr[indx], indx + 1, x);

	return route1 || route2;
}

int main()
{
	int size, x, arr[20];
	cin >> size >> x;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	if (Creating_expression(arr, size, arr[0], 1, x))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
