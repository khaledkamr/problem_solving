#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#include<cmath>
using namespace std;

int main()
{
	long long t, a, b, res1, res2;
	cin >> t;

	while (t--)
	{
		cin >> a >> b;

		res1 = (min(a, b) - 1) * ((min(a, b) - 1) + 1) / 2;
		res2 = max(a, b) * (max(a, b) + 1) / 2;

		cout << res2 - res1 << endl;
	}

	return 0;
}