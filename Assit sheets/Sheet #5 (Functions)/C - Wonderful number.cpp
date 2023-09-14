#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

bool palindrome_binary(int& x)
{
	string bin, rev;

	for (int i = x; i > 0; i /= 2)
	{
		bin += i % 2;
	}

	rev = bin;
	reverse(rev.begin(), rev.end());

	if (bin == rev)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool odd(int x)
{
	if (x % 2 != 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	int n;

	cin >> n;

	if (palindrome_binary(n) && odd(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}