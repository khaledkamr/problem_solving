#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

ll sum_even(ll x)
{
	ll sum = (x * (x + 1));

	return sum;
}

ll sum_odd(ll x)
{
	ll sum = (x + 1) / 2;
	ll finalsum = sum * sum;

	return finalsum;
}

int main()
{
	ll a, b, summ, sumEven, sumOdd;
	cin >> a >> b;

	sumEven = sum_even(max(a, b) / 2) - sum_even((min(a, b) - 1) / 2);
	sumOdd = sum_odd(max(a, b)) - sum_odd(min(a, b) - 1);

	cout << sumEven + sumOdd << endl;
	cout << sumEven << endl;
	cout << sumOdd << endl;

	return 0;
}