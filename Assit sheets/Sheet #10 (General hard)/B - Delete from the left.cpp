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
	string x, y;
	cin >> x >> y;
	int xi = x.size() - 1, yi = y.size() - 1;

	for (xi; xi >= 0; xi--)
	{
		if (x[xi] == y[yi])
		{
			yi--;
		}
		else break;
	}

	x.erase(xi + 1);
	y.erase(yi + 1);
	cout << x.size() + y.size();
}