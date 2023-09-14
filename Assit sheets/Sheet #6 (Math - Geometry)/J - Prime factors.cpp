#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
#define ll long long
using namespace std;

int main()
{
	ll num;
	cin >> num;
	int flag = 0;

	for (int i = 2; i <= num / 2; i++)
	{
		int count = 0;
		while (num % i == 0)
		{
			count++;
			num /= i;
		}

		if (count > 0 && flag > 0)
		{
			cout << "*";
		}

		if (count > 0)
		{
			cout << "(" << i << "^" << count << ")";
			flag = 1;
		}

		if (num == 1)
		{
			break;
		}
	}

	if (num > 1 && flag)
	{
		cout << "*";
	}
	if (num > 1)
	{
		cout << "(" << num << "^" << 1 << ")";
	}

	return 0;
}