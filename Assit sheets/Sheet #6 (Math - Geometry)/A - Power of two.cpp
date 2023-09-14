#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	long long int n;
	cin >> n;
	double r = log2(n);

	if (r == (int)r)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}

	return 0;
}