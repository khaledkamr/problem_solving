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
	vector<string> team(n);

	for (int i = 0; i < n; i++)
	{
		cin >> team.at(i);
	}

	sort(team.begin(), team.end());
	int g1 = 0, g2 = 0;
	g1 = 1;

	for (int i = 1; i < n; i++)
	{
		if (team.at(i) == team.at(i - 1))
		{
			g1++;
		}
		else
		{
			for (i; i < n; i++)
			{
				g2++;
			}
		}
	}
	
	if (g1 > g2)
	{
		cout << team.front();
	}
	else cout << team.back();
}