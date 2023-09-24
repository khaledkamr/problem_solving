#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

bool isPrime(int x)
{
	for (int i = 2; i <= x / 2; i++)
	{
		if (x % i == 0) return false;
	}
	return true;
}

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = n + 1; i < m; i++)
	{
		if (isPrime(i))
		{
			cout << "NO";
			return 0;
		}
	}
	if (isPrime(m)) cout << "YES";
	else cout << "NO";
}