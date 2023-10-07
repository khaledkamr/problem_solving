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
	string num;
	cin >> num;

	for (ll i = 0; i < num.size(); i++)
	{
		int t = num[i] - '0';

		if (i == 0 && 9 - t == 0)
		{
			cout << 9;
		}
		else if (9 - t < t)
		{
			cout << 9 - t;
		}
		else
		{
			cout << t;
		}
	}
}