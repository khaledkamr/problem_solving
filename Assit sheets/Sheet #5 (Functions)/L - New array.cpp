#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

void new_arr(int a[], int b[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << a[i] << " ";
	}

	for (int i = 0; i < size; i++)
	{
		cout << b[i] << " ";
	}
}

int main()
{
	int size;

	cin >> size;

	int A[size], B[size];

	for (int i = 0; i < size; i++)
	{
		cin >> A[i];
	}

	for (int i = 0; i < size; i++)
	{
		cin >> B[i];
	}

	new_arr(B, A, size);
	return 0;
}