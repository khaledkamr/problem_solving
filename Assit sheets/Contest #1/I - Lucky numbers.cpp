#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	char a, b;
	cin >> a >> b;

	int x = a - '0';
	int y = b - '0';

	if (y == 0)
	{
		cout << "YES";
	}
	else if (x % y == 0 || y % x == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}