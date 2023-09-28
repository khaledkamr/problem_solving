#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;

bool palindrome(string str)
{
	string rev = str;
	reverse(rev.begin(), rev.end());

	if (str == rev)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool oneChar(string str)
{
	for (int i = 0; i < str.size() - 1; i++)
	{
		if (str[i] != str[i + 1])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	string x;
	cin >> x;

	if (oneChar(x))
	{
		cout << 0;
	}
	else if (palindrome(x))
	{
		cout << x.size() - 1;
	}
	else
	{
		cout << x.size();
	}
}