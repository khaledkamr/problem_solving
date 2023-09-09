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

	int fib1 = 0, fib2 = 1, fibn;

	for (int i = 1; i <= n; i++)
	{
		if (i == 1)
		{
			cout << fib1 << " ";
		}
		else if (i == 2)
		{
			cout << fib2 << " ";
		}
		else
		{
			fibn = fib1 + fib2;
			cout << fibn << " ";

			fib1 = fib2;
			fib2 = fibn;
		}
	}

	return 0;
}