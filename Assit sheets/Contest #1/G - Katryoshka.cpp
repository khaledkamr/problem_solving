//Time limit exceeded on test 104

#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long e, m, b, counter = 0;

	cin >> e >> m >> b;


	while (e > 0 && m > 0 && b > 0)
	{
		counter++;
		e--;
		m--;
		b--;
	}
	while (e > 1 && b > 0)
	{
		counter++;
		e -= 2;
		b--;
	}
	while (e > 1 && m > 0 && b > 0)
	{
		counter++;
		e -= 2;
		m--;
		b--;
	}

	cout << counter;

	return 0;
}