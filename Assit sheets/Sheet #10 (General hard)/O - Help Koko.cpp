#include<iostream>
#include<cstdlib>
#include<string>
#include<numeric> 
#include<algorithm>
#include<math.h>
#include<cmath>
#include<iomanip>
#include<vector>
#include<utility>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

bool prime(int x)
{
	if (x <= 1)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return false;
			break;
		}
	}
	return true;
}

int main()
{
	IOS;
	int n, x;
	cin >> n >> x;
	vector<int> vec(n);
	vector<int> op(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec.at(i);
	}
	for (int i = 0; i < n; i++)
	{
		cin >> op.at(i);
	}

	for (int i = 0; i < n; i++)
	{
		if (op.at(i) == 1)
		{
			if (prime(vec.at(i)))
			{
				if (vec.at(i) % 2 == 0)
				{
					cout << "0 ";
				}
				else
				{
					cout << "5 ";
				}
			}
			else
			{
				cout << "-1 ";
			}
		}
		else
		{
			cout << "0 ";
		}
	}
}
