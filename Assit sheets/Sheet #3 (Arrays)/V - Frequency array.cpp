#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int size, arr[100000] = { 0 }, x, n;
	cin >> size >> x;

	for (int i = 0; i < size; i++)
	{
		cin >> n;
		arr[n - 1]++;
	}

	for (int i = 0; i < x; i++)
	{
		cout << arr[i] << endl;
	}

	return 0;
}