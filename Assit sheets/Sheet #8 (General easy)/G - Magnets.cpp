#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int n, count = 1;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++)
	{
		string a;
		cin >> a;

		if (a == "01")
		{
			arr[i] = 1;
		}
		else if (a == "10")
		{
			arr[i] = 0;
		}
	}

	for (int i = 1; i < n; i++)
	{
		if (arr[i] != arr[i - 1])
		{
			count++;
		}
	}

	cout << count;
}
