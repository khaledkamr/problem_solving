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

int main()
{
	IOS;
	int p, n1, n2, n3;
	cin >> p >> n1 >> n2 >> n3;
	int res = 0;

	for (int x = 0; x <= p; x++) 
	{
		for (int z = 0; z <= p; z++)
		{
			int i = (p - n1 * x - n2 * z) / n3;

			if (i < 0)
			{
				i = 0;
			}

			if (n1 * x + n2 * z + n3 * i == p)
			{
				res = max(res, x + z + i);
			}
		}
	}
	cout << res;
}
