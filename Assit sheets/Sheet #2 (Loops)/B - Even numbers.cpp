#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	if (n == 1 || n == 0)
	{
		cout << -1;
	}

	for (long long i = 1; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}