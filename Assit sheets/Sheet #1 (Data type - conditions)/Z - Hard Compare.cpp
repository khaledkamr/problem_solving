#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long a, b, c, d;

	cin >> a >> b >> c >> d;

	if (b * log(a) > d * log(c))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}