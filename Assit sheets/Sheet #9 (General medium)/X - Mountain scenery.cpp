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
	int n, k, count = 0;
	cin >> n >> k;
	vector<int> hight(2 * n + 1);
	vector<int>::iterator it;

	for (int i = 0; i < hight.size(); i++)
	{
		cin >> hight.at(i);	
	}

	for (int i = 1; i < hight.size() - 1; i++)
	{
		if (hight.at(i) > hight.at(i + 1) + 1 && hight.at(i) > hight.at(i - 1) + 1)
		{
			hight.at(i)--;
			count++;
		}

		if (count == k) break;
	}

	for (it = hight.begin(); it < hight.end(); it++)
	{
		cout << *it << " ";
	}
}