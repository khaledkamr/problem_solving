#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	string n;
	int x;
	cin >> n >> x;

	ll res = 0;

	for (int i = 0; i < n.size(); i++)
	{
		res *= 10;
		res += n[i] - '0';
		res %= x;
	}

	if (res == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}