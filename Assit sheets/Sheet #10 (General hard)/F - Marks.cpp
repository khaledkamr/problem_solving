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
	int n, m;
	cin >> n >> m;
	vector<string> stud(n);
	vector<string> mark(n);

	for (int i = 0; i < n; i++)
	{
		cin >> stud.at(i);
		mark.at(i) = "fail";
	}
	// student [stud-num] [sub-num]

	for (int i = 0; i < m; i++)
	{
		int best = 0;

		for (int j = 0; j < n; j++)
		{
			if (best < (int)stud[j][i])
			{
				best = (int)stud[j][i];
			}
		}

		for (int j = 0; j < n; j++)
		{
			if (best == (int)stud[j][i])
			{
				mark[j] = "successful";
			}
		}
	}

	int count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (mark[i] == "successful")
			{
				count++;
				break;
			}
		}
	}
	cout << count;
}