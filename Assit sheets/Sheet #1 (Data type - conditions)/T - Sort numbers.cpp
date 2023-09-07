#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	int a, b, c;

	cin >> a >> b >> c;

	int arr[3];

	arr[0] = a;
	arr[1] = b;
	arr[2] = c;

	int n = sizeof(arr) / sizeof(arr[0]);

	sort(arr, arr + n);

	for (int i = 0; i < 3; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;

	return 0;
}