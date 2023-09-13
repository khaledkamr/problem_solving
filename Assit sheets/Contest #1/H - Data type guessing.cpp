#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	double n, k, a, res;
	long long int_res;
	cin >> n >> k >> a;

	res = n * k / a;
	int_res = res;

	if (res - int_res < 1 && res - int_res != 0)
	{
		cout << "double";
	}
	else if (res >= -2147483648 && res <= 2147483648)
	{
		cout << "int";
	}
	else
	{
		cout << "long long";
	}

	return 0;
}