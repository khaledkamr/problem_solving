#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long size, arr[100000], x;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}

	cin >> x;

	for (int i = 0; i < size; i++)
	{
		if (arr[i] == x)
		{
			cout << i;
			return 0;
		}
	}

	cout << -1;

}