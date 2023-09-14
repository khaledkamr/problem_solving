#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include <cstring>
#define ll long long
using namespace std;

ll num(char c)
{
	if (c >= '0' && c <= '9')
	{
		return c - '0';
	}
	else
	{
		return c - 'A' + 10;
	}
}

char reNum(ll n)
{
	if (n >= 0 && n <= 9)
	{
		return n + '0';
	}
	else
	{
		return n + 'A' - 10;
	}
}

ll toDec(char val[], ll base)
{
	ll size = strlen(val), pow = 1, res = 0;

	for (int i = size - 1; i >= 0; i--)
	{
		res += num(val[i]) * pow;
		pow *= base;
	}

	return res;
}

string fromDec(char res[], ll base, ll n)
{
	int indx = 0;

	while (n > 0)
	{
		res[indx++] = reNum(n % base);
		n /= base;
	}

	res[indx] = '\0';
	reverse(res, res + indx);
	return res;
}

int main()
{
	int t;
	cin >> t;

	if (t == 1)
	{
		char arr[35];
		ll base;
		cin >> arr >> base;

		cout << toDec(arr, base);
	}
	else if (t == 2)
	{
		ll n, base;
		char res[100];
		cin >> n >> base;

		cout << fromDec(res, base, n);
	}

	return 0;
}