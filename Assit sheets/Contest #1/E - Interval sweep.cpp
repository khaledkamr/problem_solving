#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long a, b;
	cin >> a >> b;

	if (abs(a - b) == 1 || a == b && a != 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}