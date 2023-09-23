#include<iostream>
#include<cstdlib>
#include<string>
#include<algorithm>
#include<math.h>
#include<cmath>
#define ll long long
using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int good[10], num = 48;
	int countGood = 0;
	for (int i = 0; i <= k; i++)
	{
		good[i] = num;
		num++;
	}

	while (n--)
	{
		string x;
		cin >> x;
		int count = 0;

		for (int i = 0; i <= k; i++)
		{
			for (int j = 0; j < x.size(); j++)
			{
				if (good[i] == x[j])
				{
					count++;
					break;
				}
			}
		}
		if (count == k + 1) countGood++;
	}
	cout << countGood;
}