#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include <cstring>
#define ll long long
using namespace std;

int main()
{
	double n, digits = 0;
	cin >> n;

	for (int i = 2; i <= n; i++)
	{
		digits += log10(i);
	}

	cout << "Number of digits of " << n << "! is " << ceil(digits);

	return 0;
}