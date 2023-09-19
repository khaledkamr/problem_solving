#include<iostream>
#define ll long long
using namespace std;

int main()
{
	int n, m, a, b, sumA = 0, sumB = 0;
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		sumA += a;
	}

	for (int i = 0; i < m; i++)
	{
		cin >> b;
		sumB += b;
	}

	if (sumA == sumB)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}
