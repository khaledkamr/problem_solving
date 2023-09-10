#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long size, arr[100000], sum = 0;
	cin >> size;

	for (int i = 0; i < size; i++)
	{
		cin >> arr[i];
		sum += arr[i];
	}

	cout << abs(sum);

	return 0;
}