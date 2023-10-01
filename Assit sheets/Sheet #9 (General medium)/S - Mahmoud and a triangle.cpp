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
	vector<int> vec(n);

	for (int i = 0; i < n; i++)
	{
		cin >> vec.at(i);
	}

	sort(vec.begin(), vec.end());

	for (int i = 0; i <= n - 3; i++)
	{
		int l1, l2, l3;
		l1 = vec[i];
		l2 = vec[i + 1];
		l3 = vec[i + 2];

		if (l1 + l2 > l3)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}