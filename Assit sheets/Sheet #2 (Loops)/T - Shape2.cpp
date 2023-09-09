#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	int c = n - 1;

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= c; j++)
		{
			cout << " ";
		}

		for (int z = 1; z < i * 2; z++)
		{
			cout << "*";
		}

		c--;
		cout << endl;
	}

	return 0;
}