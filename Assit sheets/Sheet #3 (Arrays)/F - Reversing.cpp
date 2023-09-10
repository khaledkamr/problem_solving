#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	int size, arr[1000], c[1000];
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < size; i++)
	{
		c[i] = arr[(size - 1) - i];
	}

	for (int i = 0; i < size; i++)
	{
		cout << c[i] << " ";
	}

	return 0;
}