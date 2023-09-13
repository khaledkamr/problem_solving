#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long a, b, k;

	cin >> a >> b >> k;

	if (a % k == 0 && b % k == 0)
	{
		cout << "Both";
	}
	else if (a % k == 0 && b % k != 0)
	{
		cout << "Memo";
	}
	else if (a % k != 0 && b % k == 0)
	{
		cout << "Momo";
	}
	else if (a % k != 0 && b % k != 0)
	{
		cout << "No One";
	}

	return 0;
}