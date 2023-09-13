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

	if (a + b * c == d)
	{
		cout << "YES";
	}
	else if (a + b - c == d)
	{
		cout << "YES";
	}
	else if (a * b + c == d)
	{
		cout << "YES";
	}
	else if (a * b - c == d)
	{
		cout << "YES";
	}
	else if (a - b * c == d)
	{
		cout << "YES";
	}
	else if (a - b + c == d)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}