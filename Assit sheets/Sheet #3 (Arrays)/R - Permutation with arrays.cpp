#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

void bubblesort(int arr[], int s)
{
	for (int i = 0; i < s - 1; i++)
	{
		for (int j = 0; j < (s - (i + 1)); j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
	}
}

int main()
{
	int size, A[1000], B[1000];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < size; i++)
	{
		cin >> B[i];
	}

	bubblesort(A, size);
	bubblesort(B, size);

	for (int i = 0; i < size; i++)
	{
		if (A[i] != B[i])
		{
			cout << "no";
			return 0;
		}
	}

	cout << "yes";

	return 0;
}