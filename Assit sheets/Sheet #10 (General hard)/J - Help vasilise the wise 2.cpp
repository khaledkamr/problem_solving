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
	int r1, r2, c1, c2, d1, d2;
	cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

	for (int x = 1; x <= 9; x++)
	{
		for (int y = 1; y <= 9; y++)
		{
			for (int z = 1; z <= 9; z++)
			{
				for (int i = 1; i <= 9; i++)
				{
					if (x != y && x != z && x != i && z != y && z != i && i != y)
					{
						if (x + y == r1 && z + i == r2 && x + i == d1 &&
							y + z == d2 && x + z == c1 && y + i == c2)
						{
							cout << x << " " << y << endl;
							cout << z << " " << i;
							return 0;
						}
					}
				}
			}
		}
	}
	cout << -1;
}