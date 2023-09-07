#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main()
{
	long long a, b, c;

	cin >> a >> b >> c;

	long long max = a, min = a;

	if (b > max)
	{
		max = b;
	}
	if (c > max)
	{
		max = c;
	}
	if (b < min)
	{
		min = b;
	}
	if (c < min)
	{
		min = c;
	}

	cout << min << " " << max;




	return 0;
}