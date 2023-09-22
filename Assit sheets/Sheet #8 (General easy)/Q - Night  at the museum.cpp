#include <iostream>
#include <cstdlib>
#include<string>
#define ll long long
using namespace std;

int main()
{
	string x;
	cin >> x;
	char l = 'a';
	int rots = 0;

	for (int i = 0; i < x.size(); i++)
	{
		int res = abs(x[i] - l);
		if (res <= 13) rots += res;
		else rots += (26 - res);
		l = x[i];
	}
	cout << rots;
}