#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	ll p;
	cin >> p;

	if (p == 0)
	{
		cout << 1;
		return 0;
	}
	if (p % 4 == 0)
	{
		cout << 6;
	}
	else if (p % 4 == 1)
	{
		cout << 8;
	}
	else if (p % 4 == 2)
	{
		cout << 4;
	}
	else if (p % 4 == 3)
	{
		cout << 2;
	}
}