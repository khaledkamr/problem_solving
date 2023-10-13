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
	string x;
	int k, snow = 0, candy = 0;
	cin >> x >> k;

	for (int i = 0; i < x.size(); i++)
	{
		if (x[i] == '?') candy++;
		if (x[i] == '*') snow++;
	}

	if (x.size() - (candy + snow) == k)
	{
		for (int i = 0; i < x.size(); i++)
		{
			if (x[i] == '?' || x[i] == '*')
			{
				x.erase(i, 1);
			}
		}
		cout << x;
	}
	else if (x.size() - (candy + snow) > k)
	{
		if (candy + snow >= (x.size() - (candy + snow)) - k)
		{
			int l = 0;

			for (int i = 0; i < x.size(); i++)
			{
				if (x[i + 1] == '*' || x[i + 1] == '?')
				{
					x[i] = '?';
					l++;
				}
				if (l == (x.size() - (candy + snow)) - k)
				{
					break;
				}
			}
			for (int i = 0; i < x.size(); i++)
			{
				if (x[i] != '?' && x[i] != '*')
				{
					cout << x[i];
				}
			}
		}
		else
		{
			cout << "Impossible";
		}
	}
	else if (x.size() - (candy + snow) < k)
	{
		if (snow == 0)
		{
			cout << "Impossible";
		}
		else
		{
			for (int i = 0; i < x.size(); i++)
			{
				if (x[i] == '?')
				{
					x.erase(i, 1);
				}
			}

			while (snow != 1)
			{
				for (int i = 0; i < x.size(); i++)
				{
					if (x[i] == '*')
					{
						x.erase(i, 1);
						snow--;
						break;
					}
				}
			}

			for (int i = 0; i < x.size(); i++)
			{
				if (x[i] == '*')
				{
					x.erase(i, 1);

					while (x.size() != k)
					{
						string ch;
						ch.push_back(x[i - 1]);
						x.insert(i, ch);
					}
					cout << x;
				}
			}
		}
	}
}