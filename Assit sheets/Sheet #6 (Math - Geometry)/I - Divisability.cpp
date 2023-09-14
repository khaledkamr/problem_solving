#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;
ll sum(ll n)
{
	return n * (n + 1) / 2;
}

int main()
{
	ll a, b, x;
	cin >> a >> b >> x;

	int ma = max(a, b);
	int mi = min(a, b);

	cout << (sum(max(a, b) / x) * x) - (sum((min(a, b) - 1) / x) * x);

	return 0;
}