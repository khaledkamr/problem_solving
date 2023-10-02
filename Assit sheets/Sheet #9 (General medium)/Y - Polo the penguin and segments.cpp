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
	int n, k;
	cin >> n >> k;
	vector<pair<int, int>> seg(n);

	for (int i = 0; i < n; i++)
	{
		cin >> seg.at(i).first >> seg.at(i).second;
	}

	int value = 0, count = 0;

	for (int i = 0; i < n; i++)
	{
		for (int j = seg.at(i).first; j <= seg.at(i).second; j++)
		{
			value++;
		}
	}

	while (value % k != 0)
	{
		value++;
		count++;
	}
	cout << count;
}