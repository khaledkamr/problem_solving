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
#include<unordered_set>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

bool check(string x, string y)
{
	if (x.size() > y.size())
	{
		return false;
	}

	int indx = 0;

	for (int i = 0; i < y.size(); i++)
	{
		if (x[indx] == y[i])
		{
			indx++;
		}
		if (indx == x.size())
		{
			return true;
		}
	}
	return false;
}

int main()
{
	IOS;
	string s, t, p;
	int q;
	cin >> q;

	while (q--)
	{
		cin >> s >> t >> p;

		if (check(s, t))
		{
			int f1[123] = { 0 }, f2[123] = { 0 };

			for (int i = 0; i < s.size(); i++)
			{
				f1[s[i]]++;
			}
			for (int i = 0; i < p.size(); i++)
			{
				f1[p[i]]++;
			}
			for (int i = 0; i < t.size(); i++)
			{
				f2[t[i]]++;
			}

			bool exist = true;

			for (int i = 97; i < 123; i++)
			{
				if (f1[i] < f2[i])
				{
					exist = false;
					break;
				}
			}
			if (exist)
			{
				cout << "YES\n";
			}
			else
			{
				cout << "NO\n";
			}
		}
		else
		{	
			cout << "NO\n";
		}
	}
}
