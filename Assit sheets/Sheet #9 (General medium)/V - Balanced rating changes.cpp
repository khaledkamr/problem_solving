#include<iostream>
#include<cstdlib>
#include<string>
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
	int n;
	cin >> n;
	vector<int> rate(n);
	vector<int>::iterator it;

	for (int i = 0; i < n; i++)
	{
		cin >> rate.at(i);
	}

	bool Ceil = true;

	for (int i = 0; i < n; i++)
	{
		if (rate.at(i) % 2 == 0)
		{
			rate.at(i) /= 2;
		}
		else if (Ceil)
		{			
			rate.at(i) = ceil((double)rate.at(i) / 2.0);
			Ceil = false;
		}
		else
		{
			rate.at(i) = floor((double)rate.at(i) / 2.0);
			Ceil = true;
		}
	}

	for (it = rate.begin(); it < rate.end(); it++)
	{
		cout << *it << endl;
	}
}