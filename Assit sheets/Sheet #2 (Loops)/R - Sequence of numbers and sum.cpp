#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, m, sum;
	cin >> n >> m;

	do
	{
		sum = 0;

		for (int i = min(n, m); i <= max(n, m); i++)
		{
			cout << i << " ";
			sum += i;
		}

		cout << "sum =" << sum << endl;

		cin >> n >> m;

	} while (min(m, n) > 0);

	return 0;
}