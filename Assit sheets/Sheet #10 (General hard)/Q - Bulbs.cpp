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
#include <unordered_set>
#define ll long long
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
using namespace std;

int countMoments(vector<int>& vec) 
{
	int n = vec.size();
	int moments = 0;
	unordered_set<int> turnedOn;
	int maxBulb = 0;

	for (int i = 0; i < n; i++) 
	{
		turnedOn.insert(vec[i]);

		if (vec[i] == maxBulb + 1)
		{
			maxBulb++;

			while (turnedOn.count(maxBulb + 1) > 0) 
			{
				maxBulb++;
			}
			if (maxBulb == i + 1)
			{
				moments++;
			}
		}
	}
	return moments;
}

int main()
{
	IOS;
	int n;
	cin >> n;
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec[i];
	}

	int moments = countMoments(vec);
	cout << moments << endl;

	return 0;
}
