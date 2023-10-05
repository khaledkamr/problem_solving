#include<iostream>
#include<cstdlib>
#include<string>
#include<numeric> 
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int main()
{
	IOS;
	ll t, n, sum;
	cin >> t;

	while (t--)
	{
		cin >> n >> sum;
		vector<ll> vec;
		vector<ll>::iterator it;

		if (n >= sum)
		{
			cout << "1 " << sum;
		}
		else if (n < sum)
		{
			ll maxSum = n * (n + 1) / 2;

			if (maxSum < sum)
			{
				cout << -1;
			}
			else
			{
				while (sum)
				{
					if (sum >= n)
					{
						vec.push_back(n);
						sum -= n;
						n--;
					}
					else
					{
						vec.push_back(sum);
						sum = 0;
					}
				}
				cout << vec.size() << " ";

				for (it = vec.begin(); it < vec.end(); it++)
				{
					cout << *it;

					if (*it != vec.back())
					{
						cout << " ";
					}
				}
			}
		}
		if (t != 0)
		{
			cout << endl;
		}
	}
}