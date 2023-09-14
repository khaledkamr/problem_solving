#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

// 0 1 2 3 4   indx
// 1 2 3 4 5   x=0 
// 5 1 2 3 4   x=1
// 4 5 1 2 3   x=2
// 3 4 5 1 2   x=3
// 2 3 4 5 1   x=4
// 1 2 3 4 5   x=5

void shiftR(int arr[], int size, int x)
{
	while (x > size)
	{
		x -= size;
	}

	for (int i = size - x; i < size; i++)
	{
		cout << arr[i] << " ";
	}

	for (int i = 0; i < size - x; i++)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	int size, x, arr[10000];
	cin >> size >> x;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	shiftR(arr, size, x);
	return 0;
}