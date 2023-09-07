#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
using namespace std;

int main()
{
	long long a, b, c, d;

	cin >> a >> b >> c >> d;

	a = a % 100;
	b = b % 100;
	c = c % 100;
	d = d % 100;

	int n1, n2;

	n2 = (a * b * c * d) % 10;
	n1 = ((a * b * c * d) / 10) % 10;

	cout << n1 << n2;

	return 0;
}