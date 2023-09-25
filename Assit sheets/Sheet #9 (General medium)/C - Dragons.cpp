#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#include<vector>
#include<utility>
#define ll long long
using namespace std;

int main()
{
	vector<pair<int, int>> dragon;
	int heal, n, x, y;
	cin >> heal >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> x >> y;
		dragon.push_back(make_pair(x, y));
	}
	sort(dragon.begin(), dragon.end());

	for (int i = 0; i < n; i++)
	{
		if (heal > dragon.at(i).first)
		{
			heal += dragon.at(i).second;
		}
		else
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}