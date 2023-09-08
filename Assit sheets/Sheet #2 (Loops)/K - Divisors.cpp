#include<iostream>
#include<string>
#include<iomanip>
#include<algorithm>
#include<math.h>
using namespace std;

int main()
{
	long long n;
	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			cout << i << endl;
		}
	}

	return 0;
}