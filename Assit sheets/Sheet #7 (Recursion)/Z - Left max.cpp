#include<iostream>
#define ll long long
using namespace std;

int howManyWays(int s, int e)
{
	if (s >= e)
	{
		return s == e;
	}

	return howManyWays(s + 1, e) + howManyWays(s + 2, e) + howManyWays(s + 3, e);
}

int main()
{
	int a, b;
	cin >> a >> b;
	cout << howManyWays(a, b);
}
