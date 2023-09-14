#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;
	bool prime = true;

	for (int i = 2; sqrt(n) >= i; i++)
	{
		if (n % i == 0)
		{
			prime = false;
			break;
		}
	}

	if (n == 1 || n == 0)
	{
		cout << "NO";
	}
	else if (prime == true)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}