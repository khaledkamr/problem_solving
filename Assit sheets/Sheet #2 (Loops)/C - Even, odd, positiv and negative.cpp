#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	int n, x, even = 0, odd = 0, pos = 0, neg = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x;

		if (x % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

		if (x > 0)
		{
			pos++;
		}
		else if (x < 0)
		{
			neg++;
		}
	}

	cout << "Even: " << even << endl;
	cout << "Odd: " << odd << endl;
	cout << "Positive: " << pos << endl;
	cout << "Negative: " << neg << endl;

	return 0;
}