// this is the solution without recursion cuz idk how th it could be
// solve without runtime error or time limit

#include<iostream>
#define ll long long
using namespace std;

ll NCR(int n, int r)
{
	ll res = 1;
	int temp = 2;

	for (int i = r + 1; i <= n; i++)
	{
		res *= i;

		if (temp <= n - r && res % temp == 0)
		{
			res /= temp;
			temp++;
		}
	}

	return res;
}
int main()
{
	int n, r;
	cin >> n >> r;

	if (r > n)
	{
		cout << 0;
	}
	else
	{
		cout << NCR(n, r);
	}
}