#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

ll fact(int n)
{
	ll fact = 1;

	for (int i = 2; i <= n; i++)
	{
		fact *= i;
	}

	return fact;
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << fact(a) / (fact(a - b) * fact(b)) << " ";
	cout << fact(a) / fact(a - b);

	return 0;
}