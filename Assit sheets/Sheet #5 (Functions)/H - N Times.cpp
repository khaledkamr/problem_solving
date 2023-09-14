#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long 

void printN(int count, char c)
{
	for (int i = 0; i < count; i++)
	{
		cout << c << " ";
	}

	cout << endl;
}

int main()
{
	int t, n;
	char c;
	cin >> t;

	while (t--)
	{
		cin >> n >> c;

		printN(n, c);
	}

	return 0;
}