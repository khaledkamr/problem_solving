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

int main()
{
	IOS;
	int n;
	cin >> n;
	vector<pair<int, pair<int, int>>> vec(n);

	for (int i = 0; i < n; i++)
	{
		int soldiers, killed, sub;
		cin >> soldiers >> killed;
		sub = abs(soldiers - killed);
		vec.at(i).first = sub;
		vec.at(i).second.first = soldiers;
		vec.at(i).second.second = killed;
	}

	sort(vec.begin(), vec.end());
	reverse(vec.begin(), vec.end());
    ll count = vec.at(0).second.first;
	int sol = vec.at(0).first;

	for (int i = 1; i < n; i++)
	{
		if (sol < vec.at(i).second.first)
		{
			count += vec.at(i).second.first - sol;
			sol = vec.at(i).first;
		}
		else
		{
			sol -= vec.at(i).second.second;
		}
	}
	cout << count;
}
