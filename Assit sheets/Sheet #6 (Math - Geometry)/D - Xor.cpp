#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	ll a, b, q;
	cin >> a >> b >> q;
	ll Q = q % 3;

	if (Q == 1)
	{
		cout << a;
	}
	else if (Q == 2)
	{
		cout << b;
	}
	else
	{
		cout << (a ^ b);
	}

	return 0;
}