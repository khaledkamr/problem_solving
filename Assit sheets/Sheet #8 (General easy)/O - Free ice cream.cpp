#include <iostream>
#define ll long long
using namespace std;

int main()
{
	ll n, packs, q, dis = 0;
	char ice;
	cin >> n >> packs;

	while (n--)
	{
		cin >> ice >> q;

		if (ice == '+')
		{
			packs += q;
		}
		else
		{
			if (q > packs)
			{
				dis++;
			}
			else
			{
				packs -= q;
			}
		}
	}
	cout << packs << " " << dis;
}