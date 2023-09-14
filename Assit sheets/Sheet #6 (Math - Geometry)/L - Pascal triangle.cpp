#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int val = 1;

		for (int k = 0; k <= i; k++)
		{
			cout << val;

			if (k != i)
			{
				cout << " ";
			}

			val = val * (i - k) / (k + 1);
		}
		cout << endl;
	}
	cout << endl;

	return 0;
}