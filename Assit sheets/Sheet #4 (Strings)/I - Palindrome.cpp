#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	string x, rev;
	cin >> x;
	rev = x;

	reverse(rev.begin(), rev.end());

	if (x == rev)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}