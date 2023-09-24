#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool unrated = false;

	for (int i = 0; i < n; i++)
	{
		int a, b, x;
		cin >> a >> b;

		if (a != b)
		{
			cout << "rated";
			return 0;
		}
		if (i != 0 && a > x)
		{
			unrated = true;
		}
		x = a;
	}

	if (unrated) cout << "unrated";
	else cout << "maybe";
}