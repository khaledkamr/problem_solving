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
	string scal, w;
	int sumR = 0, sumL = 0;
	cin >> scal >> w;

	for (int i = 0; i < scal.size(); i++)
	{
		if (scal[i] == '|')
		{
			for (i = i + 1; i < scal.size(); i++)
			{
				sumR++;
			}
			break;
		}
		sumL++;
	}

	for (int i = 0; i < w.size(); i++)
	{
		if (sumL < sumR)
		{
			scal = w[i] + scal;
			sumL++;
		}
		else
		{
			scal = scal + w[i];
			sumR++;
		}
	}

	if (sumL == sumR)
	{
		cout << scal;
	}
	else cout << "Impossible";
}